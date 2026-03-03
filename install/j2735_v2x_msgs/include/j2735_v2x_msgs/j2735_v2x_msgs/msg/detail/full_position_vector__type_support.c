// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/FullPositionVector.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/full_position_vector__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/full_position_vector__functions.h"
#include "j2735_v2x_msgs/msg/detail/full_position_vector__struct.h"


// Include directives for member types
// Member `utc_time`
#include "j2735_v2x_msgs/msg/d_date_time.h"
// Member `utc_time`
#include "j2735_v2x_msgs/msg/detail/d_date_time__rosidl_typesupport_introspection_c.h"
// Member `lon`
#include "j2735_v2x_msgs/msg/longitude.h"
// Member `lon`
#include "j2735_v2x_msgs/msg/detail/longitude__rosidl_typesupport_introspection_c.h"
// Member `lat`
#include "j2735_v2x_msgs/msg/latitude.h"
// Member `lat`
#include "j2735_v2x_msgs/msg/detail/latitude__rosidl_typesupport_introspection_c.h"
// Member `elevation`
#include "j2735_v2x_msgs/msg/elevation.h"
// Member `elevation`
#include "j2735_v2x_msgs/msg/detail/elevation__rosidl_typesupport_introspection_c.h"
// Member `heading`
#include "j2735_v2x_msgs/msg/heading.h"
// Member `heading`
#include "j2735_v2x_msgs/msg/detail/heading__rosidl_typesupport_introspection_c.h"
// Member `speed`
#include "j2735_v2x_msgs/msg/transmission_and_speed.h"
// Member `speed`
#include "j2735_v2x_msgs/msg/detail/transmission_and_speed__rosidl_typesupport_introspection_c.h"
// Member `pos_accuracy`
#include "j2735_v2x_msgs/msg/positional_accuracy.h"
// Member `pos_accuracy`
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__rosidl_typesupport_introspection_c.h"
// Member `time_confidence`
#include "j2735_v2x_msgs/msg/time_confidence.h"
// Member `time_confidence`
#include "j2735_v2x_msgs/msg/detail/time_confidence__rosidl_typesupport_introspection_c.h"
// Member `pos_confidence`
#include "j2735_v2x_msgs/msg/position_confidence_set.h"
// Member `pos_confidence`
#include "j2735_v2x_msgs/msg/detail/position_confidence_set__rosidl_typesupport_introspection_c.h"
// Member `speed_confidence`
#include "j2735_v2x_msgs/msg/speedand_headingand_throttle_confidence.h"
// Member `speed_confidence`
#include "j2735_v2x_msgs/msg/detail/speedand_headingand_throttle_confidence__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void j2735_v2x_msgs__msg__FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__FullPositionVector__init(message_memory);
}

void j2735_v2x_msgs__msg__FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__FullPositionVector__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember j2735_v2x_msgs__msg__FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_member_array[11] = {
  {
    "presence_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__FullPositionVector, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "utc_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__FullPositionVector, utc_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__FullPositionVector, lon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__FullPositionVector, lat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elevation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__FullPositionVector, elevation),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__FullPositionVector, heading),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__FullPositionVector, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_accuracy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__FullPositionVector, pos_accuracy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__FullPositionVector, time_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__FullPositionVector, pos_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__FullPositionVector, speed_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers j2735_v2x_msgs__msg__FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "FullPositionVector",  // message name
  11,  // number of fields
  sizeof(j2735_v2x_msgs__msg__FullPositionVector),
  false,  // has_any_key_member_
  j2735_v2x_msgs__msg__FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_member_array,  // message members
  j2735_v2x_msgs__msg__FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_init_function,  // function to initialize message memory (memory has to be allocated)
  j2735_v2x_msgs__msg__FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t j2735_v2x_msgs__msg__FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_type_support_handle = {
  0,
  &j2735_v2x_msgs__msg__FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__FullPositionVector__get_type_hash,
  &j2735_v2x_msgs__msg__FullPositionVector__get_type_description,
  &j2735_v2x_msgs__msg__FullPositionVector__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, FullPositionVector)() {
  j2735_v2x_msgs__msg__FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, DDateTime)();
  j2735_v2x_msgs__msg__FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, Longitude)();
  j2735_v2x_msgs__msg__FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, Latitude)();
  j2735_v2x_msgs__msg__FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, Elevation)();
  j2735_v2x_msgs__msg__FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, Heading)();
  j2735_v2x_msgs__msg__FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TransmissionAndSpeed)();
  j2735_v2x_msgs__msg__FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, PositionalAccuracy)();
  j2735_v2x_msgs__msg__FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TimeConfidence)();
  j2735_v2x_msgs__msg__FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, PositionConfidenceSet)();
  j2735_v2x_msgs__msg__FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, SpeedandHeadingandThrottleConfidence)();
  if (!j2735_v2x_msgs__msg__FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_type_support_handle.typesupport_identifier) {
    j2735_v2x_msgs__msg__FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &j2735_v2x_msgs__msg__FullPositionVector__rosidl_typesupport_introspection_c__FullPositionVector_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
