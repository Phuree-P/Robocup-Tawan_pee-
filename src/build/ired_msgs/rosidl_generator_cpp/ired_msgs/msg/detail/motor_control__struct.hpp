// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ired_msgs:msg/MotorControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ired_msgs/msg/motor_control.hpp"


#ifndef IRED_MSGS__MSG__DETAIL__MOTOR_CONTROL__STRUCT_HPP_
#define IRED_MSGS__MSG__DETAIL__MOTOR_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ired_msgs__msg__MotorControl __attribute__((deprecated))
#else
# define DEPRECATED__ired_msgs__msg__MotorControl __declspec(deprecated)
#endif

namespace ired_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorControl_
{
  using Type = MotorControl_<ContainerAllocator>;

  explicit MotorControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 4>::iterator, double>(this->speed.begin(), this->speed.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->pid_motor_front_left.begin(), this->pid_motor_front_left.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->pid_motor_front_right.begin(), this->pid_motor_front_right.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->pid_motor_rear_left.begin(), this->pid_motor_rear_left.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->pid_motor_rear_right.begin(), this->pid_motor_rear_right.end(), 0.0);
    }
  }

  explicit MotorControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : speed(_alloc),
    pid_motor_front_left(_alloc),
    pid_motor_front_right(_alloc),
    pid_motor_rear_left(_alloc),
    pid_motor_rear_right(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 4>::iterator, double>(this->speed.begin(), this->speed.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->pid_motor_front_left.begin(), this->pid_motor_front_left.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->pid_motor_front_right.begin(), this->pid_motor_front_right.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->pid_motor_rear_left.begin(), this->pid_motor_rear_left.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->pid_motor_rear_right.begin(), this->pid_motor_rear_right.end(), 0.0);
    }
  }

  // field types and members
  using _speed_type =
    std::array<double, 4>;
  _speed_type speed;
  using _pid_motor_front_left_type =
    std::array<double, 3>;
  _pid_motor_front_left_type pid_motor_front_left;
  using _pid_motor_front_right_type =
    std::array<double, 3>;
  _pid_motor_front_right_type pid_motor_front_right;
  using _pid_motor_rear_left_type =
    std::array<double, 3>;
  _pid_motor_rear_left_type pid_motor_rear_left;
  using _pid_motor_rear_right_type =
    std::array<double, 3>;
  _pid_motor_rear_right_type pid_motor_rear_right;

  // setters for named parameter idiom
  Type & set__speed(
    const std::array<double, 4> & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__pid_motor_front_left(
    const std::array<double, 3> & _arg)
  {
    this->pid_motor_front_left = _arg;
    return *this;
  }
  Type & set__pid_motor_front_right(
    const std::array<double, 3> & _arg)
  {
    this->pid_motor_front_right = _arg;
    return *this;
  }
  Type & set__pid_motor_rear_left(
    const std::array<double, 3> & _arg)
  {
    this->pid_motor_rear_left = _arg;
    return *this;
  }
  Type & set__pid_motor_rear_right(
    const std::array<double, 3> & _arg)
  {
    this->pid_motor_rear_right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ired_msgs::msg::MotorControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const ired_msgs::msg::MotorControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ired_msgs::msg::MotorControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ired_msgs::msg::MotorControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ired_msgs::msg::MotorControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ired_msgs::msg::MotorControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ired_msgs::msg::MotorControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ired_msgs::msg::MotorControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ired_msgs::msg::MotorControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ired_msgs::msg::MotorControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ired_msgs__msg__MotorControl
    std::shared_ptr<ired_msgs::msg::MotorControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ired_msgs__msg__MotorControl
    std::shared_ptr<ired_msgs::msg::MotorControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorControl_ & other) const
  {
    if (this->speed != other.speed) {
      return false;
    }
    if (this->pid_motor_front_left != other.pid_motor_front_left) {
      return false;
    }
    if (this->pid_motor_front_right != other.pid_motor_front_right) {
      return false;
    }
    if (this->pid_motor_rear_left != other.pid_motor_rear_left) {
      return false;
    }
    if (this->pid_motor_rear_right != other.pid_motor_rear_right) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorControl_

// alias to use template instance with default allocator
using MotorControl =
  ired_msgs::msg::MotorControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ired_msgs

#endif  // IRED_MSGS__MSG__DETAIL__MOTOR_CONTROL__STRUCT_HPP_
