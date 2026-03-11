import rclpy
from rclpy.node import Node
from ros2_aruco_interfaces.msg import ArucoMarkers
from std_msgs.msg import String

class StationIdentifier(Node):
    def __init__(self):
        super().__init__('station_identifier_node')
        
        # Subscriber: ฟังข้อมูล ArUco จากแพ็กเกจ ired_aruco
        self.subscription = self.create_subscription(
            ArucoMarkers,
            '/aruco_markers',
            self.callback,
            10)
            
        # Publisher: ส่งชื่อสถานีออกไป
        self.publisher_ = self.create_publisher(String, '/current_station_name', 10)
        
        # ฐานข้อมูล ID (แก้ไขเลข ID ตามหน้างานได้เลย)
        self.station_db = {
            1: "Station_A_Charging",
            2: "Station_B_Loading",
            3: "Station_C_Parking"
        }

    def callback(self, msg):
        for marker_id in msg.marker_ids:
            station_name = self.station_db.get(marker_id, f"Unknown_ID_{marker_id}")
            
            # ส่งข้อมูลออกไป
            out_msg = String()
            out_msg.data = station_name
            self.publisher_.publish(out_msg)
            
            self.get_logger().info(f'Detected: {station_name}')

def main(args=None):
    rclpy.init(args=args)
    node = StationIdentifier()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()