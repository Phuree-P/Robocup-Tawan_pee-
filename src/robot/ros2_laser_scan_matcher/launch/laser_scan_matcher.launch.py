import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, LogInfo, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, Command
from launch_ros.actions import Node

def generate_launch_description():
    laser_scan_matcher_dir = LaunchConfiguration(
        'laser_scan_matcher_dir',
        default=os.path.join(
            get_package_share_directory('ros2_laser_scan_matcher'),
            'param',
            'laser_scan_matcher.yaml'))
    return LaunchDescription([
        LogInfo(msg=['Starting laser scan matcher node...']),
        DeclareLaunchArgument(
            'laser_scan_matcher_dir',
            default_value=laser_scan_matcher_dir,
            description='Specifying parameter direction'),
        Node(
            package='ros2_laser_scan_matcher',
            executable='laser_scan_matcher',
            parameters=[laser_scan_matcher_dir],
            output='screen'),
    ])
