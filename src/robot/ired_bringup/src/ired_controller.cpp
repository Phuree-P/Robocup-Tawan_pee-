#include <ired_bringup/ired_controller.hpp>
#include <ired_bringup/ired_controller_define.hpp>

IRED_CONTROLLER::IRED_CONTROLLER()
: Node("iredcr_modbus_node"){
    /* Initialise Variables and Parameters */
    init_parameters();
    init_variables();

    /* Modbus */
    modbus.init("/dev/ttyiREDCr", B115200);
    if (!modbus.isConnected())
        RCLCPP_ERROR(this->get_logger(), "Failed to connect to /dev/ttyiREDCr");
    else
        RCLCPP_INFO(this->get_logger(), "Connected to /dev/ttyiREDCr at 115200 baud");
    
    /* Initialise ROS Publisher and Subscriber */
    auto qos = rclcpp::QoS(rclcpp::KeepLast(10));
    imu_raw_pub_ = this->create_publisher<geometry_msgs::msg::Twist>(imu_raw_topic_, qos);
    motor_data_pub_ = this->create_publisher<ired_msgs::msg::MotorData>(motor_data_topic_, qos);
    motor_speed_sub_ = this->create_subscription<ired_msgs::msg::MotorSpeed>(motor_control_topic_, qos, 
        std::bind(&IRED_CONTROLLER::commandMotorSpeedCallback, this, std::placeholders::_1));
    
    imu_reset_srv_ = this->create_service<std_srvs::srv::Empty>("/ired/imu/reset", 
        std::bind(&IRED_CONTROLLER::commandResetIMUCallback, this, std::placeholders::_1, std::placeholders::_2));
    pid_reset_srv_ = this->create_service<std_srvs::srv::Empty>("/ired/pid/reset", 
        std::bind(&IRED_CONTROLLER::commandPIDResetCallback, this, std::placeholders::_1, std::placeholders::_2));
    pid_tuning_srv_ = this->create_service<ired_msgs::srv::PIDTuning>("/ired/pid/tuning", 
        std::bind(&IRED_CONTROLLER::commandPIDTuningCallback, this, std::placeholders::_1, std::placeholders::_2));
    
    /* Initialise ROS Timers*/
    update_timer_ = this->create_wall_timer(10ms, std::bind(&IRED_CONTROLLER::update_callback, this));

    /* ROS Logger */
    RCLCPP_INFO(this->get_logger(), "iRED Controller : Setup publisher on %s [geometry_msgs/Twist]", imu_raw_topic_.c_str());
    RCLCPP_INFO(this->get_logger(), "iRED Controller : Setup publisher on %s [ired_msgs/MotorData]", motor_data_topic_.c_str());
    RCLCPP_INFO(this->get_logger(), "iRED Controller : Setup subscriber on %s [ired_msgs/MotorSpeed]", motor_control_topic_.c_str());
    RCLCPP_INFO(this->get_logger(), "iRED Controller : Setup service server on /ired/imu/reset [std_srvs/Empty]");
    RCLCPP_INFO(this->get_logger(), "iRED Controller : Setup service server on /ired/pid/reset [std_srvs/Empty]");
    RCLCPP_INFO(this->get_logger(), "iRED Controller : Setup service server on /ired/pid/tuning [ired_msgs/PIDTuning]");
}   

IRED_CONTROLLER::~IRED_CONTROLLER(){
    modbus.closePort();
    RCLCPP_ERROR(this->get_logger(), "iRED Controller : iRED controller node has been terminated");
}

void IRED_CONTROLLER::init_parameters(){
    /* Declare parameters */
    this->declare_parameter<std::string>("imu_raw_topic");
    this->declare_parameter<std::string>("motor_data_topic");
    this->declare_parameter<std::string>("motor_control_topic");

    /* ROS parameters */
    this->get_parameter_or<std::string>("imu_raw_topic", imu_raw_topic_, "/ired/imu/raw");
    this->get_parameter_or<std::string>("motor_data_topic", motor_data_topic_, "/ired/motor/data");
    this->get_parameter_or<std::string>("motor_control_topic", motor_control_topic_, "/ired/motor/speed_control");
}

