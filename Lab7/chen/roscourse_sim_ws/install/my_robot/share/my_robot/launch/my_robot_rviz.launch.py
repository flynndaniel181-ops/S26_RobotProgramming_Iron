import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    pkg_path = get_package_share_directory('my_robot')
    urdf = os.path.join(pkg_path, 'urdf', 'my_robot.urdf')
    rviz_config = os.path.join(pkg_path, 'rviz', 'my_robot.rviz')

    with open(urdf, 'r', encoding='utf-8') as infp:
        robot_desc = infp.read()

    rsp = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': robot_desc}],
    )

    jsp = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        output='screen',
    )

    rviz = Node(
        package='rviz2',
        executable='rviz2',
        arguments=['-d', rviz_config],
        output='screen',
    )

    return LaunchDescription([rsp, jsp, rviz])
