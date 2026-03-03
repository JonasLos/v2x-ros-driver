// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/SupplementalVehicleExtensions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/supplemental_vehicle_extensions__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/supplemental_vehicle_extensions__functions.h"
#include "j2735_v2x_msgs/msg/detail/supplemental_vehicle_extensions__struct.h"


// Include directives for member types
// Member `classification`
#include "j2735_v2x_msgs/msg/basic_vehicle_class.h"
// Member `classification`
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__rosidl_typesupport_introspection_c.h"
// Member `class_details`
#include "j2735_v2x_msgs/msg/vehicle_classification.h"
// Member `class_details`
#include "j2735_v2x_msgs/msg/detail/vehicle_classification__rosidl_typesupport_introspection_c.h"
// Member `vehicle_data`
#include "j2735_v2x_msgs/msg/vehicle_data.h"
// Member `vehicle_data`
#include "j2735_v2x_msgs/msg/detail/vehicle_data__rosidl_typesupport_introspection_c.h"
// Member `weather_report`
#include "j2735_v2x_msgs/msg/weather_report.h"
// Member `weather_report`
#include "j2735_v2x_msgs/msg/detail/weather_report__rosidl_typesupport_introspection_c.h"
// Member `weather_probe`
#include "j2735_v2x_msgs/msg/weather_probe.h"
// Member `weather_probe`
#include "j2735_v2x_msgs/msg/detail/weather_probe__rosidl_typesupport_introspection_c.h"
// Member `obstacle`
#include "j2735_v2x_msgs/msg/obstacle_detection.h"
// Member `obstacle`
#include "j2735_v2x_msgs/msg/detail/obstacle_detection__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "j2735_v2x_msgs/msg/disabled_vehicle.h"
// Member `status`
#include "j2735_v2x_msgs/msg/detail/disabled_vehicle__rosidl_typesupport_introspection_c.h"
// Member `speed_profile`
#include "j2735_v2x_msgs/msg/gross_speed.h"
// Member `speed_profile`
#include "j2735_v2x_msgs/msg/detail/gross_speed__rosidl_typesupport_introspection_c.h"
// Member `the_rtcm`
#include "j2735_v2x_msgs/msg/rtcm_package.h"
// Member `the_rtcm`
#include "j2735_v2x_msgs/msg/detail/rtcm_package__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__SupplementalVehicleExtensions_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions__init(message_memory);
}

void j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__SupplementalVehicleExtensions_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions__fini(message_memory);
}

size_t j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__size_function__SupplementalVehicleExtensions__speed_profile(
  const void * untyped_member)
{
  const j2735_v2x_msgs__msg__GrossSpeed__Sequence * member =
    (const j2735_v2x_msgs__msg__GrossSpeed__Sequence *)(untyped_member);
  return member->size;
}

const void * j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__get_const_function__SupplementalVehicleExtensions__speed_profile(
  const void * untyped_member, size_t index)
{
  const j2735_v2x_msgs__msg__GrossSpeed__Sequence * member =
    (const j2735_v2x_msgs__msg__GrossSpeed__Sequence *)(untyped_member);
  return &member->data[index];
}

void * j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__get_function__SupplementalVehicleExtensions__speed_profile(
  void * untyped_member, size_t index)
{
  j2735_v2x_msgs__msg__GrossSpeed__Sequence * member =
    (j2735_v2x_msgs__msg__GrossSpeed__Sequence *)(untyped_member);
  return &member->data[index];
}

void j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__fetch_function__SupplementalVehicleExtensions__speed_profile(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const j2735_v2x_msgs__msg__GrossSpeed * item =
    ((const j2735_v2x_msgs__msg__GrossSpeed *)
    j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__get_const_function__SupplementalVehicleExtensions__speed_profile(untyped_member, index));
  j2735_v2x_msgs__msg__GrossSpeed * value =
    (j2735_v2x_msgs__msg__GrossSpeed *)(untyped_value);
  *value = *item;
}

