import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Vector3
import numpy as np
import math
from sklearn.linear_model import RANSACRegressor, LinearRegression

class StationDetector(Node):
    def __init__(self):
        super().__init__('station_detector')
        
        # 1. Subscriber: รับข้อมูลจาก Lidar (Hokuyo)
        self.subscription = self.create_subscription(
            LaserScan, '/scan', self.scan_callback, 10)
        
        # 2. Publisher: ส่งค่าระยะและมุมเอียงออกเป็น Vector3
        self.publisher_ = self.create_publisher(Vector3, '/station_vector', 10)
        
        # --- การตั้งค่าหุ่นยนต์ (Calibration) ---
        self.robot_offset = 0.19  
        self.min_range = 0.25      # กรองจุดที่ใกล้ตัวเกินไป (ป้องกันการมองเห็นตัวเอง)
        self.max_range = 3.0       # ระยะไกลสุดที่สนใจ
        self.fov_deg = 45.0        # มุมมองด้านหน้า

        self.get_logger().info(f"Station Detector Started (Offset: {self.robot_offset}m, FOV: +/-{self.fov_deg}deg)")

    def fit_line_to_points(self, points_xy):
        """ ใช้ RANSAC หาเส้นตรงซึ่งเป็นผิวหน้าของสถานี """
        if len(points_xy) < 10:
            return None
        
        # X ในที่นี้คือความลึก (Depth), Y คือความกว้าง (Width)
        X_feat = points_xy[:, 1].reshape(-1, 1) 
        y_target = points_xy[:, 0]
        
        ransac = RANSACRegressor(
            estimator=LinearRegression(),
            min_samples=5,
            residual_threshold=0.03, # ยอมรับความเพี้ยนได้ 3cm
            max_trials=100
        )
        
        try:
            ransac.fit(X_feat, y_target)
            inlier_mask = ransac.inlier_mask_
            
            if inlier_mask.sum() < 5: return None
            
            # หาจุดศูนย์กลางของเส้น (Centroid)
            inliers_y = X_feat[inlier_mask].flatten()
            centroid_y = np.median(inliers_y)
            centroid_x = ransac.predict([[centroid_y]])[0]
            
            # คำนวณมุมเอียง (Orientation Error)
            m = ransac.estimator_.coef_[0]
            heading_error = np.degrees(np.arctan(m))
            
            return centroid_x, centroid_y, heading_error
        except:
            return None

    def scan_callback(self, msg):
        ranges = np.array(msg.ranges)
        # คำนวณมุมของแต่ละจุดในรูปแบบ Radians
        angles = np.linspace(msg.angle_min, msg.angle_max, len(ranges))
        
        valid_points = []
        fov_rad = math.radians(self.fov_deg)

        for r, theta in zip(ranges, angles):
            # 1. กรองค่าที่ผิดพลาด และจุดที่ใกล้/ไกลเกินไป
            if math.isinf(r) or math.isnan(r) or r < self.min_range or r > self.max_range:
                continue
            
            # 2. กรองเฉพาะมุมที่กำหนด 
            if -fov_rad < theta < fov_rad:
                # แปลงจาก Polar เป็น Cartesian (หุ่นยนต์เป็นจุด 0,0)
                x = r * math.cos(theta)
                y = r * math.sin(theta)
                
                # กรองความกว้างวัตถุ (สมมติว่าสถานีกว้างไม่เกิน 1 เมตร ซ้าย 50 ขวา 50)
                if abs(y) < 0.5:
                    valid_points.append([x, y])
        
        # 3. ประมวลผลด้วย RANSAC
        if len(valid_points) > 0:
            result = self.fit_line_to_points(np.array(valid_points))
            
            if result:
                cx, cy, herr = result
                
                # สร้าง Message ส่งออก
                vec = Vector3()
                # ระยะจากหน้าหุ่น (Bumper) = ระยะจากกลางหุ่น - ค่า Offset
                vec.x = float(cx - self.robot_offset) 
                vec.y = float(cy)
                vec.z = math.radians(float(herr)) # ค่า Orientation (องศา)
                
                self.publisher_.publish(vec)
                
                # แสดงผลในหน้าจอ Terminal
                self.get_logger().info(f"DETECTED -> X: {vec.x:.3f}m (Face), Y: {vec.y:.3f}m, Z: {vec.z:.1f}deg")
            else:
                # กรณีมองเห็นจุดแต่หาเส้นตรงไม่เจอ
                pass

def main(args=None):
    rclpy.init(args=args)
    node = StationDetector()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
