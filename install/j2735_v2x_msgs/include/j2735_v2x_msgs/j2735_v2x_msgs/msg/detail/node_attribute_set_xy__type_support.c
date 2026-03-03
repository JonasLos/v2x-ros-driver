// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/NodeAttributeSetXY.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/node_attribute_set_xy__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/node_attribute_set_xy__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_attribute_set_xy__struct.h"


// Include directives for member types
// Member `local_node`
#include "j2735_v2x_msgs/msg/node_attribute_xy_list.h"
// Member `local_node`
#include "j2735_v2x_msgs/msg/detail/node_attribute_xy_list__rosidl_typesupport_introspection_c.h"
// Member `disabled`
// Member `enabled`
#include "j2735_v2x_msgs/msg/segment_attribute_xy_list.h"
// Member `disabled`
// Member `enabled`
#include "j2735_v2x_msgs/msg/detail/segment_attribute_xy_list__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "j2735_v2x_msgs/msg/lane_data_attribute_list.h"
// Member `data`
#include "j2735_v2x_msgs/msg/detail/lane_data_attribute_list__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void j2735_v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__NodeAttributeSetXY__init(message_memory);
}

void j2735_v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__NodeAttributeSetXY__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember j2735_v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_member_array[12] = {
  {
    "local_node",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__NodeAttributeSetXY, local_node),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "local_node_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__NodeAttributeSetXY, local_node_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__NodeAttributeSetXY, disabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disabled_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__NodeAttributeSetXY, disabled_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__NodeAttributeSetXY, enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enabled_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__NodeAttributeSetXY, enabled_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__NodeAttributeSetXY, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__NodeAttributeSetXY, data_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__NodeAttributeSetXY, d_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d_width_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__NodeAttributeSetXY, d_width_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d_elevation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__NodeAttributeSetXY, d_elevation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d_elevation_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__NodeAttributeSetXY, d_elevation_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers j2735_v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "NodeAttributeSetXY",  // message name
  12,  // number of fields
  sizeof(j2735_v2x_msgs__msg__NodeAttributeSetXY),
  false,  // has_any_key_member_
  j2735_v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_member_array,  // message members
  j2735_v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_init_function,  // function to initialize message memory (memory has to be allocated)
  j2735_v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t j2735_v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_type_support_handle = {
  0,
  &j2735_v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__NodeAttributeSetXY__get_type_hash,
  &j2735_v2x_msgs__msg__NodeAttributeSetXY__get_type_description,
  &j2735_v2x_msgs__msg__NodeAttributeSetXY__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, NodeAttributeSetXY)() {
  j2735_v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, NodeAttributeXYList)();
  j2735_v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, SegmentAttributeXYList)();
  j2735_v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, SegmentAttributeXYList)();
  j2735_v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, LaneDataAttributeList)();
  if (!j2735_v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_type_support_handle.typesupport_identifier) {
    j2735_v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &j2735_v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
