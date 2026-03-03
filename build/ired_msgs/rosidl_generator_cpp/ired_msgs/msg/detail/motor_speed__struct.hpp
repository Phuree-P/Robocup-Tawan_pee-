// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ired_msgs:msg/MotorSpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ired_msgs/msg/motor_speed.hpp"


#ifndef IRED_MSGS__MSG__DETAIL__MOTOR_SPEED__STRUCT_HPP_
#define IRED_MSGS__MSG__DETAIL__MOTOR_SPEED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ired_msgs__msg__MotorSpeed __attribute__((deprecated))
#else
# define DEPRECATED__ired_msgs__msg__MotorSpeed __declspec(deprecated)
#endif

namespace ired_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorSpeed_
{
  using Type = MotorSpeed_<ContainerAllocator>;

  explicit MotorSpeed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 4>::iterator, double>(this->speed.begin(), this->speed.end(), 0.0);
    }
  }

  explicit MotorSpeed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : speed(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 4>::iterator, double>(this->speed.begin(), this->speed.end(), 0.0);
    }
  }

  // field types and members
  using _speed_type =
    std::array<double, 4>;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__speed(
    const std::array<double, 4> & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ired_msgs::msg::MotorSpeed_<ContainerAllocator> *;
  using ConstRawPtr =
    const ired_msgs::msg::MotorSpeed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ired_msgs::msg::MotorSpeed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ired_msgs::msg::MotorSpeed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ired_msgs::msg::MotorSpeed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ired_msgs::msg::MotorSpeed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ired_msgs::msg::MotorSpeed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ired_msgs::msg::MotorSpeed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ired_msgs::msg::MotorSpeed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ired_msgs::msg::MotorSpeed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ired_msgs__msg__MotorSpeed
    std::shared_ptr<ired_msgs::msg::MotorSpeed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ired_msgs__msg__MotorSpeed
    std::shared_ptr<ired_msgs::msg::MotorSpeed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorSpeed_ & other) const
  {
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorSpeed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorSpeed_

// alias to use template instance with default allocator
using MotorSpeed =
  ired_msgs::msg::MotorSpeed_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ired_msgs

#endif  // IRED_MSGS__MSG__DETAIL__MOTOR_SPEED__STRUCT_HPP_
