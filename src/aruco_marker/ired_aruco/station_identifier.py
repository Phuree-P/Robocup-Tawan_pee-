import rclpy
from rclpy.node import Node
from ros2_aruco_interfaces.msg import ArucoMarkers
from std_msgs.msg import String

class ArucoStationDetector(Node):
    def __init__(self):
        super().__init__('aruco_station_detector')
        
        # คอยฟังข้อมูลจาก ros2_aruco (ที่ launch ไฟล์เปิดไว้)
        self.subscription = self.create_subscription(
            ArucoMarkers,
            '/aruco_markers',
            self.callback,
            10)
        
        # Publisher สำหรับบอกชื่อสถานี
        self.publisher_ = self.create_publisher(String, '/current_station_name', 10)
        
        # --- กำหนด ID ของแต่ละสถานีตรงนี้ ---
        self.station_db = {
            1: "Station_Alpha",
            2: "Station_Beta",
            3: "Home_Base"
        }

    def callback(self, msg):
        if len(msg.marker_ids) > 0:
            for marker_id in msg.marker_ids:
                # ตรวจสอบว่า ID ที่เจอ ตรงกับในฐานข้อมูลเราไหม
                station_name = self.station_db.get(marker_id, f"Unknown_ID_{marker_id}")
                
                # ส่งชื่อสถานีออกไป
                name_msg = String()
                name_msg.data = station_name
                self.publisher_.publish(name_msg)
                
                self.get_logger().info(f'Detected: {station_name}')

def main(args=None):
    rclpy.init(args=args)
    node = ArucoStationDetector()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()