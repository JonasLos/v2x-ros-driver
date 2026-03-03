// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/BrakeSystemStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/brake_system_status__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/brake_system_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/brake_system_status__struct.h"


// Include directives for member types
// Member `wheel_brakes`
#include "j2735_v2x_msgs/msg/brake_applied_status.h"
// Member `wheel_brakes`
#include "j2735_v2x_msgs/msg/detail/brake_applied_status__rosidl_typesupport_introspection_c.h"
// Member `traction`
#include "j2735_v2x_msgs/msg/traction_control_status.h"
// Member `traction`
#include "j2735_v2x_msgs/msg/detail/traction_control_status__rosidl_typesupport_introspection_c.h"
// Member `abs`
#include "j2735_v2x_msgs/msg/anti_lock_brake_status.h"
// Member `abs`
#include "j2735_v2x_msgs/msg/detail/anti_lock_brake_status__rosidl_typesupport_introspection_c.h"
// Member `scs`
#include "j2735_v2x_msgs/msg/stability_control_status.h"
// Member `scs`
#include "j2735_v2x_msgs/msg/detail/stability_control_status__rosidl_typesupport_introspection_c.h"
// Member `brake_boost`
#include "j2735_v2x_msgs/msg/brake_boost_applied.h"
// Member `brake_boost`
#include "j2735_v2x_msgs/msg/detail/brake_boost_applied__rosidl_typesupport_introspection_c.h"
// Member `aux_brakes`
#include "j2735_v2x_msgs/msg/auxiliary_brake_status.h"
// Member `aux_brakes`
#include "j2735_v2x_msgs/msg/detail/auxiliary_brake_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void j2735_v2x_msgs__msg__BrakeSystemStatus__rosidl_typesupport_introspection_c__BrakeSystemStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__BrakeSystemStatus__init(message_memory);
}

void j2735_v2x_msgs__msg__BrakeSystemStatus__rosidl_typesupport_introspection_c__BrakeSystemStatus_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__BrakeSystemStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember j2735_v2x_msgs__msg__BrakeSystemStatus__rosidl_typesupport_introspection_c__BrakeSystemStatus_message_member_array[6] = {
  {
    "wheel_brakes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BrakeSystemStatus, wheel_brakes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "traction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BrakeSystemStatus, traction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "abs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BrakeSystemStatus, abs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BrakeSystemStatus, scs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brake_boost",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BrakeSystemStatus, brake_boost),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aux_brakes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BrakeSystemStatus, aux_brakes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers j2735_v2x_msgs__msg__BrakeSystemStatus__rosidl_typesupport_introspection_c__BrakeSystemStatus_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "BrakeSystemStatus",  // message name
  6,  // number of fields
  sizeof(j2735_v2x_msgs__msg__BrakeSystemStatus),
  false,  // has_any_key_member_
  j2735_v2x_msgs__msg__BrakeSystemStatus__rosidl_typesupport_introspection_c__BrakeSystemStatus_message_member_array,  // message members
  j2735_v2x_msgs__msg__BrakeSystemStatus__rosidl_typesupport_introspection_c__BrakeSystemStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  j2735_v2x_msgs__msg__BrakeSystemStatus__rosidl_typesupport_introspection_c__BrakeSystemStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t j2735_v2x_msgs__msg__BrakeSystemStatus__rosidl_typesupport_introspection_c__BrakeSystemStatus_message_type_support_handle = {
  0,
  &j2735_v2x_msgs__msg__BrakeSystemStatus__rosidl_typesupport_introspection_c__BrakeSystemStatus_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__BrakeSystemStatus__get_type_hash,
  &j2735_v2x_msgs__msg__BrakeSystemStatus__get_type_description,
  &j2735_v2x_msgs__msg__BrakeSystemStatus__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, BrakeSystemStatus)() {
  j2735_v2x_msgs__msg__BrakeSystemStatus__rosidl_typesupport_introspection_c__BrakeSystemStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, BrakeAppliedStatus)();
  j2735_v2x_msgs__msg__BrakeSystemStatus__rosidl_typesupport_introspection_c__BrakeSystemStatus_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TractionControlStatus)();
  j2735_v2x_msgs__msg__BrakeSystemStatus__rosidl_typesupport_introspection_c__BrakeSystemStatus_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, AntiLockBrakeStatus)();
  j2735_v2x_msgs__msg__BrakeSystemStatus__rosidl_typesupport_introspection_c__BrakeSystemStatus_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, StabilityControlStatus)();
  j2735_v2x_msgs__msg__BrakeSystemStatus__rosidl_typesupport_introspection_c__BrakeSystemStatus_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, BrakeBoostApplied)();
  j2735_v2x_msgs__msg__BrakeSystemStatus__rosidl_typesupport_introspection_c__BrakeSystemStatus_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, AuxiliaryBrakeStatus)();
  if (!j2735_v2x_msgs__msg__BrakeSystemStatus__rosidl_typesupport_introspection_c__BrakeSystemStatus_message_type_support_handle.typesupport_identifier) {
    j2735_v2x_msgs__msg__BrakeSystemStatus__rosidl_typesupport_introspection_c__BrakeSystemStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &j2735_v2x_msgs__msg__BrakeSystemStatus__rosidl_typesupport_introspection_c__BrakeSystemStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
