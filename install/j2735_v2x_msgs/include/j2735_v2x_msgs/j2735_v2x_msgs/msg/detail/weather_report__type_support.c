// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/WeatherReport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/weather_report__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/weather_report__functions.h"
#include "j2735_v2x_msgs/msg/detail/weather_report__struct.h"


// Include directives for member types
// Member `is_raining`
#include "j2735_v2x_msgs/msg/ntcip_ess_precip_yes_no.h"
// Member `is_raining`
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_yes_no__rosidl_typesupport_introspection_c.h"
// Member `rain_rate`
#include "j2735_v2x_msgs/msg/ntcip_ess_precip_rate.h"
// Member `rain_rate`
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_rate__rosidl_typesupport_introspection_c.h"
// Member `precip_situation`
#include "j2735_v2x_msgs/msg/ntcip_ess_precip_situation.h"
// Member `precip_situation`
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_situation__rosidl_typesupport_introspection_c.h"
// Member `solar_radiation`
#include "j2735_v2x_msgs/msg/ntcip_ess_solar_radiation.h"
// Member `solar_radiation`
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_solar_radiation__rosidl_typesupport_introspection_c.h"
// Member `friction`
#include "j2735_v2x_msgs/msg/ntcip_ess_mobile_friction.h"
// Member `friction`
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_mobile_friction__rosidl_typesupport_introspection_c.h"
// Member `road_friction`
#include "j2735_v2x_msgs/msg/coefficient_of_friction.h"
// Member `road_friction`
#include "j2735_v2x_msgs/msg/detail/coefficient_of_friction__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void j2735_v2x_msgs__msg__WeatherReport__rosidl_typesupport_introspection_c__WeatherReport_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__WeatherReport__init(message_memory);
}

void j2735_v2x_msgs__msg__WeatherReport__rosidl_typesupport_introspection_c__WeatherReport_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__WeatherReport__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember j2735_v2x_msgs__msg__WeatherReport__rosidl_typesupport_introspection_c__WeatherReport_message_member_array[7] = {
  {
    "presence_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__WeatherReport, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_raining",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__WeatherReport, is_raining),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rain_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__WeatherReport, rain_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "precip_situation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__WeatherReport, precip_situation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "solar_radiation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__WeatherReport, solar_radiation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "friction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__WeatherReport, friction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_friction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__WeatherReport, road_friction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers j2735_v2x_msgs__msg__WeatherReport__rosidl_typesupport_introspection_c__WeatherReport_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "WeatherReport",  // message name
  7,  // number of fields
  sizeof(j2735_v2x_msgs__msg__WeatherReport),
  false,  // has_any_key_member_
  j2735_v2x_msgs__msg__WeatherReport__rosidl_typesupport_introspection_c__WeatherReport_message_member_array,  // message members
  j2735_v2x_msgs__msg__WeatherReport__rosidl_typesupport_introspection_c__WeatherReport_init_function,  // function to initialize message memory (memory has to be allocated)
  j2735_v2x_msgs__msg__WeatherReport__rosidl_typesupport_introspection_c__WeatherReport_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t j2735_v2x_msgs__msg__WeatherReport__rosidl_typesupport_introspection_c__WeatherReport_message_type_support_handle = {
  0,
  &j2735_v2x_msgs__msg__WeatherReport__rosidl_typesupport_introspection_c__WeatherReport_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__WeatherReport__get_type_hash,
  &j2735_v2x_msgs__msg__WeatherReport__get_type_description,
  &j2735_v2x_msgs__msg__WeatherReport__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, WeatherReport)() {
  j2735_v2x_msgs__msg__WeatherReport__rosidl_typesupport_introspection_c__WeatherReport_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, NTCIPEssPrecipYesNo)();
  j2735_v2x_msgs__msg__WeatherReport__rosidl_typesupport_introspection_c__WeatherReport_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, NTCIPEssPrecipRate)();
  j2735_v2x_msgs__msg__WeatherReport__rosidl_typesupport_introspection_c__WeatherReport_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, NTCIPEssPrecipSituation)();
  j2735_v2x_msgs__msg__WeatherReport__rosidl_typesupport_introspection_c__WeatherReport_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, NTCIPEssSolarRadiation)();
  j2735_v2x_msgs__msg__WeatherReport__rosidl_typesupport_introspection_c__WeatherReport_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, NTCIPEssMobileFriction)();
  j2735_v2x_msgs__msg__WeatherReport__rosidl_typesupport_introspection_c__WeatherReport_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, CoefficientOfFriction)();
  if (!j2735_v2x_msgs__msg__WeatherReport__rosidl_typesupport_introspection_c__WeatherReport_message_type_support_handle.typesupport_identifier) {
    j2735_v2x_msgs__msg__WeatherReport__rosidl_typesupport_introspection_c__WeatherReport_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &j2735_v2x_msgs__msg__WeatherReport__rosidl_typesupport_introspection_c__WeatherReport_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
