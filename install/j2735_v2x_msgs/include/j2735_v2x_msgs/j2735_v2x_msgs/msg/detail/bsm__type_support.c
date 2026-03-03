// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/BSM.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/bsm__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/bsm__functions.h"
#include "j2735_v2x_msgs/msg/detail/bsm__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `core_data`
#include "j2735_v2x_msgs/msg/bsm_core_data.h"
// Member `core_data`
#include "j2735_v2x_msgs/msg/detail/bsm_core_data__rosidl_typesupport_introspection_c.h"
// Member `part_ii`
#include "j2735_v2x_msgs/msg/bsm_part_ii_extension.h"
// Member `part_ii`
#include "j2735_v2x_msgs/msg/detail/bsm_part_ii_extension__rosidl_typesupport_introspection_c.h"
// Member `regional`
#include "j2735_v2x_msgs/msg/bsm_regional_extension.h"
// Member `regional`
#include "j2735_v2x_msgs/msg/detail/bsm_regional_extension__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__BSM_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__BSM__init(message_memory);
}

void j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__BSM_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__BSM__fini(message_memory);
}

size_t j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__size_function__BSM__part_ii(
  const void * untyped_member)
{
  const j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence * member =
    (const j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence *)(untyped_member);
  return member->size;
}

const void * j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__get_const_function__BSM__part_ii(
  const void * untyped_member, size_t index)
{
  const j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence * member =
    (const j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence *)(untyped_member);
  return &member->data[index];
}

void * j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__get_function__BSM__part_ii(
  void * untyped_member, size_t index)
{
  j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence * member =
    (j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence *)(untyped_member);
  return &member->data[index];
}

void j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__fetch_function__BSM__part_ii(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const j2735_v2x_msgs__msg__BSMPartIIExtension * item =
    ((const j2735_v2x_msgs__msg__BSMPartIIExtension *)
    j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__get_const_function__BSM__part_ii(untyped_member, index));
  j2735_v2x_msgs__msg__BSMPartIIExtension * value =
    (j2735_v2x_msgs__msg__BSMPartIIExtension *)(untyped_value);
  *value = *item;
}

void j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__assign_function__BSM__part_ii(
  void * untyped_member, size_t index, const void * untyped_value)
{
  j2735_v2x_msgs__msg__BSMPartIIExtension * item =
    ((j2735_v2x_msgs__msg__BSMPartIIExtension *)
    j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__get_function__BSM__part_ii(untyped_member, index));
  const j2735_v2x_msgs__msg__BSMPartIIExtension * value =
    (const j2735_v2x_msgs__msg__BSMPartIIExtension *)(untyped_value);
  *item = *value;
}

bool j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__resize_function__BSM__part_ii(
  void * untyped_member, size_t size)
{
  j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence * member =
    (j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence *)(untyped_member);
  j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence__fini(member);
  return j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence__init(member, size);
}

size_t j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__size_function__BSM__regional(
  const void * untyped_member)
{
  const j2735_v2x_msgs__msg__BSMRegionalExtension__Sequence * member =
    (const j2735_v2x_msgs__msg__BSMRegionalExtension__Sequence *)(untyped_member);
  return member->size;
}

const void * j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__get_const_function__BSM__regional(
  const void * untyped_member, size_t index)
{
  const j2735_v2x_msgs__msg__BSMRegionalExtension__Sequence * member =
    (const j2735_v2x_msgs__msg__BSMRegionalExtension__Sequence *)(untyped_member);
  return &member->data[index];
}

void * j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__get_function__BSM__regional(
  void * untyped_member, size_t index)
{
  j2735_v2x_msgs__msg__BSMRegionalExtension__Sequence * member =
    (j2735_v2x_msgs__msg__BSMRegionalExtension__Sequence *)(untyped_member);
  return &member->data[index];
}

void j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__fetch_function__BSM__regional(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const j2735_v2x_msgs__msg__BSMRegionalExtension * item =
    ((const j2735_v2x_msgs__msg__BSMRegionalExtension *)
    j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__get_const_function__BSM__regional(untyped_member, index));
  j2735_v2x_msgs__msg__BSMRegionalExtension * value =
    (j2735_v2x_msgs__msg__BSMRegionalExtension *)(untyped_value);
  *value = *item;
}

void j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__assign_function__BSM__regional(
  void * untyped_member, size_t index, const void * untyped_value)
{
  j2735_v2x_msgs__msg__BSMRegionalExtension * item =
    ((j2735_v2x_msgs__msg__BSMRegionalExtension *)
    j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__get_function__BSM__regional(untyped_member, index));
  const j2735_v2x_msgs__msg__BSMRegionalExtension * value =
    (const j2735_v2x_msgs__msg__BSMRegionalExtension *)(untyped_value);
  *item = *value;
}

bool j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__resize_function__BSM__regional(
  void * untyped_member, size_t size)
{
  j2735_v2x_msgs__msg__BSMRegionalExtension__Sequence * member =
    (j2735_v2x_msgs__msg__BSMRegionalExtension__Sequence *)(untyped_member);
  j2735_v2x_msgs__msg__BSMRegionalExtension__Sequence__fini(member);
  return j2735_v2x_msgs__msg__BSMRegionalExtension__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__BSM_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BSM, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "core_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BSM, core_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "presence_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BSM, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "part_ii",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BSM, part_ii),  // bytes offset in struct
    NULL,  // default value
    j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__size_function__BSM__part_ii,  // size() function pointer
    j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__get_const_function__BSM__part_ii,  // get_const(index) function pointer
    j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__get_function__BSM__part_ii,  // get(index) function pointer
    j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__fetch_function__BSM__part_ii,  // fetch(index, &value) function pointer
    j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__assign_function__BSM__part_ii,  // assign(index, value) function pointer
    j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__resize_function__BSM__part_ii  // resize(index) function pointer
  },
  {
    "regional",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BSM, regional),  // bytes offset in struct
    NULL,  // default value
    j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__size_function__BSM__regional,  // size() function pointer
    j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__get_const_function__BSM__regional,  // get_const(index) function pointer
    j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__get_function__BSM__regional,  // get(index) function pointer
    j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__fetch_function__BSM__regional,  // fetch(index, &value) function pointer
    j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__assign_function__BSM__regional,  // assign(index, value) function pointer
    j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__resize_function__BSM__regional  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__BSM_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "BSM",  // message name
  5,  // number of fields
  sizeof(j2735_v2x_msgs__msg__BSM),
  false,  // has_any_key_member_
  j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__BSM_message_member_array,  // message members
  j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__BSM_init_function,  // function to initialize message memory (memory has to be allocated)
  j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__BSM_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__BSM_message_type_support_handle = {
  0,
  &j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__BSM_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__BSM__get_type_hash,
  &j2735_v2x_msgs__msg__BSM__get_type_description,
  &j2735_v2x_msgs__msg__BSM__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, BSM)() {
  j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__BSM_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__BSM_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, BSMCoreData)();
  j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__BSM_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, BSMPartIIExtension)();
  j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__BSM_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, BSMRegionalExtension)();
  if (!j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__BSM_message_type_support_handle.typesupport_identifier) {
    j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__BSM_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &j2735_v2x_msgs__msg__BSM__rosidl_typesupport_introspection_c__BSM_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
