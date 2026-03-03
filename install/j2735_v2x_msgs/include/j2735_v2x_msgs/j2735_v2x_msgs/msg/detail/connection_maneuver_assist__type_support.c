// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/ConnectionManeuverAssist.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__functions.h"
#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void j2735_v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__ConnectionManeuverAssist__init(message_memory);
}

void j2735_v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__ConnectionManeuverAssist__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember j2735_v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_message_member_array[9] = {
  {
    "connection_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__ConnectionManeuverAssist, connection_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "queue_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__ConnectionManeuverAssist, queue_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "queue_length_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__ConnectionManeuverAssist, queue_length_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "available_storage_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__ConnectionManeuverAssist, available_storage_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "available_storage_length_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__ConnectionManeuverAssist, available_storage_length_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wait_on_stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__ConnectionManeuverAssist, wait_on_stop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wait_on_stop_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__ConnectionManeuverAssist, wait_on_stop_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ped_bicycle_detect",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__ConnectionManeuverAssist, ped_bicycle_detect),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ped_bicycle_detect_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__ConnectionManeuverAssist, ped_bicycle_detect_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers j2735_v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "ConnectionManeuverAssist",  // message name
  9,  // number of fields
  sizeof(j2735_v2x_msgs__msg__ConnectionManeuverAssist),
  false,  // has_any_key_member_
  j2735_v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_message_member_array,  // message members
  j2735_v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_init_function,  // function to initialize message memory (memory has to be allocated)
  j2735_v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t j2735_v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_message_type_support_handle = {
  0,
  &j2735_v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__ConnectionManeuverAssist__get_type_hash,
  &j2735_v2x_msgs__msg__ConnectionManeuverAssist__get_type_description,
  &j2735_v2x_msgs__msg__ConnectionManeuverAssist__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, ConnectionManeuverAssist)() {
  if (!j2735_v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_message_type_support_handle.typesupport_identifier) {
    j2735_v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &j2735_v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
