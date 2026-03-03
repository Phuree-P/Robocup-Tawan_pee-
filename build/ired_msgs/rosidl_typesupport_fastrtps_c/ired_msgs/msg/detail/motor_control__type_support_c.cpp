// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ired_msgs:msg/MotorControl.idl
// generated code does not contain a copyright notice
#include "ired_msgs/msg/detail/motor_control__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ired_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ired_msgs/msg/detail/motor_control__struct.h"
#include "ired_msgs/msg/detail/motor_control__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MotorControl__ros_msg_type = ired_msgs__msg__MotorControl;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ired_msgs
bool cdr_serialize_ired_msgs__msg__MotorControl(
  const ired_msgs__msg__MotorControl * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: speed
  {
    size_t size = 4;
    auto array_ptr = ros_message->speed;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: pid_motor_front_left
  {
    size_t size = 3;
    auto array_ptr = ros_message->pid_motor_front_left;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: pid_motor_front_right
  {
    size_t size = 3;
    auto array_ptr = ros_message->pid_motor_front_right;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: pid_motor_rear_left
  {
    size_t size = 3;
    auto array_ptr = ros_message->pid_motor_rear_left;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: pid_motor_rear_right
  {
    size_t size = 3;
    auto array_ptr = ros_message->pid_motor_rear_right;
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ired_msgs
bool cdr_deserialize_ired_msgs__msg__MotorControl(
  eprosima::fastcdr::Cdr & cdr,
  ired_msgs__msg__MotorControl * ros_message)
{
  // Field name: speed
  {
    size_t size = 4;
    auto array_ptr = ros_message->speed;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: pid_motor_front_left
  {
    size_t size = 3;
    auto array_ptr = ros_message->pid_motor_front_left;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: pid_motor_front_right
  {
    size_t size = 3;
    auto array_ptr = ros_message->pid_motor_front_right;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: pid_motor_rear_left
  {
    size_t size = 3;
    auto array_ptr = ros_message->pid_motor_rear_left;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: pid_motor_rear_right
  {
    size_t size = 3;
    auto array_ptr = ros_message->pid_motor_rear_right;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ired_msgs
size_t get_serialized_size_ired_msgs__msg__MotorControl(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotorControl__ros_msg_type * ros_message = static_cast<const _MotorControl__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: speed
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->speed;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pid_motor_front_left
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->pid_motor_front_left;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pid_motor_front_right
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->pid_motor_front_right;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pid_motor_rear_left
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->pid_motor_rear_left;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pid_motor_rear_right
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->pid_motor_rear_right;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ired_msgs
size_t max_serialized_size_ired_msgs__msg__MotorControl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: speed
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: pid_motor_front_left
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: pid_motor_front_right
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: pid_motor_rear_left
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: pid_motor_rear_right
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ired_msgs__msg__MotorControl;
    is_plain =
      (
      offsetof(DataType, pid_motor_rear_right) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ired_msgs
bool cdr_serialize_key_ired_msgs__msg__MotorControl(
  const ired_msgs__msg__MotorControl * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: speed
  {
    size_t size = 4;
    auto array_ptr = ros_message->speed;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: pid_motor_front_left
  {
    size_t size = 3;
    auto array_ptr = ros_message->pid_motor_front_left;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: pid_motor_front_right
  {
    size_t size = 3;
    auto array_ptr = ros_message->pid_motor_front_right;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: pid_motor_rear_left
  {
    size_t size = 3;
    auto array_ptr = ros_message->pid_motor_rear_left;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: pid_motor_rear_right
  {
    size_t size = 3;
    auto array_ptr = ros_message->pid_motor_rear_right;
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ired_msgs
size_t get_serialized_size_key_ired_msgs__msg__MotorControl(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotorControl__ros_msg_type * ros_message = static_cast<const _MotorControl__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: speed
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->speed;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pid_motor_front_left
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->pid_motor_front_left;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pid_motor_front_right
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->pid_motor_front_right;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pid_motor_rear_left
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->pid_motor_rear_left;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pid_motor_rear_right
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->pid_motor_rear_right;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ired_msgs
size_t max_serialized_size_key_ired_msgs__msg__MotorControl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: speed
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: pid_motor_front_left
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: pid_motor_front_right
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: pid_motor_rear_left
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: pid_motor_rear_right
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ired_msgs__msg__MotorControl;
    is_plain =
      (
      offsetof(DataType, pid_motor_rear_right) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _MotorControl__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const ired_msgs__msg__MotorControl * ros_message = static_cast<const ired_msgs__msg__MotorControl *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_ired_msgs__msg__MotorControl(ros_message, cdr);
}

static bool _MotorControl__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  ired_msgs__msg__MotorControl * ros_message = static_cast<ired_msgs__msg__MotorControl *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_ired_msgs__msg__MotorControl(cdr, ros_message);
}

static uint32_t _MotorControl__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ired_msgs__msg__MotorControl(
      untyped_ros_message, 0));
}

static size_t _MotorControl__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ired_msgs__msg__MotorControl(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MotorControl = {
  "ired_msgs::msg",
  "MotorControl",
  _MotorControl__cdr_serialize,
  _MotorControl__cdr_deserialize,
  _MotorControl__get_serialized_size,
  _MotorControl__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MotorControl__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotorControl,
  get_message_typesupport_handle_function,
  &ired_msgs__msg__MotorControl__get_type_hash,
  &ired_msgs__msg__MotorControl__get_type_description,
  &ired_msgs__msg__MotorControl__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ired_msgs, msg, MotorControl)() {
  return &_MotorControl__type_support;
}

#if defined(__cplusplus)
}
#endif
