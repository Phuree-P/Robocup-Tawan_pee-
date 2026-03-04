from ament_index_python.resources import has_resource

from launch.actions import DeclareLaunchArgument
from launch.launch_description import LaunchDescription
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution, TextSubstitution
from launch.conditions import IfCondition

from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode
from launch_ros.substitutions import FindPackageShare
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
import os
from ament_index_python.packages import get_package_share_directory

def generate_launch_description() -> LaunchDescription:
    # parameters
    camera_param_name = "camera"
    camera_param_default = "0"
    camera_param = LaunchConfiguration(camera_param_name, default=camera_param_default)
    camera_launch_arg = DeclareLaunchArgument(
        camera_param_name,
        default_value=camera_param_default,
        description="camera ID or name"
    )

    format_param_name = "format"
    format_param_default = ""
    format_param = LaunchConfiguration(format_param_name, default=format_param_default)
    format_launch_arg = DeclareLaunchArgument(
        format_param_name,
        default_value=format_param_default,
        description="pixel format"
    )

    # camera calibration (in package)
    config_info_default = PathJoinSubstitution([
        FindPackageShare("ired_aruco"),
        "config",
        "camera_calibration",
        "ost.yaml",
    ])

    camera_info_url = LaunchConfiguration("camera_info_url")
    declare_info = DeclareLaunchArgument(
        "camera_info_url",
        default_value=[
            TextSubstitution(text="file://"),
            config_info_default
        ],
        description="camera_info_manager URL (file:///...)",
    )

    # optional image_view (default: false)
    use_image_view = LaunchConfiguration("use_image_view")
    declare_use_image_view = DeclareLaunchArgument(
        "use_image_view",
        default_value="false",
        description="Enable image_view popup window"
    )

    # ---------------------------------------------------------
    # 1. ประกาศตัวแปร List ว่างๆ ไว้ก่อน (กัน Error)
    # ---------------------------------------------------------
    composable_nodes = [] 

    # camera node (ปิดไว้ เพราะเราใช้ RealSense เปิดแยกต่างหาก)
    # composable_nodes += [
    #     ComposableNode(
    #         package="camera_ros",
    #         plugin="camera::CameraNode",
    #         parameters=[{
    #             "camera": camera_param,
    #             "width": 640,
    #             "height": 480,
    #             "format": format_param,
    #             "camera_info_url": camera_info_url, 
    #         }],
    #         extra_arguments=[{"use_intra_process_comms": True}],
    #     )
    # ]

    # add ImageViewNode only if enabled
    if has_resource("packages", "image_view"):
        composable_nodes += [
            ComposableNode(
                package="image_view",
                plugin="image_view::ImageViewNode",
                # Remap ของตัวดูภาพ (Viewing only)
                remappings=[
                    ('/image_raw', '/camera/camera/color/image_raw'),
                    ('/camera_info', '/camera/camera/color/camera_info')
                ],
                extra_arguments=[{"use_intra_process_comms": True}],
                condition=IfCondition(use_image_view),
            ),
        ]

    container = ComposableNodeContainer(
        name="camera_container",
        namespace="",
        package="rclcpp_components",
        executable="component_container",
        composable_node_descriptions=composable_nodes,
        output="screen",
    )

    # ---------------------------------------------------------
    # 2. แก้ส่วน Aruco Marker ให้รับภาพจาก RealSense โดยตรง
    # ---------------------------------------------------------
    # เราใช้ Node โดยตรงแทน Include เพื่อให้ใส่ remappings ได้ง่ายกว่า
    aruco_node = Node(
        package='ros2_aruco',
        executable='aruco_node',
        name='aruco_node',
        parameters=[{
            'marker_size': 0.05,        # ขนาด Marker (เมตร)
            'aruco_dictionary_id': 'DICT_ARUCO_ORIGINAL', # ชนิด Marker (เช็คให้ตรงกับที่ใช้จริง)
            'image_topic': '/camera/camera/color/image_raw',
            'camera_info_topic': '/camera/camera/color/camera_info',
            'camera_frame': 'camera_link'
        }],
        remappings=[
            ('/camera/image_raw', '/camera/camera/color/image_raw'),
            ('/camera/camera_info', '/camera/camera/color/camera_info')
        ],
        output='screen'
    )

    # Open RViz
    use_rviz = LaunchConfiguration('use_rviz', default='false')
    declare_use_rviz = DeclareLaunchArgument(
        'use_rviz',
        default_value='false',
        description='Open RViz if true'
    )

    rviz_config_dir = os.path.join(
        get_package_share_directory('ired_aruco'),
        'rviz',
        'aruco.rviz'
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
        camera_launch_arg,
        format_launch_arg,
        declare_info,
        declare_use_image_view,
        container,
        aruco_node, # เปลี่ยนจาก aruco_launch เป็น aruco_node ตัวใหม่ของเรา
        rviz_node,
        declare_use_rviz
    ])