// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/TrafficControlMessageV01.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/traffic_control_message_v01__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_message_v01__functions.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_message_v01__struct.h"


// Include directives for member types
// Member `reqid`
#include "j2735_v2x_msgs/msg/id64b.h"
// Member `reqid`
#include "j2735_v2x_msgs/msg/detail/id64b__rosidl_typesupport_introspection_c.h"
// Member `id`
#include "j2735_v2x_msgs/msg/id128b.h"
// Member `id`
#include "j2735_v2x_msgs/msg/detail/id128b__rosidl_typesupport_introspection_c.h"
// Member `package`
#include "j2735_v2x_msgs/msg/traffic_control_package.h"
// Member `package`
#include "j2735_v2x_msgs/msg/detail/traffic_control_package__rosidl_typesupport_introspection_c.h"
// Member `params`
#include "j2735_v2x_msgs/msg/traffic_control_params.h"
// Member `params`
#include "j2735_v2x_msgs/msg/detail/traffic_control_params__rosidl_typesupport_introspection_c.h"
// Member `geometry`
#include "j2735_v2x_msgs/msg/traffic_control_geometry.h"
// Member `geometry`
#include "j2735_v2x_msgs/msg/detail/traffic_control_geometry__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void j2735_v2x_msgs__msg__TrafficControlMessageV01__rosidl_typesupport_introspection_c__TrafficControlMessageV01_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__TrafficControlMessageV01__init(message_memory);
}

void j2735_v2x_msgs__msg__TrafficControlMessageV01__rosidl_typesupport_introspection_c__TrafficControlMessageV01_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__TrafficControlMessageV01__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember j2735_v2x_msgs__msg__TrafficControlMessageV01__rosidl_typesupport_introspection_c__TrafficControlMessageV01_message_member_array[12] = {
  {
    "reqid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlMessageV01, reqid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reqseq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlMessageV01, reqseq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "msgtot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlMessageV01, msgtot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "msgnum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlMessageV01, msgnum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlMessageV01, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "updated",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlMessageV01, updated),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "package",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlMessageV01, package),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "package_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlMessageV01, package_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlMessageV01, params),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "params_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlMessageV01, params_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "geometry",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlMessageV01, geometry),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "geometry_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlMessageV01, geometry_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers j2735_v2x_msgs__msg__TrafficControlMessageV01__rosidl_typesupport_introspection_c__TrafficControlMessageV01_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "TrafficControlMessageV01",  // message name
  12,  // number of fields
  sizeof(j2735_v2x_msgs__msg__TrafficControlMessageV01),
  false,  // has_any_key_member_
  j2735_v2x_msgs__msg__TrafficControlMessageV01__rosidl_typesupport_introspection_c__TrafficControlMessageV01_message_member_array,  // message members
  j2735_v2x_msgs__msg__TrafficControlMessageV01__rosidl_typesupport_introspection_c__TrafficControlMessageV01_init_function,  // function to initialize message memory (memory has to be allocated)
  j2735_v2x_msgs__msg__TrafficControlMessageV01__rosidl_typesupport_introspection_c__TrafficControlMessageV01_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t j2735_v2x_msgs__msg__TrafficControlMessageV01__rosidl_typesupport_introspection_c__TrafficControlMessageV01_message_type_support_handle = {
  0,
  &j2735_v2x_msgs__msg__TrafficControlMessageV01__rosidl_typesupport_introspection_c__TrafficControlMessageV01_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__TrafficControlMessageV01__get_type_hash,
  &j2735_v2x_msgs__msg__TrafficControlMessageV01__get_type_description,
  &j2735_v2x_msgs__msg__TrafficControlMessageV01__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TrafficControlMessageV01)() {
  j2735_v2x_msgs__msg__TrafficControlMessageV01__rosidl_typesupport_introspection_c__TrafficControlMessageV01_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, Id64b)();
  j2735_v2x_msgs__msg__TrafficControlMessageV01__rosidl_typesupport_introspection_c__TrafficControlMessageV01_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, Id128b)();
  j2735_v2x_msgs__msg__TrafficControlMessageV01__rosidl_typesupport_introspection_c__TrafficControlMessageV01_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TrafficControlPackage)();
  j2735_v2x_msgs__msg__TrafficControlMessageV01__rosidl_typesupport_introspection_c__TrafficControlMessageV01_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TrafficControlParams)();
  j2735_v2x_msgs__msg__TrafficControlMessageV01__rosidl_typesupport_introspection_c__TrafficControlMessageV01_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TrafficControlGeometry)();
  if (!j2735_v2x_msgs__msg__TrafficControlMessageV01__rosidl_typesupport_introspection_c__TrafficControlMessageV01_message_type_support_handle.typesupport_identifier) {
    j2735_v2x_msgs__msg__TrafficControlMessageV01__rosidl_typesupport_introspection_c__TrafficControlMessageV01_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &j2735_v2x_msgs__msg__TrafficControlMessageV01__rosidl_typesupport_introspection_c__TrafficControlMessageV01_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
