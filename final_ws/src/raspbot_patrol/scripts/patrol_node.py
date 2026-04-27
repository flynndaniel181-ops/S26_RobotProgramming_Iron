#!/usr/bin/env python3
"""
export PYTHONPATH=$PYTHONPATH:~/temp/lib

ros2 run raspbot_patrol patrol_node.py --ros-args --params-file <path>/params.yaml

Hardcoded detour: stop -> optional reverse -> left ~90 deg -> forward arc ->
left ~90 deg -> resume patrol with the same circle_param.

Patrol budget: laps * seconds_per_lap is "clean lap" time. Wall clock ticks down
every second; each completed detour adds detour_time_allowance seconds back
(measure one full detour on the robot and set it in params.yaml).
"""
import threading

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from std_msgs.msg import Float32
from raspbot_patrol.action import GoToWaypoint
import time

from McLumk_Wheel_Sports import (
    move_param_forward,
    move_backward,
    rotate_left,
    stop_robot,
)

# ── States ───────────────────────────────────────────────────────
IDLE          = "IDLE"
CIRCLE        = "CIRCLE"
DETOUR_STOP   = "DETOUR_STOP"
DETOUR_BACK   = "DETOUR_BACK"
DETOUR_TURN1  = "DETOUR_TURN1"
DETOUR_ARC    = "DETOUR_ARC"
DETOUR_TURN2  = "DETOUR_TURN2"


