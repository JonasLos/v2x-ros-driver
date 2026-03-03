// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/TrailerHistoryPoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/trailer_history_point__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/trailer_history_point__functions.h"
#include "j2735_v2x_msgs/msg/detail/trailer_history_point__struct.h"


// Include directives for member types
// Member `pivot_angle`
#include "j2735_v2x_msgs/msg/angle.h"
// Member `pivot_angle`
#include "j2735_v2x_msgs/msg/detail/angle__rosidl_typesupport_introspection_c.h"
// Member `time_offset`
#include "j2735_v2x_msgs/msg/time_offset.h"
// Member `time_offset`
#include "j2735_v2x_msgs/msg/detail/time_offset__rosidl_typesupport_introspection_c.h"
// Member `position_offset`
#include "j2735_v2x_msgs/msg/node_xy24b.h"
// Member `position_offset`
#include "j2735_v2x_msgs/msg/detail/node_xy24b__rosidl_typesupport_introspection_c.h"
// Member `elevation_offset`
#include "j2735_v2x_msgs/msg/vert_offset_b07.h"
// Member `elevation_offset`
#include "j2735_v2x_msgs/msg/detail/vert_offset_b07__rosidl_typesupport_introspection_c.h"
// Member `heading`
#include "j2735_v2x_msgs/msg/coarse_heading.h"
// Member `heading`
#include "j2735_v2x_msgs/msg/detail/coarse_heading__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void j2735_v2x_msgs__msg__TrailerHistoryPoint__rosidl_typesupport_introspection_c__TrailerHistoryPoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__TrailerHistoryPoint__init(message_memory);
}

void j2735_v2x_msgs__msg__TrailerHistoryPoint__rosidl_typesupport_introspection_c__TrailerHistoryPoint_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__TrailerHistoryPoint__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember j2735_v2x_msgs__msg__TrailerHistoryPoint__rosidl_typesupport_introspection_c__TrailerHistoryPoint_message_member_array[6] = {
  {
    "presence_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrailerHistoryPoint, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pivot_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrailerHistoryPoint, pivot_angle),  // bytes offset in struct
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
    offsetof(j2735_v2x_msgs__msg__TrailerHistoryPoint, time_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrailerHistoryPoint, position_offset),  // bytes offset in struct
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
    offsetof(j2735_v2x_msgs__msg__TrailerHistoryPoint, elevation_offset),  // bytes offset in struct
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
    offsetof(j2735_v2x_msgs__msg__TrailerHistoryPoint, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers j2735_v2x_msgs__msg__TrailerHistoryPoint__rosidl_typesupport_introspection_c__TrailerHistoryPoint_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "TrailerHistoryPoint",  // message name
  6,  // number of fields
  sizeof(j2735_v2x_msgs__msg__TrailerHistoryPoint),
  false,  // has_any_key_member_
  j2735_v2x_msgs__msg__TrailerHistoryPoint__rosidl_typesupport_introspection_c__TrailerHistoryPoint_message_member_array,  // message members
  j2735_v2x_msgs__msg__TrailerHistoryPoint__rosidl_typesupport_introspection_c__TrailerHistoryPoint_init_function,  // function to initialize message memory (memory has to be allocated)
  j2735_v2x_msgs__msg__TrailerHistoryPoint__rosidl_typesupport_introspection_c__TrailerHistoryPoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t j2735_v2x_msgs__msg__TrailerHistoryPoint__rosidl_typesupport_introspection_c__TrailerHistoryPoint_message_type_support_handle = {
  0,
  &j2735_v2x_msgs__msg__TrailerHistoryPoint__rosidl_typesupport_introspection_c__TrailerHistoryPoint_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__TrailerHistoryPoint__get_type_hash,
  &j2735_v2x_msgs__msg__TrailerHistoryPoint__get_type_description,
  &j2735_v2x_msgs__msg__TrailerHistoryPoint__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TrailerHistoryPoint)() {
  j2735_v2x_msgs__msg__TrailerHistoryPoint__rosidl_typesupport_introspection_c__TrailerHistoryPoint_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, Angle)();
  j2735_v2x_msgs__msg__TrailerHistoryPoint__rosidl_typesupport_introspection_c__TrailerHistoryPoint_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TimeOffset)();
  j2735_v2x_msgs__msg__TrailerHistoryPoint__rosidl_typesupport_introspection_c__TrailerHistoryPoint_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, NodeXY24b)();
  j2735_v2x_msgs__msg__TrailerHistoryPoint__rosidl_typesupport_introspection_c__TrailerHistoryPoint_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, VertOffsetB07)();
  j2735_v2x_msgs__msg__TrailerHistoryPoint__rosidl_typesupport_introspection_c__TrailerHistoryPoint_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, CoarseHeading)();
  if (!j2735_v2x_msgs__msg__TrailerHistoryPoint__rosidl_typesupport_introspection_c__TrailerHistoryPoint_message_type_support_handle.typesupport_identifier) {
    j2735_v2x_msgs__msg__TrailerHistoryPoint__rosidl_typesupport_introspection_c__TrailerHistoryPoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &j2735_v2x_msgs__msg__TrailerHistoryPoint__rosidl_typesupport_introspection_c__TrailerHistoryPoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
