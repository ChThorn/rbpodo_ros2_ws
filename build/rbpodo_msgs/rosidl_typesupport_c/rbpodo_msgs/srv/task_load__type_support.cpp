// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from rbpodo_msgs:srv/TaskLoad.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rbpodo_msgs/srv/detail/task_load__struct.h"
#include "rbpodo_msgs/srv/detail/task_load__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rbpodo_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TaskLoad_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TaskLoad_Request_type_support_ids_t;

static const _TaskLoad_Request_type_support_ids_t _TaskLoad_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TaskLoad_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TaskLoad_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TaskLoad_Request_type_support_symbol_names_t _TaskLoad_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rbpodo_msgs, srv, TaskLoad_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rbpodo_msgs, srv, TaskLoad_Request)),
  }
};

typedef struct _TaskLoad_Request_type_support_data_t
{
  void * data[2];
} _TaskLoad_Request_type_support_data_t;

static _TaskLoad_Request_type_support_data_t _TaskLoad_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TaskLoad_Request_message_typesupport_map = {
  2,
  "rbpodo_msgs",
  &_TaskLoad_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TaskLoad_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TaskLoad_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TaskLoad_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TaskLoad_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rbpodo_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rbpodo_msgs, srv, TaskLoad_Request)() {
  return &::rbpodo_msgs::srv::rosidl_typesupport_c::TaskLoad_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rbpodo_msgs/srv/detail/task_load__struct.h"
// already included above
// #include "rbpodo_msgs/srv/detail/task_load__type_support.h"
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

namespace rbpodo_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TaskLoad_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TaskLoad_Response_type_support_ids_t;

static const _TaskLoad_Response_type_support_ids_t _TaskLoad_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TaskLoad_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TaskLoad_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TaskLoad_Response_type_support_symbol_names_t _TaskLoad_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rbpodo_msgs, srv, TaskLoad_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rbpodo_msgs, srv, TaskLoad_Response)),
  }
};

typedef struct _TaskLoad_Response_type_support_data_t
{
  void * data[2];
} _TaskLoad_Response_type_support_data_t;

static _TaskLoad_Response_type_support_data_t _TaskLoad_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TaskLoad_Response_message_typesupport_map = {
  2,
  "rbpodo_msgs",
  &_TaskLoad_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TaskLoad_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TaskLoad_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TaskLoad_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TaskLoad_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rbpodo_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rbpodo_msgs, srv, TaskLoad_Response)() {
  return &::rbpodo_msgs::srv::rosidl_typesupport_c::TaskLoad_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rbpodo_msgs/srv/detail/task_load__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rbpodo_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TaskLoad_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TaskLoad_type_support_ids_t;

static const _TaskLoad_type_support_ids_t _TaskLoad_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TaskLoad_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TaskLoad_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TaskLoad_type_support_symbol_names_t _TaskLoad_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rbpodo_msgs, srv, TaskLoad)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rbpodo_msgs, srv, TaskLoad)),
  }
};

typedef struct _TaskLoad_type_support_data_t
{
  void * data[2];
} _TaskLoad_type_support_data_t;

static _TaskLoad_type_support_data_t _TaskLoad_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TaskLoad_service_typesupport_map = {
  2,
  "rbpodo_msgs",
  &_TaskLoad_service_typesupport_ids.typesupport_identifier[0],
  &_TaskLoad_service_typesupport_symbol_names.symbol_name[0],
  &_TaskLoad_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TaskLoad_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TaskLoad_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rbpodo_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, rbpodo_msgs, srv, TaskLoad)() {
  return &::rbpodo_msgs::srv::rosidl_typesupport_c::TaskLoad_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
