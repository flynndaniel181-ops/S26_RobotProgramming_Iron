from action_msgs.msg import GoalStatus
from turtle_interfaces.action import MakeSquare

import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from rcl_interfaces.msg import ParameterDescriptor


class TurtleSquareClient(Node):
    def __init__(self):
        super().__init__('square_client')
        self.declare_parameter('square_size', 50.0, ParameterDescriptor(description='Side length of the square'))
        self._action_client = ActionClient(self, MakeSquare, 'make_square')

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return

        self.get_logger().info('Goal accepted')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def feedback_callback(self, feedback):
        self.get_logger().info(f"Feedback: {feedback.feedback.current_pose}")

    def get_result_callback(self, future):
        result = future.result().result
        status = future.result().status
        if status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info(f"Goal succeeded! Final pose: {result.final_pose}")
        else:
            self.get_logger().info(f"Goal failed with status: {status}")
        rclpy.shutdown()

    def send_goal(self):
        self.get_logger().info('Waiting for action server...')
        self._action_client.wait_for_server()

        goal_msg = MakeSquare.Goal()
        square_size = self.get_parameter('square_size').get_parameter_value().double_value
        goal_msg.square_size = float(square_size)

        self.get_logger().info('Sending goal request...')
        self._send_goal_future = self._action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback
        )
        self._send_goal_future.add_done_callback(self.goal_response_callback)


def main(args=None):
    rclpy.init(args=args)
    node = TurtleSquareClient()
    node.send_goal()
    rclpy.spin(node)


if __name__ == '__main__':
    main()
