// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_driver_msgs:msg/RobotEnabled.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_driver_msgs/msg/detail/robot_enabled__rosidl_typesupport_introspection_c.h"
#include "carma_driver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_driver_msgs/msg/detail/robot_enabled__functions.h"
#include "carma_driver_msgs/msg/detail/robot_enabled__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void carma_driver_msgs__msg__RobotEnabled__rosidl_typesupport_introspection_c__RobotEnabled_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_driver_msgs__msg__RobotEnabled__init(message_memory);
}

void carma_driver_msgs__msg__RobotEnabled__rosidl_typesupport_introspection_c__RobotEnabled_fini_function(void * message_memory)
{
  carma_driver_msgs__msg__RobotEnabled__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember carma_driver_msgs__msg__RobotEnabled__rosidl_typesupport_introspection_c__RobotEnabled_message_member_array[10] = {
  {
    "robot_active",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__msg__RobotEnabled, robot_active),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__msg__RobotEnabled, robot_enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "torque",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__msg__RobotEnabled, torque),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "torque_validity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__msg__RobotEnabled, torque_validity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brake_decel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__msg__RobotEnabled, brake_decel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brake_decel_validity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__msg__RobotEnabled, brake_decel_validity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "throttle_effort",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__msg__RobotEnabled, throttle_effort),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "throttle_effort_validity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__msg__RobotEnabled, throttle_effort_validity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "braking_effort",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__msg__RobotEnabled, braking_effort),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "braking_effort_validity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__msg__RobotEnabled, braking_effort_validity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers carma_driver_msgs__msg__RobotEnabled__rosidl_typesupport_introspection_c__RobotEnabled_message_members = {
  "carma_driver_msgs__msg",  // message namespace
  "RobotEnabled",  // message name
  10,  // number of fields
  sizeof(carma_driver_msgs__msg__RobotEnabled),
  false,  // has_any_key_member_
  carma_driver_msgs__msg__RobotEnabled__rosidl_typesupport_introspection_c__RobotEnabled_message_member_array,  // message members
  carma_driver_msgs__msg__RobotEnabled__rosidl_typesupport_introspection_c__RobotEnabled_init_function,  // function to initialize message memory (memory has to be allocated)
  carma_driver_msgs__msg__RobotEnabled__rosidl_typesupport_introspection_c__RobotEnabled_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t carma_driver_msgs__msg__RobotEnabled__rosidl_typesupport_introspection_c__RobotEnabled_message_type_support_handle = {
  0,
  &carma_driver_msgs__msg__RobotEnabled__rosidl_typesupport_introspection_c__RobotEnabled_message_members,
  get_message_typesupport_handle_function,
  &carma_driver_msgs__msg__RobotEnabled__get_type_hash,
  &carma_driver_msgs__msg__RobotEnabled__get_type_description,
  &carma_driver_msgs__msg__RobotEnabled__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_driver_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, msg, RobotEnabled)() {
  if (!carma_driver_msgs__msg__RobotEnabled__rosidl_typesupport_introspection_c__RobotEnabled_message_type_support_handle.typesupport_identifier) {
    carma_driver_msgs__msg__RobotEnabled__rosidl_typesupport_introspection_c__RobotEnabled_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &carma_driver_msgs__msg__RobotEnabled__rosidl_typesupport_introspection_c__RobotEnabled_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
