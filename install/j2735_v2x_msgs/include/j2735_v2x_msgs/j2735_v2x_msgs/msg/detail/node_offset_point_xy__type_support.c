// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/NodeOffsetPointXY.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/node_offset_point_xy__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/node_offset_point_xy__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_offset_point_xy__struct.h"


// Include directives for member types
// Member `node_xy1`
#include "j2735_v2x_msgs/msg/node_xy20b.h"
// Member `node_xy1`
#include "j2735_v2x_msgs/msg/detail/node_xy20b__rosidl_typesupport_introspection_c.h"
// Member `node_xy2`
#include "j2735_v2x_msgs/msg/node_xy22b.h"
// Member `node_xy2`
#include "j2735_v2x_msgs/msg/detail/node_xy22b__rosidl_typesupport_introspection_c.h"
// Member `node_xy3`
#include "j2735_v2x_msgs/msg/node_xy24b.h"
// Member `node_xy3`
#include "j2735_v2x_msgs/msg/detail/node_xy24b__rosidl_typesupport_introspection_c.h"
// Member `node_xy4`
#include "j2735_v2x_msgs/msg/node_xy26b.h"
// Member `node_xy4`
#include "j2735_v2x_msgs/msg/detail/node_xy26b__rosidl_typesupport_introspection_c.h"
// Member `node_xy5`
#include "j2735_v2x_msgs/msg/node_xy28b.h"
// Member `node_xy5`
#include "j2735_v2x_msgs/msg/detail/node_xy28b__rosidl_typesupport_introspection_c.h"
// Member `node_xy6`
#include "j2735_v2x_msgs/msg/node_xy32b.h"
// Member `node_xy6`
#include "j2735_v2x_msgs/msg/detail/node_xy32b__rosidl_typesupport_introspection_c.h"
// Member `node_latlon`
#include "j2735_v2x_msgs/msg/node_l_lm_d64b.h"
// Member `node_latlon`
#include "j2735_v2x_msgs/msg/detail/node_l_lm_d64b__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void j2735_v2x_msgs__msg__NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__NodeOffsetPointXY__init(message_memory);
}

void j2735_v2x_msgs__msg__NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__NodeOffsetPointXY__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember j2735_v2x_msgs__msg__NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_member_array[8] = {
  {
    "choice",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__NodeOffsetPointXY, choice),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_xy1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__NodeOffsetPointXY, node_xy1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_xy2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__NodeOffsetPointXY, node_xy2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_xy3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__NodeOffsetPointXY, node_xy3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_xy4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__NodeOffsetPointXY, node_xy4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_xy5",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__NodeOffsetPointXY, node_xy5),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_xy6",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__NodeOffsetPointXY, node_xy6),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_latlon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__NodeOffsetPointXY, node_latlon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers j2735_v2x_msgs__msg__NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "NodeOffsetPointXY",  // message name
  8,  // number of fields
  sizeof(j2735_v2x_msgs__msg__NodeOffsetPointXY),
  false,  // has_any_key_member_
  j2735_v2x_msgs__msg__NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_member_array,  // message members
  j2735_v2x_msgs__msg__NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_init_function,  // function to initialize message memory (memory has to be allocated)
  j2735_v2x_msgs__msg__NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t j2735_v2x_msgs__msg__NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_type_support_handle = {
  0,
  &j2735_v2x_msgs__msg__NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__NodeOffsetPointXY__get_type_hash,
  &j2735_v2x_msgs__msg__NodeOffsetPointXY__get_type_description,
  &j2735_v2x_msgs__msg__NodeOffsetPointXY__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, NodeOffsetPointXY)() {
  j2735_v2x_msgs__msg__NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, NodeXY20b)();
  j2735_v2x_msgs__msg__NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, NodeXY22b)();
  j2735_v2x_msgs__msg__NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, NodeXY24b)();
  j2735_v2x_msgs__msg__NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, NodeXY26b)();
  j2735_v2x_msgs__msg__NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, NodeXY28b)();
  j2735_v2x_msgs__msg__NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, NodeXY32b)();
  j2735_v2x_msgs__msg__NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, NodeLLmD64b)();
  if (!j2735_v2x_msgs__msg__NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_type_support_handle.typesupport_identifier) {
    j2735_v2x_msgs__msg__NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &j2735_v2x_msgs__msg__NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
