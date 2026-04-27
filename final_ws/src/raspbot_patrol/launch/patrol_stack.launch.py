# One-shot stack: ultrasonic publisher + patrol node with shared params.
# Set motor library path before launching, e.g.:
#   export PYTHONPATH=$PYTHONPATH:~/temp/lib
# Optional override:
#   ros2 launch raspbot_patrol patrol_stack.launch.py params_file:=/abs/path/params.yaml

import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    pkg_share = get_package_share_directory('raspbot_patrol')
    default_params = os.path.join(pkg_share, 'config', 'params.yaml')

    params_decl = DeclareLaunchArgument(
        'params_file',
        default_value=default_params,
        description='Absolute path to params.yaml',
    )
    params_file = LaunchConfiguration('params_file')

    ultrasonic = Node(
        package='raspbot_patrol',
        executable='ultrasonic_publisher.py',
        name='ultrasonic_publisher',
        output='screen',
        parameters=[params_file],
    )

    patrol = Node(
        package='raspbot_patrol',
        executable='patrol_node.py',
        name='patrol_node',
        output='screen',
        parameters=[params_file],
    )

    return LaunchDescription([
        params_decl,
        ultrasonic,
        patrol,
    ])
