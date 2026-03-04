from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # 1. โหนดเปิดเซนเซอร์ Hokuyo แบบสาย LAN
        Node(
            package='urg_node',
            executable='urg_node_driver',
            name='urg_node',
            parameters=[{
                'ip_address': '192.168.0.10',  # ใช้ IP Address แทน Serial Port
                'laser_frame_id': 'laser_frame',
                'angle_min': -2.35,  #มุมแสกนซ้าย
                'angle_max': 2.35   #มุมแสกนขวา
            }]
        ),
        
        # 2. โหนดตั้งค่าตำแหน่ง Lidar บนตัวหุ่นยนต์
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='laser_static_tf',
            arguments=['0.0', '0.0', '0.15', '0.0', '0.0', '0.0', 'base_link', 'laser_frame']
        )
    ])