void IRED_CONTROLLER::init_variables(){
    last_time_cmd_cel_ = this->now();

    pid_data_.resize(12, 0.0);
    motor_speed_sp_.resize(4, 0.0);
    pid_tuning_value_.resize(3, 0.0);

    imu_reset_check_ = true;
    pid_reset_check_ = false;
    pid_tuning_check_ = false;
    update_pid_data_check_ = true;
}

void IRED_CONTROLLER::update_callback(){
    rclcpp::Time time_now = this->now();

    if ((time_now - last_time_cmd_cel_).seconds() > 1.0) {
        std::fill(motor_speed_sp_.begin(), motor_speed_sp_.end(), 0.0);
    }

    if (modbus.sendData(IREDCR_SLAVE_ID, ADDR_SPEED_MOTOR, motor_speed_sp_))
        RCLCPP_INFO_ONCE(this->get_logger(), "iRED Controller : Send speed control motor");
    else
        RCLCPP_WARN_THROTTLE(this->get_logger(), *this->get_clock(), 2000, "iRED Controller : Failed to send motor speed command");

    if (modbus.readData(IREDCR_SLAVE_ID, FUNC_READ_INPUT_REGISTER, ADDR_SPEED_MOTOR, 10, modbus_data_)) {
        for(size_t i = 0; i < 4; i++){
            motor_data_msg_.speed_sp[i] = motor_speed_sp_.at(i);
            motor_data_msg_.speed_fb[i] = modbus_data_.at(i);
        }
        imu_raw_msg_.linear.x   = modbus_data_.at(4);
        imu_raw_msg_.linear.y   = modbus_data_.at(5);
        imu_raw_msg_.linear.z   = modbus_data_.at(6);
        imu_raw_msg_.angular.x  = modbus_data_.at(7);
        imu_raw_msg_.angular.y  = modbus_data_.at(8);
        imu_raw_msg_.angular.z  = modbus_data_.at(9);

        motor_data_pub_->publish(motor_data_msg_);
        imu_raw_pub_->publish(imu_raw_msg_);
        RCLCPP_INFO_ONCE(this->get_logger(), "iRED Controller : Completed to read motor spxeed");
        RCLCPP_INFO_ONCE(this->get_logger(), "iRED Controller : Completed to read IMU data");
        
    } else {
        RCLCPP_WARN_THROTTLE(this->get_logger(), *this->get_clock(), 2000, "iRED Controller : Failed to read motor speed");
        RCLCPP_WARN_THROTTLE(this->get_logger(), *this->get_clock(), 2000, "iRED Controller : Failed to read IMU data");
    }

    if (imu_reset_check_) {
        RCLCPP_INFO(this->get_logger(), "iRED Controller : Start calibration of IMU sensor.");
        if (modbus.sendData(IREDCR_SLAVE_ID, ADDR_IMU_CALIBRATION, std::vector<float>{1.0}))
            RCLCPP_INFO(this->get_logger(), "iRED Controller : IMU calibration complete.");
        else
            RCLCPP_ERROR(this->get_logger(), "iRED Controller : IMU calibration failed.");
        imu_reset_check_ = false;
        sleep(2);
    }

    if (pid_reset_check_) {
        if (modbus.sendData(IREDCR_SLAVE_ID, ADDR_PID_RESET, std::vector<float>{1.0}))
            RCLCPP_INFO(this->get_logger(), "iRED Controller : PID reset complete.");
        else
            RCLCPP_ERROR(this->get_logger(), "iRED Controller : PID reset failed.");

        pid_reset_check_ = false;
        sleep(2);
    }

    if (pid_tuning_check_) {
        uint16_t motor_pid_addr;
        if (!PIDMotorDataCheck(pid_tuning_motor_, motor_pid_addr))
            RCLCPP_ERROR(this->get_logger(), "iRED Controller : Wrong motor name: FL FR RL RR");
        else {
            if (modbus.sendData(IREDCR_SLAVE_ID, motor_pid_addr, pid_tuning_value_)){
                RCLCPP_INFO(this->get_logger(), "iRED Controller : PID Tuning %s Kp %.3f Ki %.3f Kd %.3f", pid_tuning_motor_.c_str(), pid_tuning_value_[KP], pid_tuning_value_[KI], pid_tuning_value_[KD]);
            } else
                RCLCPP_ERROR(this->get_logger(), "iRED Controller : PID tuning command failed");
        }
        pid_tuning_check_ = false;
        sleep(2);
    }

    if (update_pid_data_check_) {
        if (modbus.readData(IREDCR_SLAVE_ID, FUNC_READ_HOLDING_REGISTER, ADDR_PID_FLEFT, 12, pid_data_)){
            RCLCPP_INFO(this->get_logger(), "iRED Controller : Update PID Data");
            for(size_t i = 0; i<3; i++){
                motor_data_msg_.pid_motor_front_left[i]     = pid_data_.at(i);
                motor_data_msg_.pid_motor_front_right[i]    = pid_data_.at(i + 3);
                motor_data_msg_.pid_motor_rear_left[i]      = pid_data_.at(i + 6);
                motor_data_msg_.pid_motor_rear_right[i]     = pid_data_.at(i + 9);
            }
        } else
            RCLCPP_ERROR(this->get_logger(), "iRED Controller : Cannot read PID Data");
        update_pid_data_check_ = false;
    }
}

