// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ired_msgs:msg/MotorControl.idl
// generated code does not contain a copyright notice
#include "ired_msgs/msg/detail/motor_control__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ired_msgs/msg/detail/motor_control__functions.h"
#include "ired_msgs/msg/detail/motor_control__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ired_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ired_msgs
cdr_serialize(
  const ired_msgs::msg::MotorControl & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: speed
  {
    cdr << ros_message.speed;
  }

  // Member: pid_motor_front_left
  {
    cdr << ros_message.pid_motor_front_left;
  }

  // Member: pid_motor_front_right
  {
    cdr << ros_message.pid_motor_front_right;
  }

  // Member: pid_motor_rear_left
  {
    cdr << ros_message.pid_motor_rear_left;
  }

  // Member: pid_motor_rear_right
  {
    cdr << ros_message.pid_motor_rear_right;
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ired_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ired_msgs::msg::MotorControl & ros_message)
{
  // Member: speed
  {
    cdr >> ros_message.speed;
  }

  // Member: pid_motor_front_left
  {
    cdr >> ros_message.pid_motor_front_left;
  }

  // Member: pid_motor_front_right
  {
    cdr >> ros_message.pid_motor_front_right;
  }

  // Member: pid_motor_rear_left
  {
    cdr >> ros_message.pid_motor_rear_left;
  }

  // Member: pid_motor_rear_right
  {
    cdr >> ros_message.pid_motor_rear_right;
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ired_msgs
get_serialized_size(
  const ired_msgs::msg::MotorControl & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: speed
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.speed[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pid_motor_front_left
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.pid_motor_front_left[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pid_motor_front_right
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.pid_motor_front_right[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pid_motor_rear_left
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.pid_motor_rear_left[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pid_motor_rear_right
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.pid_motor_rear_right[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ired_msgs
max_serialized_size_MotorControl(
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

  // Member: speed
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: pid_motor_front_left
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: pid_motor_front_right
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: pid_motor_rear_left
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: pid_motor_rear_right
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
    using DataType = ired_msgs::msg::MotorControl;
    is_plain =
      (
      offsetof(DataType, pid_motor_rear_right) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ired_msgs
cdr_serialize_key(
  const ired_msgs::msg::MotorControl & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: speed
  {
    cdr << ros_message.speed;
  }

  // Member: pid_motor_front_left
  {
    cdr << ros_message.pid_motor_front_left;
  }

  // Member: pid_motor_front_right
  {
    cdr << ros_message.pid_motor_front_right;
  }

  // Member: pid_motor_rear_left
  {
    cdr << ros_message.pid_motor_rear_left;
  }

  // Member: pid_motor_rear_right
  {
    cdr << ros_message.pid_motor_rear_right;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ired_msgs
get_serialized_size_key(
  const ired_msgs::msg::MotorControl & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: speed
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.speed[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pid_motor_front_left
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.pid_motor_front_left[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pid_motor_front_right
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.pid_motor_front_right[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pid_motor_rear_left
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.pid_motor_rear_left[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pid_motor_rear_right
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.pid_motor_rear_right[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ired_msgs
max_serialized_size_key_MotorControl(
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

  // Member: speed
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pid_motor_front_left
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pid_motor_front_right
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pid_motor_rear_left
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pid_motor_rear_right
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
    using DataType = ired_msgs::msg::MotorControl;
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
  auto typed_message =
    static_cast<const ired_msgs::msg::MotorControl *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MotorControl__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ired_msgs::msg::MotorControl *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MotorControl__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ired_msgs::msg::MotorControl *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MotorControl__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MotorControl(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MotorControl__callbacks = {
  "ired_msgs::msg",
  "MotorControl",
  _MotorControl__cdr_serialize,
  _MotorControl__cdr_deserialize,
  _MotorControl__get_serialized_size,
  _MotorControl__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MotorControl__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MotorControl__callbacks,
  get_message_typesupport_handle_function,
  &ired_msgs__msg__MotorControl__get_type_hash,
  &ired_msgs__msg__MotorControl__get_type_description,
  &ired_msgs__msg__MotorControl__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ired_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ired_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ired_msgs::msg::MotorControl>()
{
  return &ired_msgs::msg::typesupport_fastrtps_cpp::_MotorControl__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ired_msgs, msg, MotorControl)() {
  return &ired_msgs::msg::typesupport_fastrtps_cpp::_MotorControl__handle;
}

#ifdef __cplusplus
}
#endif
