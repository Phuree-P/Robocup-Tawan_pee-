// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ired_msgs:srv/PIDTuning.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ired_msgs/srv/pid_tuning.h"


#ifndef IRED_MSGS__SRV__DETAIL__PID_TUNING__STRUCT_H_
#define IRED_MSGS__SRV__DETAIL__PID_TUNING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motor'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PIDTuning in the package ired_msgs.
typedef struct ired_msgs__srv__PIDTuning_Request
{
  rosidl_runtime_c__String motor;
  double kp;
  double ki;
  double kd;
} ired_msgs__srv__PIDTuning_Request;

// Struct for a sequence of ired_msgs__srv__PIDTuning_Request.
typedef struct ired_msgs__srv__PIDTuning_Request__Sequence
{
  ired_msgs__srv__PIDTuning_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ired_msgs__srv__PIDTuning_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/PIDTuning in the package ired_msgs.
typedef struct ired_msgs__srv__PIDTuning_Response
{
  bool status;
} ired_msgs__srv__PIDTuning_Response;

// Struct for a sequence of ired_msgs__srv__PIDTuning_Response.
typedef struct ired_msgs__srv__PIDTuning_Response__Sequence
{
  ired_msgs__srv__PIDTuning_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ired_msgs__srv__PIDTuning_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ired_msgs__srv__PIDTuning_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ired_msgs__srv__PIDTuning_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/PIDTuning in the package ired_msgs.
typedef struct ired_msgs__srv__PIDTuning_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ired_msgs__srv__PIDTuning_Request__Sequence request;
  ired_msgs__srv__PIDTuning_Response__Sequence response;
} ired_msgs__srv__PIDTuning_Event;

// Struct for a sequence of ired_msgs__srv__PIDTuning_Event.
typedef struct ired_msgs__srv__PIDTuning_Event__Sequence
{
  ired_msgs__srv__PIDTuning_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ired_msgs__srv__PIDTuning_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRED_MSGS__SRV__DETAIL__PID_TUNING__STRUCT_H_
