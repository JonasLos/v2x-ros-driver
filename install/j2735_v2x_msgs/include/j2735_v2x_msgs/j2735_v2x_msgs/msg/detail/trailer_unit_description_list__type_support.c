// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/TrailerUnitDescriptionList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/trailer_unit_description_list__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/trailer_unit_description_list__functions.h"
#include "j2735_v2x_msgs/msg/detail/trailer_unit_description_list__struct.h"


// Include directives for member types
// Member `trailer_unit_descriptions`
#include "j2735_v2x_msgs/msg/trailer_unit_description.h"
// Member `trailer_unit_descriptions`
#include "j2735_v2x_msgs/msg/detail/trailer_unit_description__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__TrailerUnitDescriptionList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__TrailerUnitDescriptionList__init(message_memory);
}

void j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__TrailerUnitDescriptionList_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__TrailerUnitDescriptionList__fini(message_memory);
}

size_t j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__size_function__TrailerUnitDescriptionList__trailer_unit_descriptions(
  const void * untyped_member)
{
  const j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence * member =
    (const j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence *)(untyped_member);
  return member->size;
}

const void * j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__get_const_function__TrailerUnitDescriptionList__trailer_unit_descriptions(
  const void * untyped_member, size_t index)
{
  const j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence * member =
    (const j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence *)(untyped_member);
  return &member->data[index];
}

void * j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__get_function__TrailerUnitDescriptionList__trailer_unit_descriptions(
  void * untyped_member, size_t index)
{
  j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence * member =
    (j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence *)(untyped_member);
  return &member->data[index];
}

void j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__fetch_function__TrailerUnitDescriptionList__trailer_unit_descriptions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const j2735_v2x_msgs__msg__TrailerUnitDescription * item =
    ((const j2735_v2x_msgs__msg__TrailerUnitDescription *)
    j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__get_const_function__TrailerUnitDescriptionList__trailer_unit_descriptions(untyped_member, index));
  j2735_v2x_msgs__msg__TrailerUnitDescription * value =
    (j2735_v2x_msgs__msg__TrailerUnitDescription *)(untyped_value);
  *value = *item;
}

void j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__assign_function__TrailerUnitDescriptionList__trailer_unit_descriptions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  j2735_v2x_msgs__msg__TrailerUnitDescription * item =
    ((j2735_v2x_msgs__msg__TrailerUnitDescription *)
    j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__get_function__TrailerUnitDescriptionList__trailer_unit_descriptions(untyped_member, index));
  const j2735_v2x_msgs__msg__TrailerUnitDescription * value =
    (const j2735_v2x_msgs__msg__TrailerUnitDescription *)(untyped_value);
  *item = *value;
}

bool j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__resize_function__TrailerUnitDescriptionList__trailer_unit_descriptions(
  void * untyped_member, size_t size)
{
  j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence * member =
    (j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence *)(untyped_member);
  j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence__fini(member);
  return j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__TrailerUnitDescriptionList_message_member_array[1] = {
  {
    "trailer_unit_descriptions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrailerUnitDescriptionList, trailer_unit_descriptions),  // bytes offset in struct
    NULL,  // default value
    j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__size_function__TrailerUnitDescriptionList__trailer_unit_descriptions,  // size() function pointer
    j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__get_const_function__TrailerUnitDescriptionList__trailer_unit_descriptions,  // get_const(index) function pointer
    j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__get_function__TrailerUnitDescriptionList__trailer_unit_descriptions,  // get(index) function pointer
    j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__fetch_function__TrailerUnitDescriptionList__trailer_unit_descriptions,  // fetch(index, &value) function pointer
    j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__assign_function__TrailerUnitDescriptionList__trailer_unit_descriptions,  // assign(index, value) function pointer
    j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__resize_function__TrailerUnitDescriptionList__trailer_unit_descriptions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__TrailerUnitDescriptionList_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "TrailerUnitDescriptionList",  // message name
  1,  // number of fields
  sizeof(j2735_v2x_msgs__msg__TrailerUnitDescriptionList),
  false,  // has_any_key_member_
  j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__TrailerUnitDescriptionList_message_member_array,  // message members
  j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__TrailerUnitDescriptionList_init_function,  // function to initialize message memory (memory has to be allocated)
  j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__TrailerUnitDescriptionList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__TrailerUnitDescriptionList_message_type_support_handle = {
  0,
  &j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__TrailerUnitDescriptionList_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__TrailerUnitDescriptionList__get_type_hash,
  &j2735_v2x_msgs__msg__TrailerUnitDescriptionList__get_type_description,
  &j2735_v2x_msgs__msg__TrailerUnitDescriptionList__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TrailerUnitDescriptionList)() {
  j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__TrailerUnitDescriptionList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TrailerUnitDescription)();
  if (!j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__TrailerUnitDescriptionList_message_type_support_handle.typesupport_identifier) {
    j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__TrailerUnitDescriptionList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &j2735_v2x_msgs__msg__TrailerUnitDescriptionList__rosidl_typesupport_introspection_c__TrailerUnitDescriptionList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
