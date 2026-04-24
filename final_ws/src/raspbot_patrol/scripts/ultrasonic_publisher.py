#!/usr/bin/env python3
"""
export PYTHONPATH=$PYTHONPATH:~/temp/lib

run this command before executing this script
"""
import os
import sys

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32

import time

from McLumk_Wheel_Sports import bot


class UltrasonicPublisher(Node):
    def __init__(self):
        super().__init__('ultrasonic_publisher')

        self.publisher_ = self.create_publisher(Float32, '/ultrasonic_distance', 10)

        # 20 Hz publish rate (0.05 s period, matches official sample timing)
        self.timer = self.create_timer(0.05, self.timer_callback)

        # Turn on the ultrasonic ranging function
        bot.Ctrl_Ulatist_Switch(1)
        time.sleep(0.1)

        self.get_logger().info('Ultrasonic publisher started – publishing to /ultrasonic_distance')

    def timer_callback(self):
        try:
            diss_H = bot.read_data_array(0x1B, 1)[0]
            diss_L = bot.read_data_array(0x1A, 1)[0]
            dis_mm = (diss_H << 8) | diss_L

            dis_m = dis_mm / 1000.0

            msg = Float32()
            msg.data = dis_m
            self.publisher_.publish(msg)

            self.get_logger().info(f'Distance: {dis_mm} mm ({dis_m:.3f} m)')
        except Exception as e:
            self.get_logger().error(f'Sensor read failed: {e}')

    def destroy_node(self):
        self.get_logger().info('Shutting down – turning off ultrasonic sensor')
        bot.Ctrl_Ulatist_Switch(0)
        time.sleep(0.1)
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = UltrasonicPublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
