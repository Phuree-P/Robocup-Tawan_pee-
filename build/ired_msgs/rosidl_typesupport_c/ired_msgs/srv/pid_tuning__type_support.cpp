// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ired_msgs:srv/PIDTuning.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ired_msgs/srv/detail/pid_tuning__struct.h"
#include "ired_msgs/srv/detail/pid_tuning__type_support.h"
#include "ired_msgs/srv/detail/pid_tuning__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ired_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _PIDTuning_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PIDTuning_Request_type_support_ids_t;

static const _PIDTuning_Request_type_support_ids_t _PIDTuning_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PIDTuning_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PIDTuning_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PIDTuning_Request_type_support_symbol_names_t _PIDTuning_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ired_msgs, srv, PIDTuning_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ired_msgs, srv, PIDTuning_Request)),
  }
};

typedef struct _PIDTuning_Request_type_support_data_t
{
  void * data[2];
} _PIDTuning_Request_type_support_data_t;

static _PIDTuning_Request_type_support_data_t _PIDTuning_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PIDTuning_Request_message_typesupport_map = {
  2,
  "ired_msgs",
  &_PIDTuning_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PIDTuning_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PIDTuning_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PIDTuning_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PIDTuning_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ired_msgs__srv__PIDTuning_Request__get_type_hash,
  &ired_msgs__srv__PIDTuning_Request__get_type_description,
  &ired_msgs__srv__PIDTuning_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ired_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ired_msgs, srv, PIDTuning_Request)() {
  return &::ired_msgs::srv::rosidl_typesupport_c::PIDTuning_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ired_msgs/srv/detail/pid_tuning__struct.h"
// already included above
// #include "ired_msgs/srv/detail/pid_tuning__type_support.h"
// already included above
// #include "ired_msgs/srv/detail/pid_tuning__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ired_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _PIDTuning_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PIDTuning_Response_type_support_ids_t;

static const _PIDTuning_Response_type_support_ids_t _PIDTuning_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PIDTuning_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PIDTuning_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PIDTuning_Response_type_support_symbol_names_t _PIDTuning_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ired_msgs, srv, PIDTuning_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ired_msgs, srv, PIDTuning_Response)),
  }
};

typedef struct _PIDTuning_Response_type_support_data_t
{
  void * data[2];
} _PIDTuning_Response_type_support_data_t;

static _PIDTuning_Response_type_support_data_t _PIDTuning_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PIDTuning_Response_message_typesupport_map = {
  2,
  "ired_msgs",
  &_PIDTuning_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PIDTuning_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PIDTuning_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PIDTuning_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PIDTuning_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ired_msgs__srv__PIDTuning_Response__get_type_hash,
  &ired_msgs__srv__PIDTuning_Response__get_type_description,
  &ired_msgs__srv__PIDTuning_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ired_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ired_msgs, srv, PIDTuning_Response)() {
  return &::ired_msgs::srv::rosidl_typesupport_c::PIDTuning_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ired_msgs/srv/detail/pid_tuning__struct.h"
// already included above
// #include "ired_msgs/srv/detail/pid_tuning__type_support.h"
// already included above
// #include "ired_msgs/srv/detail/pid_tuning__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ired_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _PIDTuning_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PIDTuning_Event_type_support_ids_t;

static const _PIDTuning_Event_type_support_ids_t _PIDTuning_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PIDTuning_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PIDTuning_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PIDTuning_Event_type_support_symbol_names_t _PIDTuning_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ired_msgs, srv, PIDTuning_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ired_msgs, srv, PIDTuning_Event)),
  }
};

typedef struct _PIDTuning_Event_type_support_data_t
{
  void * data[2];
} _PIDTuning_Event_type_support_data_t;

static _PIDTuning_Event_type_support_data_t _PIDTuning_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PIDTuning_Event_message_typesupport_map = {
  2,
  "ired_msgs",
  &_PIDTuning_Event_message_typesupport_ids.typesupport_identifier[0],
  &_PIDTuning_Event_message_typesupport_symbol_names.symbol_name[0],
  &_PIDTuning_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PIDTuning_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PIDTuning_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ired_msgs__srv__PIDTuning_Event__get_type_hash,
  &ired_msgs__srv__PIDTuning_Event__get_type_description,
  &ired_msgs__srv__PIDTuning_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ired_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ired_msgs, srv, PIDTuning_Event)() {
  return &::ired_msgs::srv::rosidl_typesupport_c::PIDTuning_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ired_msgs/srv/detail/pid_tuning__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace ired_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _PIDTuning_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PIDTuning_type_support_ids_t;

static const _PIDTuning_type_support_ids_t _PIDTuning_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PIDTuning_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PIDTuning_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PIDTuning_type_support_symbol_names_t _PIDTuning_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ired_msgs, srv, PIDTuning)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ired_msgs, srv, PIDTuning)),
  }
};

typedef struct _PIDTuning_type_support_data_t
{
  void * data[2];
} _PIDTuning_type_support_data_t;

static _PIDTuning_type_support_data_t _PIDTuning_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PIDTuning_service_typesupport_map = {
  2,
  "ired_msgs",
  &_PIDTuning_service_typesupport_ids.typesupport_identifier[0],
  &_PIDTuning_service_typesupport_symbol_names.symbol_name[0],
  &_PIDTuning_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PIDTuning_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PIDTuning_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &PIDTuning_Request_message_type_support_handle,
  &PIDTuning_Response_message_type_support_handle,
  &PIDTuning_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ired_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ired_msgs, srv, PIDTuning)() {
  return &::ired_msgs::srv::rosidl_typesupport_c::PIDTuning_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
