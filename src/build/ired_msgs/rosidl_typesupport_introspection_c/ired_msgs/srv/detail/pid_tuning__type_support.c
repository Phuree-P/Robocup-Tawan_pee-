// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ired_msgs:srv/PIDTuning.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ired_msgs/srv/detail/pid_tuning__rosidl_typesupport_introspection_c.h"
#include "ired_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ired_msgs/srv/detail/pid_tuning__functions.h"
#include "ired_msgs/srv/detail/pid_tuning__struct.h"


// Include directives for member types
// Member `motor`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ired_msgs__srv__PIDTuning_Request__rosidl_typesupport_introspection_c__PIDTuning_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ired_msgs__srv__PIDTuning_Request__init(message_memory);
}

void ired_msgs__srv__PIDTuning_Request__rosidl_typesupport_introspection_c__PIDTuning_Request_fini_function(void * message_memory)
{
  ired_msgs__srv__PIDTuning_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ired_msgs__srv__PIDTuning_Request__rosidl_typesupport_introspection_c__PIDTuning_Request_message_member_array[4] = {
  {
    "motor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ired_msgs__srv__PIDTuning_Request, motor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ired_msgs__srv__PIDTuning_Request, kp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ki",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ired_msgs__srv__PIDTuning_Request, ki),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ired_msgs__srv__PIDTuning_Request, kd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ired_msgs__srv__PIDTuning_Request__rosidl_typesupport_introspection_c__PIDTuning_Request_message_members = {
  "ired_msgs__srv",  // message namespace
  "PIDTuning_Request",  // message name
  4,  // number of fields
  sizeof(ired_msgs__srv__PIDTuning_Request),
  false,  // has_any_key_member_
  ired_msgs__srv__PIDTuning_Request__rosidl_typesupport_introspection_c__PIDTuning_Request_message_member_array,  // message members
  ired_msgs__srv__PIDTuning_Request__rosidl_typesupport_introspection_c__PIDTuning_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ired_msgs__srv__PIDTuning_Request__rosidl_typesupport_introspection_c__PIDTuning_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ired_msgs__srv__PIDTuning_Request__rosidl_typesupport_introspection_c__PIDTuning_Request_message_type_support_handle = {
  0,
  &ired_msgs__srv__PIDTuning_Request__rosidl_typesupport_introspection_c__PIDTuning_Request_message_members,
  get_message_typesupport_handle_function,
  &ired_msgs__srv__PIDTuning_Request__get_type_hash,
  &ired_msgs__srv__PIDTuning_Request__get_type_description,
  &ired_msgs__srv__PIDTuning_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ired_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ired_msgs, srv, PIDTuning_Request)() {
  if (!ired_msgs__srv__PIDTuning_Request__rosidl_typesupport_introspection_c__PIDTuning_Request_message_type_support_handle.typesupport_identifier) {
    ired_msgs__srv__PIDTuning_Request__rosidl_typesupport_introspection_c__PIDTuning_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ired_msgs__srv__PIDTuning_Request__rosidl_typesupport_introspection_c__PIDTuning_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ired_msgs/srv/detail/pid_tuning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ired_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ired_msgs/srv/detail/pid_tuning__functions.h"
// already included above
// #include "ired_msgs/srv/detail/pid_tuning__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ired_msgs__srv__PIDTuning_Response__rosidl_typesupport_introspection_c__PIDTuning_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ired_msgs__srv__PIDTuning_Response__init(message_memory);
}

void ired_msgs__srv__PIDTuning_Response__rosidl_typesupport_introspection_c__PIDTuning_Response_fini_function(void * message_memory)
{
  ired_msgs__srv__PIDTuning_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ired_msgs__srv__PIDTuning_Response__rosidl_typesupport_introspection_c__PIDTuning_Response_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ired_msgs__srv__PIDTuning_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ired_msgs__srv__PIDTuning_Response__rosidl_typesupport_introspection_c__PIDTuning_Response_message_members = {
  "ired_msgs__srv",  // message namespace
  "PIDTuning_Response",  // message name
  1,  // number of fields
  sizeof(ired_msgs__srv__PIDTuning_Response),
  false,  // has_any_key_member_
  ired_msgs__srv__PIDTuning_Response__rosidl_typesupport_introspection_c__PIDTuning_Response_message_member_array,  // message members
  ired_msgs__srv__PIDTuning_Response__rosidl_typesupport_introspection_c__PIDTuning_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ired_msgs__srv__PIDTuning_Response__rosidl_typesupport_introspection_c__PIDTuning_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ired_msgs__srv__PIDTuning_Response__rosidl_typesupport_introspection_c__PIDTuning_Response_message_type_support_handle = {
  0,
  &ired_msgs__srv__PIDTuning_Response__rosidl_typesupport_introspection_c__PIDTuning_Response_message_members,
  get_message_typesupport_handle_function,
  &ired_msgs__srv__PIDTuning_Response__get_type_hash,
  &ired_msgs__srv__PIDTuning_Response__get_type_description,
  &ired_msgs__srv__PIDTuning_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ired_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ired_msgs, srv, PIDTuning_Response)() {
  if (!ired_msgs__srv__PIDTuning_Response__rosidl_typesupport_introspection_c__PIDTuning_Response_message_type_support_handle.typesupport_identifier) {
    ired_msgs__srv__PIDTuning_Response__rosidl_typesupport_introspection_c__PIDTuning_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ired_msgs__srv__PIDTuning_Response__rosidl_typesupport_introspection_c__PIDTuning_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ired_msgs/srv/detail/pid_tuning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ired_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ired_msgs/srv/detail/pid_tuning__functions.h"
// already included above
// #include "ired_msgs/srv/detail/pid_tuning__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "ired_msgs/srv/pid_tuning.h"
// Member `request`
// Member `response`
// already included above
// #include "ired_msgs/srv/detail/pid_tuning__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__PIDTuning_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ired_msgs__srv__PIDTuning_Event__init(message_memory);
}

void ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__PIDTuning_Event_fini_function(void * message_memory)
{
  ired_msgs__srv__PIDTuning_Event__fini(message_memory);
}

size_t ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__size_function__PIDTuning_Event__request(
  const void * untyped_member)
{
  const ired_msgs__srv__PIDTuning_Request__Sequence * member =
    (const ired_msgs__srv__PIDTuning_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__get_const_function__PIDTuning_Event__request(
  const void * untyped_member, size_t index)
{
  const ired_msgs__srv__PIDTuning_Request__Sequence * member =
    (const ired_msgs__srv__PIDTuning_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__get_function__PIDTuning_Event__request(
  void * untyped_member, size_t index)
{
  ired_msgs__srv__PIDTuning_Request__Sequence * member =
    (ired_msgs__srv__PIDTuning_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__fetch_function__PIDTuning_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ired_msgs__srv__PIDTuning_Request * item =
    ((const ired_msgs__srv__PIDTuning_Request *)
    ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__get_const_function__PIDTuning_Event__request(untyped_member, index));
  ired_msgs__srv__PIDTuning_Request * value =
    (ired_msgs__srv__PIDTuning_Request *)(untyped_value);
  *value = *item;
}

void ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__assign_function__PIDTuning_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ired_msgs__srv__PIDTuning_Request * item =
    ((ired_msgs__srv__PIDTuning_Request *)
    ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__get_function__PIDTuning_Event__request(untyped_member, index));
  const ired_msgs__srv__PIDTuning_Request * value =
    (const ired_msgs__srv__PIDTuning_Request *)(untyped_value);
  *item = *value;
}

bool ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__resize_function__PIDTuning_Event__request(
  void * untyped_member, size_t size)
{
  ired_msgs__srv__PIDTuning_Request__Sequence * member =
    (ired_msgs__srv__PIDTuning_Request__Sequence *)(untyped_member);
  ired_msgs__srv__PIDTuning_Request__Sequence__fini(member);
  return ired_msgs__srv__PIDTuning_Request__Sequence__init(member, size);
}

size_t ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__size_function__PIDTuning_Event__response(
  const void * untyped_member)
{
  const ired_msgs__srv__PIDTuning_Response__Sequence * member =
    (const ired_msgs__srv__PIDTuning_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__get_const_function__PIDTuning_Event__response(
  const void * untyped_member, size_t index)
{
  const ired_msgs__srv__PIDTuning_Response__Sequence * member =
    (const ired_msgs__srv__PIDTuning_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__get_function__PIDTuning_Event__response(
  void * untyped_member, size_t index)
{
  ired_msgs__srv__PIDTuning_Response__Sequence * member =
    (ired_msgs__srv__PIDTuning_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__fetch_function__PIDTuning_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ired_msgs__srv__PIDTuning_Response * item =
    ((const ired_msgs__srv__PIDTuning_Response *)
    ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__get_const_function__PIDTuning_Event__response(untyped_member, index));
  ired_msgs__srv__PIDTuning_Response * value =
    (ired_msgs__srv__PIDTuning_Response *)(untyped_value);
  *value = *item;
}

void ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__assign_function__PIDTuning_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ired_msgs__srv__PIDTuning_Response * item =
    ((ired_msgs__srv__PIDTuning_Response *)
    ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__get_function__PIDTuning_Event__response(untyped_member, index));
  const ired_msgs__srv__PIDTuning_Response * value =
    (const ired_msgs__srv__PIDTuning_Response *)(untyped_value);
  *item = *value;
}

bool ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__resize_function__PIDTuning_Event__response(
  void * untyped_member, size_t size)
{
  ired_msgs__srv__PIDTuning_Response__Sequence * member =
    (ired_msgs__srv__PIDTuning_Response__Sequence *)(untyped_member);
  ired_msgs__srv__PIDTuning_Response__Sequence__fini(member);
  return ired_msgs__srv__PIDTuning_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__PIDTuning_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ired_msgs__srv__PIDTuning_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ired_msgs__srv__PIDTuning_Event, request),  // bytes offset in struct
    NULL,  // default value
    ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__size_function__PIDTuning_Event__request,  // size() function pointer
    ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__get_const_function__PIDTuning_Event__request,  // get_const(index) function pointer
    ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__get_function__PIDTuning_Event__request,  // get(index) function pointer
    ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__fetch_function__PIDTuning_Event__request,  // fetch(index, &value) function pointer
    ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__assign_function__PIDTuning_Event__request,  // assign(index, value) function pointer
    ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__resize_function__PIDTuning_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ired_msgs__srv__PIDTuning_Event, response),  // bytes offset in struct
    NULL,  // default value
    ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__size_function__PIDTuning_Event__response,  // size() function pointer
    ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__get_const_function__PIDTuning_Event__response,  // get_const(index) function pointer
    ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__get_function__PIDTuning_Event__response,  // get(index) function pointer
    ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__fetch_function__PIDTuning_Event__response,  // fetch(index, &value) function pointer
    ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__assign_function__PIDTuning_Event__response,  // assign(index, value) function pointer
    ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__resize_function__PIDTuning_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__PIDTuning_Event_message_members = {
  "ired_msgs__srv",  // message namespace
  "PIDTuning_Event",  // message name
  3,  // number of fields
  sizeof(ired_msgs__srv__PIDTuning_Event),
  false,  // has_any_key_member_
  ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__PIDTuning_Event_message_member_array,  // message members
  ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__PIDTuning_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__PIDTuning_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__PIDTuning_Event_message_type_support_handle = {
  0,
  &ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__PIDTuning_Event_message_members,
  get_message_typesupport_handle_function,
  &ired_msgs__srv__PIDTuning_Event__get_type_hash,
  &ired_msgs__srv__PIDTuning_Event__get_type_description,
  &ired_msgs__srv__PIDTuning_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ired_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ired_msgs, srv, PIDTuning_Event)() {
  ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__PIDTuning_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__PIDTuning_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ired_msgs, srv, PIDTuning_Request)();
  ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__PIDTuning_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ired_msgs, srv, PIDTuning_Response)();
  if (!ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__PIDTuning_Event_message_type_support_handle.typesupport_identifier) {
    ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__PIDTuning_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__PIDTuning_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ired_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ired_msgs/srv/detail/pid_tuning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ired_msgs__srv__detail__pid_tuning__rosidl_typesupport_introspection_c__PIDTuning_service_members = {
  "ired_msgs__srv",  // service namespace
  "PIDTuning",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // ired_msgs__srv__detail__pid_tuning__rosidl_typesupport_introspection_c__PIDTuning_Request_message_type_support_handle,
  NULL,  // response message
  // ired_msgs__srv__detail__pid_tuning__rosidl_typesupport_introspection_c__PIDTuning_Response_message_type_support_handle
  NULL  // event_message
  // ired_msgs__srv__detail__pid_tuning__rosidl_typesupport_introspection_c__PIDTuning_Response_message_type_support_handle
};


static rosidl_service_type_support_t ired_msgs__srv__detail__pid_tuning__rosidl_typesupport_introspection_c__PIDTuning_service_type_support_handle = {
  0,
  &ired_msgs__srv__detail__pid_tuning__rosidl_typesupport_introspection_c__PIDTuning_service_members,
  get_service_typesupport_handle_function,
  &ired_msgs__srv__PIDTuning_Request__rosidl_typesupport_introspection_c__PIDTuning_Request_message_type_support_handle,
  &ired_msgs__srv__PIDTuning_Response__rosidl_typesupport_introspection_c__PIDTuning_Response_message_type_support_handle,
  &ired_msgs__srv__PIDTuning_Event__rosidl_typesupport_introspection_c__PIDTuning_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ired_msgs,
    srv,
    PIDTuning
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ired_msgs,
    srv,
    PIDTuning
  ),
  &ired_msgs__srv__PIDTuning__get_type_hash,
  &ired_msgs__srv__PIDTuning__get_type_description,
  &ired_msgs__srv__PIDTuning__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ired_msgs, srv, PIDTuning_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ired_msgs, srv, PIDTuning_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ired_msgs, srv, PIDTuning_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ired_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ired_msgs, srv, PIDTuning)(void) {
  if (!ired_msgs__srv__detail__pid_tuning__rosidl_typesupport_introspection_c__PIDTuning_service_type_support_handle.typesupport_identifier) {
    ired_msgs__srv__detail__pid_tuning__rosidl_typesupport_introspection_c__PIDTuning_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ired_msgs__srv__detail__pid_tuning__rosidl_typesupport_introspection_c__PIDTuning_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ired_msgs, srv, PIDTuning_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ired_msgs, srv, PIDTuning_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ired_msgs, srv, PIDTuning_Event)()->data;
  }

  return &ired_msgs__srv__detail__pid_tuning__rosidl_typesupport_introspection_c__PIDTuning_service_type_support_handle;
}