void j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__assign_function__SupplementalVehicleExtensions__speed_profile(
  void * untyped_member, size_t index, const void * untyped_value)
{
  j2735_v2x_msgs__msg__GrossSpeed * item =
    ((j2735_v2x_msgs__msg__GrossSpeed *)
    j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__get_function__SupplementalVehicleExtensions__speed_profile(untyped_member, index));
  const j2735_v2x_msgs__msg__GrossSpeed * value =
    (const j2735_v2x_msgs__msg__GrossSpeed *)(untyped_value);
  *item = *value;
}

bool j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__resize_function__SupplementalVehicleExtensions__speed_profile(
  void * untyped_member, size_t size)
{
  j2735_v2x_msgs__msg__GrossSpeed__Sequence * member =
    (j2735_v2x_msgs__msg__GrossSpeed__Sequence *)(untyped_member);
  j2735_v2x_msgs__msg__GrossSpeed__Sequence__fini(member);
  return j2735_v2x_msgs__msg__GrossSpeed__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__SupplementalVehicleExtensions_message_member_array[10] = {
  {
    "presence_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__SupplementalVehicleExtensions, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "classification",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__SupplementalVehicleExtensions, classification),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "class_details",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__SupplementalVehicleExtensions, class_details),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__SupplementalVehicleExtensions, vehicle_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "weather_report",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__SupplementalVehicleExtensions, weather_report),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "weather_probe",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__SupplementalVehicleExtensions, weather_probe),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obstacle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__SupplementalVehicleExtensions, obstacle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__SupplementalVehicleExtensions, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_profile",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__SupplementalVehicleExtensions, speed_profile),  // bytes offset in struct
    NULL,  // default value
    j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__size_function__SupplementalVehicleExtensions__speed_profile,  // size() function pointer
    j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__get_const_function__SupplementalVehicleExtensions__speed_profile,  // get_const(index) function pointer
    j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__get_function__SupplementalVehicleExtensions__speed_profile,  // get(index) function pointer
    j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__fetch_function__SupplementalVehicleExtensions__speed_profile,  // fetch(index, &value) function pointer
    j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__assign_function__SupplementalVehicleExtensions__speed_profile,  // assign(index, value) function pointer
    j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__resize_function__SupplementalVehicleExtensions__speed_profile  // resize(index) function pointer
  },
  {
    "the_rtcm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__SupplementalVehicleExtensions, the_rtcm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__SupplementalVehicleExtensions_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "SupplementalVehicleExtensions",  // message name
  10,  // number of fields
  sizeof(j2735_v2x_msgs__msg__SupplementalVehicleExtensions),
  false,  // has_any_key_member_
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__SupplementalVehicleExtensions_message_member_array,  // message members
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__SupplementalVehicleExtensions_init_function,  // function to initialize message memory (memory has to be allocated)
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__SupplementalVehicleExtensions_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__SupplementalVehicleExtensions_message_type_support_handle = {
  0,
  &j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__SupplementalVehicleExtensions_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__SupplementalVehicleExtensions__get_type_hash,
  &j2735_v2x_msgs__msg__SupplementalVehicleExtensions__get_type_description,
  &j2735_v2x_msgs__msg__SupplementalVehicleExtensions__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, SupplementalVehicleExtensions)() {
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__SupplementalVehicleExtensions_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, BasicVehicleClass)();
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__SupplementalVehicleExtensions_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, VehicleClassification)();
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__SupplementalVehicleExtensions_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, VehicleData)();
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__SupplementalVehicleExtensions_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, WeatherReport)();
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__SupplementalVehicleExtensions_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, WeatherProbe)();
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__SupplementalVehicleExtensions_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, ObstacleDetection)();
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__SupplementalVehicleExtensions_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, DisabledVehicle)();
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__SupplementalVehicleExtensions_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, GrossSpeed)();
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__SupplementalVehicleExtensions_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, RTCMPackage)();
  if (!j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__SupplementalVehicleExtensions_message_type_support_handle.typesupport_identifier) {
    j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__SupplementalVehicleExtensions_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &j2735_v2x_msgs__msg__SupplementalVehicleExtensions__rosidl_typesupport_introspection_c__SupplementalVehicleExtensions_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
