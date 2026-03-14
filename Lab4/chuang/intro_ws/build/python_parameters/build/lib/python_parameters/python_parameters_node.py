import rclpy
from rclpy.node import Node
from rcl_interfaces.msg import ParameterDescriptor


class MinimalParam(Node):
    def __init__(self):
        super().__init__('minimal_param_node')

        # Declare parameters
        self.declare_parameter(
            'my_parameter',
            'world',
            ParameterDescriptor(description='Name to print in greeting')
        )

        self.declare_parameter(
            'wait_time',
            1.0,
            ParameterDescriptor(description='Time between prints (sec)')
        )

        # Read wait_time and use it in the timer
        wait_time = self.get_parameter('wait_time').get_parameter_value().double_value
        self.timer = self.create_timer(wait_time, self.timer_callback)

    def timer_callback(self):
        my_param = self.get_parameter('my_parameter').get_parameter_value().string_value
        self.get_logger().info('Hello %s!' % my_param)


def main(args=None):
    rclpy.init(args=args)
    node = MinimalParam()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
