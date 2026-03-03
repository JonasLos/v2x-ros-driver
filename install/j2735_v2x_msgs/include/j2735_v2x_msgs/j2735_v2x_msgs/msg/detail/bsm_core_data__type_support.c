// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/BSMCoreData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/bsm_core_data__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/bsm_core_data__functions.h"
#include "j2735_v2x_msgs/msg/detail/bsm_core_data__struct.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `accuracy`
#include "j2735_v2x_msgs/msg/positional_accuracy.h"
// Member `accuracy`
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__rosidl_typesupport_introspection_c.h"
// Member `transmission`
#include "j2735_v2x_msgs/msg/transmission_state.h"
// Member `transmission`
#include "j2735_v2x_msgs/msg/detail/transmission_state__rosidl_typesupport_introspection_c.h"
// Member `accel_set`
#include "j2735_v2x_msgs/msg/acceleration_set4_way.h"
// Member `accel_set`
#include "j2735_v2x_msgs/msg/detail/acceleration_set4_way__rosidl_typesupport_introspection_c.h"
// Member `brakes`
#include "j2735_v2x_msgs/msg/brake_system_status.h"
// Member `brakes`
#include "j2735_v2x_msgs/msg/detail/brake_system_status__rosidl_typesupport_introspection_c.h"
// Member `size`
#include "j2735_v2x_msgs/msg/vehicle_size.h"
// Member `size`
#include "j2735_v2x_msgs/msg/detail/vehicle_size__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__BSMCoreData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__BSMCoreData__init(message_memory);
}

void j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__BSMCoreData_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__BSMCoreData__fini(message_memory);
}

size_t j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__size_function__BSMCoreData__id(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__get_const_function__BSMCoreData__id(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__get_function__BSMCoreData__id(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__fetch_function__BSMCoreData__id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__get_const_function__BSMCoreData__id(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__assign_function__BSMCoreData__id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__get_function__BSMCoreData__id(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__resize_function__BSMCoreData__id(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__BSMCoreData_message_member_array[14] = {
  {
    "msg_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BSMCoreData, msg_count),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BSMCoreData, id),  // bytes offset in struct
    NULL,  // default value
    j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__size_function__BSMCoreData__id,  // size() function pointer
    j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__get_const_function__BSMCoreData__id,  // get_const(index) function pointer
    j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__get_function__BSMCoreData__id,  // get(index) function pointer
    j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__fetch_function__BSMCoreData__id,  // fetch(index, &value) function pointer
    j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__assign_function__BSMCoreData__id,  // assign(index, value) function pointer
    j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__resize_function__BSMCoreData__id  // resize(index) function pointer
  },
  {
    "sec_mark",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BSMCoreData, sec_mark),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BSMCoreData, longitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BSMCoreData, latitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elev",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BSMCoreData, elev),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accuracy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BSMCoreData, accuracy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transmission",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BSMCoreData, transmission),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BSMCoreData, speed),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BSMCoreData, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BSMCoreData, angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BSMCoreData, accel_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brakes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BSMCoreData, brakes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BSMCoreData, size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__BSMCoreData_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "BSMCoreData",  // message name
  14,  // number of fields
  sizeof(j2735_v2x_msgs__msg__BSMCoreData),
  false,  // has_any_key_member_
  j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__BSMCoreData_message_member_array,  // message members
  j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__BSMCoreData_init_function,  // function to initialize message memory (memory has to be allocated)
  j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__BSMCoreData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__BSMCoreData_message_type_support_handle = {
  0,
  &j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__BSMCoreData_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__BSMCoreData__get_type_hash,
  &j2735_v2x_msgs__msg__BSMCoreData__get_type_description,
  &j2735_v2x_msgs__msg__BSMCoreData__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, BSMCoreData)() {
  j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__BSMCoreData_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, PositionalAccuracy)();
  j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__BSMCoreData_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TransmissionState)();
  j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__BSMCoreData_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, AccelerationSet4Way)();
  j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__BSMCoreData_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, BrakeSystemStatus)();
  j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__BSMCoreData_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, VehicleSize)();
  if (!j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__BSMCoreData_message_type_support_handle.typesupport_identifier) {
    j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__BSMCoreData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &j2735_v2x_msgs__msg__BSMCoreData__rosidl_typesupport_introspection_c__BSMCoreData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
