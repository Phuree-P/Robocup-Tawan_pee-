// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ired_msgs:srv/PIDTuning.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ired_msgs/srv/detail/pid_tuning__functions.h"
#include "ired_msgs/srv/detail/pid_tuning__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ired_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _PIDTuning_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PIDTuning_Request_type_support_ids_t;

static const _PIDTuning_Request_type_support_ids_t _PIDTuning_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ired_msgs, srv, PIDTuning_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ired_msgs, srv, PIDTuning_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PIDTuning_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ired_msgs__srv__PIDTuning_Request__get_type_hash,
  &ired_msgs__srv__PIDTuning_Request__get_type_description,
  &ired_msgs__srv__PIDTuning_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ired_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ired_msgs::srv::PIDTuning_Request>()
{
  return &::ired_msgs::srv::rosidl_typesupport_cpp::PIDTuning_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ired_msgs, srv, PIDTuning_Request)() {
  return get_message_type_support_handle<ired_msgs::srv::PIDTuning_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ired_msgs/srv/detail/pid_tuning__functions.h"
// already included above
// #include "ired_msgs/srv/detail/pid_tuning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ired_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _PIDTuning_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PIDTuning_Response_type_support_ids_t;

static const _PIDTuning_Response_type_support_ids_t _PIDTuning_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ired_msgs, srv, PIDTuning_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ired_msgs, srv, PIDTuning_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PIDTuning_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ired_msgs__srv__PIDTuning_Response__get_type_hash,
  &ired_msgs__srv__PIDTuning_Response__get_type_description,
  &ired_msgs__srv__PIDTuning_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ired_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ired_msgs::srv::PIDTuning_Response>()
{
  return &::ired_msgs::srv::rosidl_typesupport_cpp::PIDTuning_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ired_msgs, srv, PIDTuning_Response)() {
  return get_message_type_support_handle<ired_msgs::srv::PIDTuning_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ired_msgs/srv/detail/pid_tuning__functions.h"
// already included above
// #include "ired_msgs/srv/detail/pid_tuning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ired_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _PIDTuning_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PIDTuning_Event_type_support_ids_t;

static const _PIDTuning_Event_type_support_ids_t _PIDTuning_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ired_msgs, srv, PIDTuning_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ired_msgs, srv, PIDTuning_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PIDTuning_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ired_msgs__srv__PIDTuning_Event__get_type_hash,
  &ired_msgs__srv__PIDTuning_Event__get_type_description,
  &ired_msgs__srv__PIDTuning_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ired_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ired_msgs::srv::PIDTuning_Event>()
{
  return &::ired_msgs::srv::rosidl_typesupport_cpp::PIDTuning_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ired_msgs, srv, PIDTuning_Event)() {
  return get_message_type_support_handle<ired_msgs::srv::PIDTuning_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "ired_msgs/srv/detail/pid_tuning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ired_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _PIDTuning_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PIDTuning_type_support_ids_t;

static const _PIDTuning_type_support_ids_t _PIDTuning_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ired_msgs, srv, PIDTuning)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ired_msgs, srv, PIDTuning)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PIDTuning_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ired_msgs::srv::PIDTuning_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ired_msgs::srv::PIDTuning_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ired_msgs::srv::PIDTuning_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ired_msgs::srv::PIDTuning>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ired_msgs::srv::PIDTuning>,
  &ired_msgs__srv__PIDTuning__get_type_hash,
  &ired_msgs__srv__PIDTuning__get_type_description,
  &ired_msgs__srv__PIDTuning__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ired_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ired_msgs::srv::PIDTuning>()
{
  return &::ired_msgs::srv::rosidl_typesupport_cpp::PIDTuning_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ired_msgs, srv, PIDTuning)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ired_msgs::srv::PIDTuning>();
}

#ifdef __cplusplus
}
#endif
