// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/TrafficControlPackage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/traffic_control_package__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_package__functions.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_package__struct.h"


// Include directives for member types
// Member `label`
#include "rosidl_runtime_c/string_functions.h"
// Member `tcids`
#include "j2735_v2x_msgs/msg/id128b.h"
// Member `tcids`
#include "j2735_v2x_msgs/msg/detail/id128b__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__TrafficControlPackage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__TrafficControlPackage__init(message_memory);
}

void j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__TrafficControlPackage_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__TrafficControlPackage__fini(message_memory);
}

size_t j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__size_function__TrafficControlPackage__tcids(
  const void * untyped_member)
{
  const j2735_v2x_msgs__msg__Id128b__Sequence * member =
    (const j2735_v2x_msgs__msg__Id128b__Sequence *)(untyped_member);
  return member->size;
}

const void * j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__get_const_function__TrafficControlPackage__tcids(
  const void * untyped_member, size_t index)
{
  const j2735_v2x_msgs__msg__Id128b__Sequence * member =
    (const j2735_v2x_msgs__msg__Id128b__Sequence *)(untyped_member);
  return &member->data[index];
}

void * j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__get_function__TrafficControlPackage__tcids(
  void * untyped_member, size_t index)
{
  j2735_v2x_msgs__msg__Id128b__Sequence * member =
    (j2735_v2x_msgs__msg__Id128b__Sequence *)(untyped_member);
  return &member->data[index];
}

void j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__fetch_function__TrafficControlPackage__tcids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const j2735_v2x_msgs__msg__Id128b * item =
    ((const j2735_v2x_msgs__msg__Id128b *)
    j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__get_const_function__TrafficControlPackage__tcids(untyped_member, index));
  j2735_v2x_msgs__msg__Id128b * value =
    (j2735_v2x_msgs__msg__Id128b *)(untyped_value);
  *value = *item;
}

void j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__assign_function__TrafficControlPackage__tcids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  j2735_v2x_msgs__msg__Id128b * item =
    ((j2735_v2x_msgs__msg__Id128b *)
    j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__get_function__TrafficControlPackage__tcids(untyped_member, index));
  const j2735_v2x_msgs__msg__Id128b * value =
    (const j2735_v2x_msgs__msg__Id128b *)(untyped_value);
  *item = *value;
}

bool j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__resize_function__TrafficControlPackage__tcids(
  void * untyped_member, size_t size)
{
  j2735_v2x_msgs__msg__Id128b__Sequence * member =
    (j2735_v2x_msgs__msg__Id128b__Sequence *)(untyped_member);
  j2735_v2x_msgs__msg__Id128b__Sequence__fini(member);
  return j2735_v2x_msgs__msg__Id128b__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__TrafficControlPackage_message_member_array[3] = {
  {
    "label",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlPackage, label),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "label_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlPackage, label_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tcids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlPackage, tcids),  // bytes offset in struct
    NULL,  // default value
    j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__size_function__TrafficControlPackage__tcids,  // size() function pointer
    j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__get_const_function__TrafficControlPackage__tcids,  // get_const(index) function pointer
    j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__get_function__TrafficControlPackage__tcids,  // get(index) function pointer
    j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__fetch_function__TrafficControlPackage__tcids,  // fetch(index, &value) function pointer
    j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__assign_function__TrafficControlPackage__tcids,  // assign(index, value) function pointer
    j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__resize_function__TrafficControlPackage__tcids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__TrafficControlPackage_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "TrafficControlPackage",  // message name
  3,  // number of fields
  sizeof(j2735_v2x_msgs__msg__TrafficControlPackage),
  false,  // has_any_key_member_
  j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__TrafficControlPackage_message_member_array,  // message members
  j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__TrafficControlPackage_init_function,  // function to initialize message memory (memory has to be allocated)
  j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__TrafficControlPackage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__TrafficControlPackage_message_type_support_handle = {
  0,
  &j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__TrafficControlPackage_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__TrafficControlPackage__get_type_hash,
  &j2735_v2x_msgs__msg__TrafficControlPackage__get_type_description,
  &j2735_v2x_msgs__msg__TrafficControlPackage__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TrafficControlPackage)() {
  j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__TrafficControlPackage_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, Id128b)();
  if (!j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__TrafficControlPackage_message_type_support_handle.typesupport_identifier) {
    j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__TrafficControlPackage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &j2735_v2x_msgs__msg__TrafficControlPackage__rosidl_typesupport_introspection_c__TrafficControlPackage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
