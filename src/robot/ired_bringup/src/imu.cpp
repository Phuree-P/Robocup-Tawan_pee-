#include <ired_bringup/imu.hpp>

IMU::IMU()
: Node("imu_node"){
    /* Initialise Variables and Parameters */
    init_parameters();
    init_variables();

    /* Initialise ROS Publisher and Subscriber */
    auto qos = rclcpp::QoS(rclcpp::KeepLast(10));
    imu_data_pub_ = this->create_publisher<sensor_msgs::msg::Imu>(imu_data_topic_, qos);
    rpy_pub_ = this->create_publisher<ired_msgs::msg::IMUData>(rpy_topic_, qos);
    imu_raw_sub_ = this->create_subscription<geometry_msgs::msg::Twist>(imu_raw_topic_, qos, \
        std::bind(&IMU::fetchIMUCallback, this, std::placeholders::_1));
    
    /* Initialise ROS Timers*/
    update_timer_ = this->create_wall_timer(10ms, std::bind(&IMU::update_calback, this));

    /* ROS Logger */
    RCLCPP_INFO(this->get_logger(), "IMU : ROS publisher on %s [sensor_msgs/Imu]", imu_data_topic_.c_str());
    RCLCPP_INFO(this->get_logger(), "IMU : ROS publisher on %s [ired_msgs/IMUData]", rpy_topic_.c_str());
    RCLCPP_INFO(this->get_logger(), "IMU : ROS subscriber on %s [geometry_msgs/Twist]", imu_raw_topic_.c_str());
}

IMU::~IMU(){
    RCLCPP_WARN(this->get_logger(), "IMU : iRED imu node has been terminated");
}

void IMU::init_parameters(){
    /* Declare parameters */
    this->declare_parameter<std::string>("imu_raw_topic");
    this->declare_parameter<std::string>("imu_data_topic");
    this->declare_parameter<std::string>("rpy_topic");

    /* ROS parameters */
    this->get_parameter_or<std::string>("imu_raw_topic", imu_raw_topic_, "/ired/imu/raw");
    this->get_parameter_or<std::string>("imu_data_topic", imu_data_topic_, "/ired/imu/data");
    this->get_parameter_or<std::string>("rpy_topic", rpy_topic_, "/ired/imu/rollpitchyaw");
}

void IMU::init_variables(){
    imu_data_.header.frame_id = "imu_link";
    imu_data_.angular_velocity.x = 0.0;
    imu_data_.angular_velocity.y = 0.0;
    imu_data_.angular_velocity.z = 0.0;
    imu_data_.linear_acceleration.x = 0.0;
    imu_data_.linear_acceleration.y = 0.0;
    imu_data_.linear_acceleration.z = 0.0;

    rpy_data_.roll = 0.0;
    rpy_data_.pitch = 0.0;
    rpy_data_.yaw = 0.0;

    prev_update_time_ = this->now();
    last_time_imu_ = this->now();
}

void IMU::update_calback(){
    rclcpp::Time time_now = this->now();
    rclcpp::Duration duration(time_now - prev_update_time_);
    prev_update_time_ = time_now;

    if((time_now - last_time_imu_).nanoseconds() / 1e9 > 1.0){
        angular_velocity_[X] = 0.0;
        angular_velocity_[Y] = 0.0;
        angular_velocity_[Z] = 0.0;
        linear_acceleration_[X] = 0.0;
        linear_acceleration_[Y] = 0.0;
        linear_acceleration_[Z] = 0.0;
    }

    calculateRPY(duration);
    rpy_pub_->publish(rpy_data_);

    calculateIMU();
    imu_data_.header.stamp = time_now;
    imu_data_pub_->publish(imu_data_);
}

void IMU::fetchIMUCallback(const geometry_msgs::msg::Twist::SharedPtr msg_){
    last_time_imu_ = this->now();

    angular_velocity_[X] = msg_->angular.x;
    angular_velocity_[Y] = msg_->angular.y;
    angular_velocity_[Z] = msg_->angular.z;
    linear_acceleration_[X] = msg_->linear.x;
    linear_acceleration_[Y] = msg_->linear.y;
    linear_acceleration_[Z] = msg_->linear.z;
}

void IMU::calculateIMU(){
    tf2::Quaternion q;
    q.setRPY(rpy_[ROLL], rpy_[PITCH], rpy_[YAW]);
    imu_data_.orientation.x = q.x();
    imu_data_.orientation.y = q.y();
    imu_data_.orientation.z = q.z();
    imu_data_.orientation.w = q.w();
    imu_data_.angular_velocity.x = DEG2RAD(angular_velocity_[X]);
    imu_data_.angular_velocity.y = DEG2RAD(angular_velocity_[Y]);
    imu_data_.angular_velocity.z = DEG2RAD(angular_velocity_[Z]);
    imu_data_.linear_acceleration.x = linear_acceleration_[X];
    imu_data_.linear_acceleration.y = linear_acceleration_[Y];
    imu_data_.linear_acceleration.z = linear_acceleration_[Z];
}

void IMU::calculateRPY(const rclcpp::Duration &diff_time){
    rpy_[ROLL]  += DEG2RAD((angular_velocity_[X] * diff_time.nanoseconds() / 1e9));
    rpy_[PITCH] += DEG2RAD((angular_velocity_[Y] * diff_time.nanoseconds() / 1e9));
    rpy_[YAW]   += DEG2RAD((angular_velocity_[Z] * diff_time.nanoseconds() / 1e9));
    rpy_data_.roll   = rpy_[ROLL];
    rpy_data_.pitch  = rpy_[PITCH];
    rpy_data_.yaw    = rpy_[YAW];
}

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<IMU>());
  rclcpp::shutdown();

  return 0;
}