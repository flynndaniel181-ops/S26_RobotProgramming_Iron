#!/usr/bin/env python3
"""
export PYTHONPATH=$PYTHONPATH:~/temp/lib

ros2 run raspbot_patrol patrol_node.py --ros-args --params-file <path>/params.yaml
"""
import sys
sys.path.append('/root/temp/lib')
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

# ── State constants ──────────────────────────────────────────────
IDLE     = "IDLE"
CIRCLE   = "CIRCLE"
STOPPING = "STOPPING"
BACKING  = "BACKING"
TURNING  = "TURNING"


class PatrolNode(Node):
    def __init__(self):
        super().__init__('patrol_node')

        # ── Load ALL parameters from params.yaml ─────────────────
        self.declare_parameter('motor_speed', 20)
        self.declare_parameter('circle_param', 10)
        self.declare_parameter('stop_distance', 0.25)
        self.declare_parameter('safe_distance', 0.45)
        self.declare_parameter('avoid_stop_time', 0.5)
        self.declare_parameter('avoid_back_time', 1.0)
        self.declare_parameter('avoid_turn_time', 0.8)
        self.declare_parameter('control_hz', 10.0)
        self.declare_parameter('seconds_per_lap', 10.0)

        self.speed          = self.get_parameter('motor_speed').value
        self.circle_param   = self.get_parameter('circle_param').value
        self.stop_threshold = self.get_parameter('stop_distance').value
        self.safe_threshold = self.get_parameter('safe_distance').value
        control_hz          = self.get_parameter('control_hz').value
        self.seconds_per_lap = self.get_parameter('seconds_per_lap').value

        # Convert avoidance times (seconds) → tick counts
        avoid_stop_s = self.get_parameter('avoid_stop_time').value
        avoid_back_s = self.get_parameter('avoid_back_time').value
        avoid_turn_s = self.get_parameter('avoid_turn_time').value
        self.stop_ticks = int(avoid_stop_s * control_hz)
        self.back_ticks = int(avoid_back_s * control_hz)
        self.turn_ticks = int(avoid_turn_s * control_hz)

        cb = ReentrantCallbackGroup()



        # ── Subscribe to ultrasonic distance ─────────────────────
        self.ultrasonic_sub = self.create_subscription(
            Float32, '/ultrasonic_distance',
            self.distance_callback, 10,
            callback_group=cb)

        # ── Action Server ────────────────────────────────────────
        self.action_server = ActionServer(
            self, GoToWaypoint, 'go_to_waypoint',
            self.execute_callback,
            callback_group=cb)

        # ── Runtime state ────────────────────────────────────────
        self.state = IDLE
        self.last_distance = 999.0
        self.avoid_counter = 0

        # ── Control loop ─────────────────────────────────────────
        self.control_timer = self.create_timer(
            1.0 / control_hz, self.control_loop, callback_group=cb)

        self.get_logger().info(
            f'Patrol node ready | speed={self.speed} circle_param={self.circle_param} '
            f'stop={self.stop_threshold}m safe={self.safe_threshold}m '
            f'control={control_hz}Hz')

    # ── Ultrasonic callback ──────────────────────────────────────
    def distance_callback(self, msg):
        self.last_distance = msg.data

    # ── Main control loop ────────────────────────────────────────
    def control_loop(self):
        if self.state == IDLE:
            return

        elif self.state == CIRCLE:
            if self.last_distance < self.stop_threshold:
                stop_robot()
                self.state = STOPPING
                self.avoid_counter = 0
                self.get_logger().warn(
                    f'Obstacle @ {self.last_distance:.2f} m → STOPPING')
            else:
                move_param_forward(self.speed, self.circle_param)

        elif self.state == STOPPING:
            self.avoid_counter += 1
            if self.avoid_counter >= self.stop_ticks:
                self.state = BACKING
                self.avoid_counter = 0
                self.get_logger().info('Backing up…')

        elif self.state == BACKING:
            move_backward(self.speed)
            self.avoid_counter += 1
            if self.avoid_counter >= self.back_ticks:
                stop_robot()
                self.state = TURNING
                self.avoid_counter = 0
                self.get_logger().info('Turning away…')

        elif self.state == TURNING:
            rotate_left(self.speed)
            self.avoid_counter += 1
            if self.avoid_counter >= self.turn_ticks:
                self.state = CIRCLE
                self.avoid_counter = 0
                self.get_logger().info('Resuming circle patrol ↻')

    # ── Action: execute patrol ───────────────────────────────────
    def execute_callback(self, goal_handle):
        laps = goal_handle.request.waypoint_index
        duration = int(laps * self.seconds_per_lap)
        self.get_logger().info(
            f'Goal received – patrol {laps} lap(s) ≈ {duration} s')

        self.state = CIRCLE

        feedback = GoToWaypoint.Feedback()
        result   = GoToWaypoint.Result()
        elapsed  = 0

        while elapsed < duration:
            feedback.distance_to_waypoint = self.last_distance
            feedback.current_state = self.state
            goal_handle.publish_feedback(feedback)
            time.sleep(1.0)
            elapsed += 1

        self.state = IDLE
        stop_robot()

        goal_handle.succeed()
        result.success = True
        result.message = f'Patrol complete – {laps} lap(s) in {elapsed} s'
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
