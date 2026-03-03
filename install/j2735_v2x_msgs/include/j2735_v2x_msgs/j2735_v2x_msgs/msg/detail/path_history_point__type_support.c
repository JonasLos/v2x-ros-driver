// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/PathHistoryPoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/path_history_point__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/path_history_point__functions.h"
#include "j2735_v2x_msgs/msg/detail/path_history_point__struct.h"


// Include directives for member types
// Member `lat_offset`
// Member `lon_offset`
#include "j2735_v2x_msgs/msg/offset_llb18.h"
// Member `lat_offset`
// Member `lon_offset`
#include "j2735_v2x_msgs/msg/detail/offset_llb18__rosidl_typesupport_introspection_c.h"
// Member `elevation_offset`
#include "j2735_v2x_msgs/msg/vert_offset_b12.h"
// Member `elevation_offset`
#include "j2735_v2x_msgs/msg/detail/vert_offset_b12__rosidl_typesupport_introspection_c.h"
// Member `time_offset`
#include "j2735_v2x_msgs/msg/time_offset.h"
// Member `time_offset`
#include "j2735_v2x_msgs/msg/detail/time_offset__rosidl_typesupport_introspection_c.h"
// Member `speed`
#include "j2735_v2x_msgs/msg/speed.h"
// Member `speed`
#include "j2735_v2x_msgs/msg/detail/speed__rosidl_typesupport_introspection_c.h"
// Member `pos_accuracy`
#include "j2735_v2x_msgs/msg/positional_accuracy.h"
// Member `pos_accuracy`
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__rosidl_typesupport_introspection_c.h"
// Member `heading`
#include "j2735_v2x_msgs/msg/coarse_heading.h"
// Member `heading`
#include "j2735_v2x_msgs/msg/detail/coarse_heading__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void j2735_v2x_msgs__msg__PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__PathHistoryPoint__init(message_memory);
}

void j2735_v2x_msgs__msg__PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__PathHistoryPoint__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember j2735_v2x_msgs__msg__PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_message_member_array[7] = {
  {
    "lat_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__PathHistoryPoint, lat_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lon_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__PathHistoryPoint, lon_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elevation_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__PathHistoryPoint, elevation_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__PathHistoryPoint, time_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__PathHistoryPoint, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_accuracy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__PathHistoryPoint, pos_accuracy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__PathHistoryPoint, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers j2735_v2x_msgs__msg__PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "PathHistoryPoint",  // message name
  7,  // number of fields
  sizeof(j2735_v2x_msgs__msg__PathHistoryPoint),
  false,  // has_any_key_member_
  j2735_v2x_msgs__msg__PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_message_member_array,  // message members
  j2735_v2x_msgs__msg__PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_init_function,  // function to initialize message memory (memory has to be allocated)
  j2735_v2x_msgs__msg__PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t j2735_v2x_msgs__msg__PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_message_type_support_handle = {
  0,
  &j2735_v2x_msgs__msg__PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__PathHistoryPoint__get_type_hash,
  &j2735_v2x_msgs__msg__PathHistoryPoint__get_type_description,
  &j2735_v2x_msgs__msg__PathHistoryPoint__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, PathHistoryPoint)() {
  j2735_v2x_msgs__msg__PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, OffsetLLB18)();
  j2735_v2x_msgs__msg__PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, OffsetLLB18)();
  j2735_v2x_msgs__msg__PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, VertOffsetB12)();
  j2735_v2x_msgs__msg__PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TimeOffset)();
  j2735_v2x_msgs__msg__PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, Speed)();
  j2735_v2x_msgs__msg__PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, PositionalAccuracy)();
  j2735_v2x_msgs__msg__PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, CoarseHeading)();
  if (!j2735_v2x_msgs__msg__PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_message_type_support_handle.typesupport_identifier) {
    j2735_v2x_msgs__msg__PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &j2735_v2x_msgs__msg__PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
