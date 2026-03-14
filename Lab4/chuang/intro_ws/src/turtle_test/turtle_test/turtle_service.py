import time
import turtle

from turtle_interfaces.action import MakeSquare
from turtle_interfaces.msg import TurtlePose
from turtle_interfaces.srv import SetColors
from std_srvs.srv import Empty

import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.node import Node


class TurtleServer(Node):
    def __init__(self):
        super().__init__('turtle_server')

        # Action server
        self._action_server = ActionServer(
            self,
            MakeSquare,
            'make_square',
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback
        )

        # Services
        self.clear_srv = self.create_service(Empty, 'clear', self.clear_callback)
        self.colors_srv = self.create_service(SetColors, 'set_colors', self.colors_callback)

        # Turtle graphics
        self.turtle = turtle.Turtle()
        self.turtle.shape("turtle")
        self.turtle.pensize(2)
        self.turtle.speed("slowest")

    def destroy(self):
        self._action_server.destroy()
        super().destroy_node()

    def goal_callback(self, goal_request):
        self.get_logger().info('Received goal request')
        return GoalResponse.ACCEPT

    def cancel_callback(self, goal_handle):
        self.get_logger().info('Received cancel request')
        return CancelResponse.ACCEPT

    async def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')

        feedback_msg = MakeSquare.Feedback()

        for i in range(4):
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                self.get_logger().info('Goal canceled')
                return MakeSquare.Result()

            self.turtle.forward(goal_handle.request.square_size)
            self.turtle.write('C' + str(i + 1))
            self.turtle.left(90)

            feedback_msg.current_pose.heading = float(self.turtle.heading())
            pos = self.turtle.position()
            feedback_msg.current_pose.position = [float(pos[0]), float(pos[1])]
            goal_handle.publish_feedback(feedback_msg)

            time.sleep(1)

        goal_handle.succeed()

        result = MakeSquare.Result()
        result.final_pose.heading = float(self.turtle.heading())
        pos = self.turtle.position()
        result.final_pose.position = [float(pos[0]), float(pos[1])]

        self.get_logger().info('Returning result')
        return result

    def clear_callback(self, request, response):
        self.turtle.clear()
        return response

    def colors_callback(self, request, response):
        # Turtle color
        tcolor = [float(i) for i in request.turtle_rgb]
        if any(i > 1 for i in tcolor):
            tcolor = [x / 255.0 for x in tcolor]
        self.turtle.color(tcolor)

        # Pen color
        pcolor = [float(i) for i in request.pen_rgb]
        if any(i > 1 for i in pcolor):
            pcolor = [x / 255.0 for x in pcolor]
        self.turtle.pencolor(pcolor)

        return response


def main(args=None):
    rclpy.init(args=args)
    node = TurtleServer()
    rclpy.spin(node)
    node.destroy()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
