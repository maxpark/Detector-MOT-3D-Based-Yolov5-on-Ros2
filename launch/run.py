import os
import launch
from ament_index_python.packages import get_package_share_directory
from launch.substitutions import EnvironmentVariable
from launch.substitutions import LaunchConfiguration
from launch import LaunchDescription
from launch_ros.actions import Node
def generate_launch_description():
    para_dir = os.path.join(get_package_share_directory('detect_mot'), 'config', 'config.yaml')
    # rviz_config_dir = os.path.join(get_package_share_directory('detect_mot'), 'config', 'default.rviz')
    return LaunchDescription([
        Node(
            package='detect_mot',
            node_namespace='det',
            node_executable='detect_mot_socketnode',
            node_name='socket',
        ),
        Node(
            package='detect_mot',
            node_namespace='det',
            node_executable='detect_mot_yolonode',
            node_name='yolo',
            # output=''
        ),
        Node(
            package='detect_mot',
            node_namespace='det',
            node_executable='detect_mot_detectnode',
            node_name='detect'
        ),
        Node(
            package='detect_mot',
            node_namespace='det',
            node_executable='detect_mot_tracknode',
            node_name='track',
            # parameters=[para_dir],
            # remappings=None,
            # output='screen'
            # remappings=[
            #     ('/input/pose', '/turtlesim1/turtle1/pose'),
            #     ('/output/cmd_vel', '/turtlesim2/turtle1/cmd_vel'),
            # ]
        )
    ])