void IRED_CONTROLLER::commandResetIMUCallback(const std::shared_ptr<std_srvs::srv::Empty::Request> request,
    std::shared_ptr<std_srvs::srv::Empty::Response> response){
    
    (void) request;
    (void) response;

    imu_reset_check_ = true;
}

void IRED_CONTROLLER::commandPIDResetCallback(const std::shared_ptr<std_srvs::srv::Empty::Request> request,
    std::shared_ptr<std_srvs::srv::Empty::Response> response){
    
    (void) request;
    (void) response;

    pid_reset_check_ = true;
    update_pid_data_check_ = true;
}

void IRED_CONTROLLER::commandPIDTuningCallback(const std::shared_ptr<ired_msgs::srv::PIDTuning::Request> request,
    std::shared_ptr<ired_msgs::srv::PIDTuning::Response> response){
    
    if(request->motor == "FL" || request->motor == "FR" || request->motor == "RL" || request->motor == "RR"){
        pid_tuning_motor_ = request->motor;
        pid_tuning_value_.at(KP) = (float)request->kp;
        pid_tuning_value_.at(KI) = (float)request->ki;
        pid_tuning_value_.at(KD) = (float)request->kd;

        pid_tuning_check_ = true;
        update_pid_data_check_ = true;
        response->status = true;
    }
    else{
        RCLCPP_ERROR(this->get_logger(), "Wrong Motor: FL-FrontLeft FR-FrontRight RL-RearLeft RR-RearRight");
        pid_tuning_check_ = false;
        response->status = false;
    }
}

void IRED_CONTROLLER::commandMotorSpeedCallback(const ired_msgs::msg::MotorSpeed::SharedPtr msg_){
    last_time_cmd_cel_ = this->now();

    motor_speed_sp_.at(FLEFT)     = (float)msg_->speed[FLEFT];
    motor_speed_sp_.at(FRIGHT)    = (float)msg_->speed[FRIGHT];
    motor_speed_sp_.at(RLEFT)     = (float)msg_->speed[RLEFT];
    motor_speed_sp_.at(RRIGHT)    = (float)msg_->speed[RRIGHT];
}

bool IRED_CONTROLLER::PIDMotorDataCheck(const std::string& cmd_motor_name, uint16_t& motor_addr){
    if (cmd_motor_name == "FL")         motor_addr = ADDR_PID_FLEFT;
    else if (cmd_motor_name == "FR")    motor_addr = ADDR_PID_FRIGHT;
    else if (cmd_motor_name == "RL")    motor_addr = ADDR_PID_RLEFT;
    else if (cmd_motor_name == "RR")    motor_addr = ADDR_PID_RRIGHT;
    else                                return false;
    
    return true;
}

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<IRED_CONTROLLER>());
  rclcpp::shutdown();

  return 0;
}
