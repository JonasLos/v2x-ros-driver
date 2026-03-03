// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/DDateTime.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/d_date_time__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/d_date_time__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_date_time__struct.h"


// Include directives for member types
// Member `year`
#include "j2735_v2x_msgs/msg/d_year.h"
// Member `year`
#include "j2735_v2x_msgs/msg/detail/d_year__rosidl_typesupport_introspection_c.h"
// Member `month`
#include "j2735_v2x_msgs/msg/d_month.h"
// Member `month`
#include "j2735_v2x_msgs/msg/detail/d_month__rosidl_typesupport_introspection_c.h"
// Member `day`
#include "j2735_v2x_msgs/msg/d_day.h"
// Member `day`
#include "j2735_v2x_msgs/msg/detail/d_day__rosidl_typesupport_introspection_c.h"
// Member `hour`
#include "j2735_v2x_msgs/msg/d_hour.h"
// Member `hour`
#include "j2735_v2x_msgs/msg/detail/d_hour__rosidl_typesupport_introspection_c.h"
// Member `minute`
#include "j2735_v2x_msgs/msg/d_minute.h"
// Member `minute`
#include "j2735_v2x_msgs/msg/detail/d_minute__rosidl_typesupport_introspection_c.h"
// Member `second`
#include "j2735_v2x_msgs/msg/d_second.h"
// Member `second`
#include "j2735_v2x_msgs/msg/detail/d_second__rosidl_typesupport_introspection_c.h"
// Member `offset`
#include "j2735_v2x_msgs/msg/d_offset.h"
// Member `offset`
#include "j2735_v2x_msgs/msg/detail/d_offset__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void j2735_v2x_msgs__msg__DDateTime__rosidl_typesupport_introspection_c__DDateTime_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__DDateTime__init(message_memory);
}

void j2735_v2x_msgs__msg__DDateTime__rosidl_typesupport_introspection_c__DDateTime_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__DDateTime__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember j2735_v2x_msgs__msg__DDateTime__rosidl_typesupport_introspection_c__DDateTime_message_member_array[8] = {
  {
    "presence_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__DDateTime, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "year",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__DDateTime, year),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "month",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__DDateTime, month),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "day",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__DDateTime, day),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hour",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__DDateTime, hour),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "minute",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__DDateTime, minute),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "second",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__DDateTime, second),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__DDateTime, offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers j2735_v2x_msgs__msg__DDateTime__rosidl_typesupport_introspection_c__DDateTime_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "DDateTime",  // message name
  8,  // number of fields
  sizeof(j2735_v2x_msgs__msg__DDateTime),
  false,  // has_any_key_member_
  j2735_v2x_msgs__msg__DDateTime__rosidl_typesupport_introspection_c__DDateTime_message_member_array,  // message members
  j2735_v2x_msgs__msg__DDateTime__rosidl_typesupport_introspection_c__DDateTime_init_function,  // function to initialize message memory (memory has to be allocated)
  j2735_v2x_msgs__msg__DDateTime__rosidl_typesupport_introspection_c__DDateTime_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t j2735_v2x_msgs__msg__DDateTime__rosidl_typesupport_introspection_c__DDateTime_message_type_support_handle = {
  0,
  &j2735_v2x_msgs__msg__DDateTime__rosidl_typesupport_introspection_c__DDateTime_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__DDateTime__get_type_hash,
  &j2735_v2x_msgs__msg__DDateTime__get_type_description,
  &j2735_v2x_msgs__msg__DDateTime__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, DDateTime)() {
  j2735_v2x_msgs__msg__DDateTime__rosidl_typesupport_introspection_c__DDateTime_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, DYear)();
  j2735_v2x_msgs__msg__DDateTime__rosidl_typesupport_introspection_c__DDateTime_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, DMonth)();
  j2735_v2x_msgs__msg__DDateTime__rosidl_typesupport_introspection_c__DDateTime_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, DDay)();
  j2735_v2x_msgs__msg__DDateTime__rosidl_typesupport_introspection_c__DDateTime_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, DHour)();
  j2735_v2x_msgs__msg__DDateTime__rosidl_typesupport_introspection_c__DDateTime_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, DMinute)();
  j2735_v2x_msgs__msg__DDateTime__rosidl_typesupport_introspection_c__DDateTime_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, DSecond)();
  j2735_v2x_msgs__msg__DDateTime__rosidl_typesupport_introspection_c__DDateTime_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, DOffset)();
  if (!j2735_v2x_msgs__msg__DDateTime__rosidl_typesupport_introspection_c__DDateTime_message_type_support_handle.typesupport_identifier) {
    j2735_v2x_msgs__msg__DDateTime__rosidl_typesupport_introspection_c__DDateTime_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &j2735_v2x_msgs__msg__DDateTime__rosidl_typesupport_introspection_c__DDateTime_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
