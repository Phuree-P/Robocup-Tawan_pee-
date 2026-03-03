// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ired_msgs:msg/IMUData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ired_msgs/msg/imu_data.h"


#ifndef IRED_MSGS__MSG__DETAIL__IMU_DATA__STRUCT_H_
#define IRED_MSGS__MSG__DETAIL__IMU_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/IMUData in the package ired_msgs.
typedef struct ired_msgs__msg__IMUData
{
  double roll;
  double pitch;
  double yaw;
} ired_msgs__msg__IMUData;

// Struct for a sequence of ired_msgs__msg__IMUData.
typedef struct ired_msgs__msg__IMUData__Sequence
{
  ired_msgs__msg__IMUData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ired_msgs__msg__IMUData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRED_MSGS__MSG__DETAIL__IMU_DATA__STRUCT_H_
