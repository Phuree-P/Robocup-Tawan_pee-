import rclpy
from rclpy.node import Node
# 🎯 เปลี่ยนจาก Twist เป็น TwistStamped
from geometry_msgs.msg import TwistStamped, Vector3
import math

class OmniDockingController(Node):
    def __init__(self):
        super().__init__('omni_docking_controller')

        # ── Publishers & Subscribers ──────────────────────────────────────────
        # 🎯 เปลี่ยนชนิดข้อความเป็น TwistStamped
        self.cmd_pub = self.create_publisher(TwistStamped, '/cmd_vel', 10)
        self.error_sub = self.create_subscription(
            Vector3, 
            '/docking_error', 
            self.error_callback,  
            10
        )

        # ── PID Gains (tune these on real hardware!) ──────────────────────────
        self.kp_x   = 0.5
        self.kp_y   = 0.5
        self.kp_yaw = 0.8

        self.ki_x   = 0.01   
        self.ki_y   = 0.01
        self.ki_yaw = 0.02

        self.kd_x   = 0.05   
        self.kd_y   = 0.05
        self.kd_yaw = 0.1

        # ── Velocity Limits ───────────────────────────────────────────────────
        self.max_linear  = 0.3   # m/s
        self.max_angular = 0.5   # rad/s

        # ── Deadband: ignore tiny errors (prevents micro-jitter) ──────────────
        self.deadband_xy  = 0.01   # meters
        self.deadband_yaw = 0.005  # radians

        # ── Docking Complete Thresholds ───────────────────────────────────────
        self.goal_xy  = 0.02   # meters 
        self.goal_yaw = 0.01   # radians

        # ── PID State ─────────────────────────────────────────────────────────
        self.integral  = [0.0, 0.0, 0.0]   
        self.prev_error = [0.0, 0.0, 0.0]
        self.integral_limit = 0.3           

        # ── Watchdog: stop robot if perception node dies ──────────────────────
        self.watchdog_timeout = 0.5         
        self.last_msg_time = self.get_clock().now()
        self.watchdog_timer = self.create_timer(0.1, self.watchdog_callback)

        # ── State ─────────────────────────────────────────────────────────────
        self.docking_complete = False
        self.dt = 0.05  

        self.get_logger().info('✅ Omni Docking Controller Ready! Waiting for errors...')

    # ─────────────────────────────────────────────────────────────────────────
    def error_callback(self, msg: Vector3):
        if self.docking_complete:
            return

        self.last_msg_time = self.get_clock().now()

        error_x   = msg.x
        error_y   = msg.y
        error_yaw = msg.z

        # ── 1. Check if docking is complete ───────────────────────────────────
        xy_error = math.hypot(error_x, error_y)
        if xy_error < self.goal_xy and abs(error_yaw) < self.goal_yaw:
            self.get_logger().info('🎯 Docking Complete! Robot stopped.')
            self.docking_complete = True
            self.publish_stop()
            return

        # ── 2. Apply Deadband (ignore noise near zero) ────────────────────────
        if abs(error_x)   < self.deadband_xy:  error_x   = 0.0
        if abs(error_y)   < self.deadband_xy:  error_y   = 0.0
        if abs(error_yaw) < self.deadband_yaw: error_yaw = 0.0

        errors = [error_x, error_y, error_yaw]

        # ── 3. PID Calculation ────────────────────────────────────────────────
        gains_p = [self.kp_x,   self.kp_y,   self.kp_yaw]
        gains_i = [self.ki_x,   self.ki_y,   self.ki_yaw]
        gains_d = [self.kd_x,   self.kd_y,   self.kd_yaw]

        outputs = []
        for i in range(3):
            self.integral[i] += errors[i] * self.dt
            self.integral[i] = max(min(self.integral[i],  self.integral_limit), -self.integral_limit)
            
            derivative = (errors[i] - self.prev_error[i]) / self.dt
            output = (gains_p[i] * errors[i] + gains_i[i] * self.integral[i] + gains_d[i] * derivative)
            outputs.append(output)

        self.prev_error = errors

        # ── 4. Build & Clamp TwistStamped message ─────────────────────────────
        # 🎯 ต้องใส่ Header, Stamp และ Frame ID ก่อนส่ง
        cmd = TwistStamped()
        cmd.header.stamp = self.get_clock().now().to_msg()
        cmd.header.frame_id = 'base_link'
        
        cmd.twist.linear.x  = self._clamp(outputs[0], self.max_linear)
        cmd.twist.linear.y  = self._clamp(outputs[1], self.max_linear)
        cmd.twist.angular.z = self._clamp(outputs[2], self.max_angular)

        self.cmd_pub.publish(cmd)

        self.get_logger().info(
            f'err=({error_x:.3f}, {error_y:.3f}, {error_yaw:.3f}) → '
            f'cmd=({cmd.twist.linear.x:.3f}, {cmd.twist.linear.y:.3f}, {cmd.twist.angular.z:.3f})'
        )

    # ─────────────────────────────────────────────────────────────────────────
    def watchdog_callback(self):
        if self.docking_complete:
            return

        elapsed = (self.get_clock().now() - self.last_msg_time).nanoseconds / 1e9
        if elapsed > self.watchdog_timeout:
            self.get_logger().debug(f'⚠️ No error message for {elapsed:.1f}s! Stopping robot.')
            self.publish_stop()

    # ─────────────────────────────────────────────────────────────────────────
    def publish_stop(self):
        if rclpy.ok():
            # 🎯 ตอนสั่งหยุดก็ต้องใส่ Stamp ด้วย!
            cmd = TwistStamped()
            cmd.header.stamp = self.get_clock().now().to_msg()
            cmd.header.frame_id = 'base_link'
            self.cmd_pub.publish(cmd)

    @staticmethod
    def _clamp(value: float, limit: float) -> float:
        return max(min(value, limit), -limit)


# ─────────────────────────────────────────────────────────────────────────────
def main(args=None):
    rclpy.init(args=args)
    node = OmniDockingController()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Shutting down gracefully...')
    finally:
        if rclpy.ok():
            node.publish_stop()
            node.destroy_node()
            rclpy.shutdown()

if __name__ == '__main__':
    main()