#!/usr/bin/env python3
"""
export PYTHONPATH=$PYTHONPATH:~/temp/lib

ros2 run raspbot_patrol ultrasonic_publisher.py --ros-args --params-file <path>/params.yaml
"""
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
import time

from McLumk_Wheel_Sports import bot


class UltrasonicPublisher(Node):
    def __init__(self):
        super().__init__('ultrasonic_publisher')

        # ── Load parameter from params.yaml ──────────────────────
        self.declare_parameter('sensor_publish_hz', 20.0)
        publish_hz = self.get_parameter('sensor_publish_hz').value

        self.publisher_ = self.create_publisher(Float32, '/ultrasonic_distance', 10)
        self.timer = self.create_timer(1.0 / publish_hz, self.timer_callback)

        bot.Ctrl_Ulatist_Switch(1)
        time.sleep(0.1)

        self.get_logger().info(
            f'Ultrasonic publisher started | rate={publish_hz} Hz → /ultrasonic_distance')

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
