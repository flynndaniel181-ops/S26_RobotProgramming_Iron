#!/usr/bin/env python3
import sys
sys.path.append('/root/temp/lib')

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from geometry_msgs.msg import Twist
from std_msgs.msg import Float32
from raspbot_patrol.action import GoToWaypoint
import McLumk_Wheel_Sports
import time

class PatrolNode(Node):
    def __init__(self):
        super().__init__('patrol_node')

        # 1. Initialize Velocity Interface
        self.cmd_vel_pub = self.create_publisher(Twist, '/cmd_vel', 10)

        # 2. Subscribe to Ultrasonic (Sensing Integration)
        self.ultrasonic_sub = self.create_subscription(
            Float32,
            '/ultrasonic_distance',
            self.distance_callback,
            10)

        # 3. Action Server for GoToWaypoint
        self.action_server = ActionServer(
            self,
            GoToWaypoint,
            'go_to_waypoint',
            self.execute_callback)

        # State Machine Variables
        self.current_state = "PATROLLING"
        self.last_distance = 100.0
        self.stop_threshold = 0.3  # Meters
        self.resume_threshold = 0.5 # Meters

        self.get_logger().info("Patrol Node Initialized - State: PATROLLING")

    def distance_callback(self, msg):
        self.last_distance = msg.data

        # State Machine Logic: PATROLLING -> STOPPED
        if self.last_distance < self.stop_threshold and self.current_state == "PATROLLING":
            self.current_state = "STOPPED"
            self.stop_robot()
            self.get_logger().warn(f"OBSTACLE @ {self.last_distance:.2f}m! State: STOPPED")

        # State Machine Logic: STOPPED -> PATROLLING
        elif self.last_distance > self.resume_threshold and self.current_state == "STOPPED":
            self.current_state = "PATROLLING"
            self.get_logger().info("Path Clear. Resuming PATROLLING")

    def stop_robot(self):
        McLumk_Wheel_Sports.stop_robot()

    async def execute_callback(self, goal_handle):
        self.get_logger().info(f"Navigating to Waypoint {goal_handle.request.waypoint_index}...")

        feedback_msg = GoToWaypoint.Feedback()
        result = GoToWaypoint.Result()

        # This loop represents the "Move/Turn" logic
        # In your next meeting, you'll replace this sleep with actual movement code
        for i in range(5):
            if self.current_state == "STOPPED":
                while self.current_state == "STOPPED":
                    time.sleep(0.5) # Wait for path to clear
	    # Inside execute_callback:
            McLumk_Wheel_Sports.move_forward(100)

            feedback_msg.distance_to_waypoint = float(5 - i)
            feedback_msg.current_state = self.current_state
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(1.0)

        goal_handle.succeed()
        result.success = True
        result.message = "Reached Waypoint"
        return result

def main(args=None):
    rclpy.init(args=args)
    node = PatrolNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()