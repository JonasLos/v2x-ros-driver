// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/MovementState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/movement_state__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/movement_state__functions.h"
#include "j2735_v2x_msgs/msg/detail/movement_state__struct.h"


// Include directives for member types
// Member `movement_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `state_time_speed`
#include "j2735_v2x_msgs/msg/movement_event_list.h"
// Member `state_time_speed`
#include "j2735_v2x_msgs/msg/detail/movement_event_list__rosidl_typesupport_introspection_c.h"
// Member `maneuver_assist_list`
#include "j2735_v2x_msgs/msg/maneuver_assist_list.h"
// Member `maneuver_assist_list`
#include "j2735_v2x_msgs/msg/detail/maneuver_assist_list__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void j2735_v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__MovementState__init(message_memory);
}

void j2735_v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__MovementState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember j2735_v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_message_member_array[6] = {
  {
    "movement_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__MovementState, movement_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "movement_name_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__MovementState, movement_name_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "signal_group",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__MovementState, signal_group),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state_time_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__MovementState, state_time_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "maneuver_assist_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__MovementState, maneuver_assist_list),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "maneuver_assist_list_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__MovementState, maneuver_assist_list_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers j2735_v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "MovementState",  // message name
  6,  // number of fields
  sizeof(j2735_v2x_msgs__msg__MovementState),
  false,  // has_any_key_member_
  j2735_v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_message_member_array,  // message members
  j2735_v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_init_function,  // function to initialize message memory (memory has to be allocated)
  j2735_v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t j2735_v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_message_type_support_handle = {
  0,
  &j2735_v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__MovementState__get_type_hash,
  &j2735_v2x_msgs__msg__MovementState__get_type_description,
  &j2735_v2x_msgs__msg__MovementState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, MovementState)() {
  j2735_v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, MovementEventList)();
  j2735_v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, ManeuverAssistList)();
  if (!j2735_v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_message_type_support_handle.typesupport_identifier) {
    j2735_v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &j2735_v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
