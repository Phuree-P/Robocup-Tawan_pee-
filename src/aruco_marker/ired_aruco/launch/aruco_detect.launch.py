import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch.conditions import IfCondition
from launch_ros.actions import Node, SetRemap
from launch_ros.substitutions import FindPackageShare

def generate_launch_description() -> LaunchDescription:

    # 1. THE BULLETPROOF REMAP: Forces all nodes to use the Depth Camera
    remap_image = SetRemap(src='/camera/image_raw', dst='/camera/camera/color/image_raw')
    remap_info = SetRemap(src='/camera/camera_info', dst='/camera/camera/color/camera_info')

    # 2. Aruco Marker Detection
    aruco_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([
                FindPackageShare("ros2_aruco"),
                "launch",
                "aruco_recognition.launch.py",
            ])
        )
    )

    # 3. Open RViz
    use_rviz = LaunchConfiguration('use_rviz', default='false')
    declare_use_rviz = DeclareLaunchArgument(
        'use_rviz', default_value='false', description='Open RViz if true'
    )

    rviz_config_dir = os.path.join(
        get_package_share_directory('ired_aruco'), 'rviz', 'aruco.rviz'
    )

    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', rviz_config_dir],
        output='screen',
        condition=IfCondition(use_rviz),
    )

    return LaunchDescription([
        remap_image,  # Applies the remapping
        remap_info,   # Applies the remapping
        declare_use_rviz,
        aruco_launch,
        rviz_node,
    ])