class PatrolNode(Node):
    def __init__(self):
        super().__init__('patrol_node')

        self.declare_parameter('motor_speed', 20)
        self.declare_parameter('circle_param', 10)
        self.declare_parameter('stop_distance', 0.25)

        self.declare_parameter('detour_pre_stop_time', 0.35)
        self.declare_parameter('detour_back_time', 0.0)
        self.declare_parameter('detour_turn_90_time', 1.2)
        self.declare_parameter('detour_arc_time', 1.6)
        self.declare_parameter('detour_arc_param', 12)
        self.declare_parameter('detour_second_turn_time', 1.2)
        self.declare_parameter('detour_use_second_turn_scale', False)
        self.declare_parameter('detour_second_turn_scale', 1.0)

        self.declare_parameter('control_hz', 20.0)
        self.declare_parameter('seconds_per_lap', 10.0)
        self.declare_parameter('detour_time_allowance', 0.0)

        self.speed = self.get_parameter('motor_speed').value
        self.circle_param = self.get_parameter('circle_param').value
        self.stop_threshold = self.get_parameter('stop_distance').value
        control_hz = self.get_parameter('control_hz').value
        self.seconds_per_lap = self.get_parameter('seconds_per_lap').value
        self.detour_time_allowance = float(
            self.get_parameter('detour_time_allowance').value)

        self._detour_credit_lock = threading.Lock()
        self._detour_credit_pending = 0.0
        self._detours_finished = 0

        self.detour_arc_param = int(self.get_parameter('detour_arc_param').value)

        t_pre = float(self.get_parameter('detour_pre_stop_time').value)
        t_back = float(self.get_parameter('detour_back_time').value)
        t_t1 = float(self.get_parameter('detour_turn_90_time').value)
        t_arc = float(self.get_parameter('detour_arc_time').value)
        t_t2 = float(self.get_parameter('detour_second_turn_time').value)
        if self.get_parameter('detour_use_second_turn_scale').value:
            t_t2 = t_t1 * float(self.get_parameter('detour_second_turn_scale').value)

        self.detour_stop_ticks = max(1, int(t_pre * control_hz))
        self.detour_back_ticks = max(0, int(t_back * control_hz))
        self.detour_turn1_ticks = max(1, int(t_t1 * control_hz))
        self.detour_arc_ticks = max(1, int(t_arc * control_hz))
        self.detour_turn2_ticks = max(1, int(t_t2 * control_hz))

        cb = ReentrantCallbackGroup()

        self.ultrasonic_sub = self.create_subscription(
            Float32, '/ultrasonic_distance',
            self.distance_callback, 10,
            callback_group=cb)

        self.action_server = ActionServer(
            self, GoToWaypoint, 'go_to_waypoint',
            self.execute_callback,
            callback_group=cb)

        self.state = IDLE
        self.last_distance = 999.0
        self.detour_counter = 0

        self.control_timer = self.create_timer(
            1.0 / control_hz, self.control_loop, callback_group=cb)

        self.get_logger().info(
            f'Patrol ready | circle_param={self.circle_param} '
            f'detour: stop={t_pre}s back={t_back}s L90={t_t1}s arc={t_arc}s@{self.detour_arc_param} L90b={t_t2}s '
            f'control={control_hz}Hz | detour_time_allowance={self.detour_time_allowance}s')

    def distance_callback(self, msg):
        self.last_distance = msg.data

    def control_loop(self):
        if self.state == IDLE:
            return

        # Circle patrol: only here can ultrasonic re-trigger a new detour
        if self.state == CIRCLE:
            if self.last_distance < self.stop_threshold:
                stop_robot()
                self.state = DETOUR_STOP
                self.detour_counter = 0
                self.get_logger().warn(
                    f'Obstacle @ {self.last_distance:.2f} m → detour sequence')
            else:
                move_param_forward(self.speed, self.circle_param)
            return

        if self.state == DETOUR_STOP:
            stop_robot()
            self.detour_counter += 1
            if self.detour_counter >= self.detour_stop_ticks:
                self.detour_counter = 0
                if self.detour_back_ticks > 0:
                    self.state = DETOUR_BACK
                    self.get_logger().info('Detour: backup…')
                else:
                    self.state = DETOUR_TURN1
                    self.get_logger().info('Detour: 1st left ~90°…')
            return

        if self.state == DETOUR_BACK:
            move_backward(self.speed)
            self.detour_counter += 1
            if self.detour_counter >= self.detour_back_ticks:
                stop_robot()
                self.detour_counter = 0
                self.state = DETOUR_TURN1
                self.get_logger().info('Detour: 1st left ~90°…')
            return

        if self.state == DETOUR_TURN1:
            rotate_left(self.speed)
            self.detour_counter += 1
            if self.detour_counter >= self.detour_turn1_ticks:
                stop_robot()
                self.detour_counter = 0
                self.state = DETOUR_ARC
                self.get_logger().info('Detour: arc…')
            return

        if self.state == DETOUR_ARC:
            move_param_forward(self.speed, self.detour_arc_param)
            self.detour_counter += 1
            if self.detour_counter >= self.detour_arc_ticks:
                stop_robot()
                self.detour_counter = 0
                self.state = DETOUR_TURN2
                self.get_logger().info('Detour: 2nd left ~90° (re-align to circle)…')
            return

        if self.state == DETOUR_TURN2:
            rotate_left(self.speed)
            self.detour_counter += 1
            if self.detour_counter >= self.detour_turn2_ticks:
                stop_robot()
                self.detour_counter = 0
                if self.detour_time_allowance > 0.0:
                    with self._detour_credit_lock:
                        self._detour_credit_pending += self.detour_time_allowance
                self._detours_finished += 1
                self.state = CIRCLE
                self.get_logger().info(
                    f'Resume circle | detour #{self._detours_finished} done'
                    + (f' (+{self.detour_time_allowance}s patrol credit)'
                       if self.detour_time_allowance > 0.0 else ''))
            return

    def execute_callback(self, goal_handle):
        laps = goal_handle.request.waypoint_index
        circle_budget_s = float(laps * self.seconds_per_lap)
        with self._detour_credit_lock:
            self._detour_credit_pending = 0.0
        self._detours_finished = 0

        self.get_logger().info(
            f'Goal received – {laps} lap(s), no-obstacle budget {circle_budget_s:.1f} s '
            f'(each finished detour adds {self.detour_time_allowance}s)')

        self.state = CIRCLE

        feedback = GoToWaypoint.Feedback()
        result = GoToWaypoint.Result()
        circle_seconds_remaining = circle_budget_s
        wall_seconds = 0
        credit_applied_total = 0.0

        while circle_seconds_remaining > 0.0:
            feedback.distance_to_waypoint = self.last_distance
            feedback.current_state = self.state
            goal_handle.publish_feedback(feedback)
            time.sleep(1.0)
            wall_seconds += 1
            with self._detour_credit_lock:
                credit = self._detour_credit_pending
                self._detour_credit_pending = 0.0
            circle_seconds_remaining += credit
            credit_applied_total += credit
            circle_seconds_remaining -= 1.0

        self.state = IDLE
        stop_robot()

        goal_handle.succeed()
        result.success = True
        result.message = (
            f'Patrol complete – {laps} lap(s), base {circle_budget_s:.0f} s, '
            f'{self._detours_finished} detour(s), +{credit_applied_total:.1f} s credit, '
            f'{wall_seconds} s wall'
        )
        self.get_logger().info(result.message)
        return result


def main(args=None):
    rclpy.init(args=args)
    node = PatrolNode()
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        stop_robot()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
