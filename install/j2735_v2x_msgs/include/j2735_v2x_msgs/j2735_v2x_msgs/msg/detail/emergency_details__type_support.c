// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/EmergencyDetails.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/emergency_details__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/emergency_details__functions.h"
#include "j2735_v2x_msgs/msg/detail/emergency_details__struct.h"


// Include directives for member types
// Member `siren_use`
#include "j2735_v2x_msgs/msg/siren_in_use.h"
// Member `siren_use`
#include "j2735_v2x_msgs/msg/detail/siren_in_use__rosidl_typesupport_introspection_c.h"
// Member `lights_use`
#include "j2735_v2x_msgs/msg/lightbar_in_use.h"
// Member `lights_use`
#include "j2735_v2x_msgs/msg/detail/lightbar_in_use__rosidl_typesupport_introspection_c.h"
// Member `multi`
#include "j2735_v2x_msgs/msg/multi_vehicle_response.h"
// Member `multi`
#include "j2735_v2x_msgs/msg/detail/multi_vehicle_response__rosidl_typesupport_introspection_c.h"
// Member `events`
#include "j2735_v2x_msgs/msg/privileged_events.h"
// Member `events`
#include "j2735_v2x_msgs/msg/detail/privileged_events__rosidl_typesupport_introspection_c.h"
// Member `response_type`
#include "j2735_v2x_msgs/msg/response_type.h"
// Member `response_type`
#include "j2735_v2x_msgs/msg/detail/response_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void j2735_v2x_msgs__msg__EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__EmergencyDetails__init(message_memory);
}

void j2735_v2x_msgs__msg__EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__EmergencyDetails__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember j2735_v2x_msgs__msg__EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_message_member_array[7] = {
  {
    "presence_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__EmergencyDetails, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ssp_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__EmergencyDetails, ssp_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "siren_use",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__EmergencyDetails, siren_use),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lights_use",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__EmergencyDetails, lights_use),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "multi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__EmergencyDetails, multi),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "events",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__EmergencyDetails, events),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "response_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__EmergencyDetails, response_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers j2735_v2x_msgs__msg__EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "EmergencyDetails",  // message name
  7,  // number of fields
  sizeof(j2735_v2x_msgs__msg__EmergencyDetails),
  false,  // has_any_key_member_
  j2735_v2x_msgs__msg__EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_message_member_array,  // message members
  j2735_v2x_msgs__msg__EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_init_function,  // function to initialize message memory (memory has to be allocated)
  j2735_v2x_msgs__msg__EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t j2735_v2x_msgs__msg__EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_message_type_support_handle = {
  0,
  &j2735_v2x_msgs__msg__EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__EmergencyDetails__get_type_hash,
  &j2735_v2x_msgs__msg__EmergencyDetails__get_type_description,
  &j2735_v2x_msgs__msg__EmergencyDetails__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, EmergencyDetails)() {
  j2735_v2x_msgs__msg__EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, SirenInUse)();
  j2735_v2x_msgs__msg__EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, LightbarInUse)();
  j2735_v2x_msgs__msg__EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, MultiVehicleResponse)();
  j2735_v2x_msgs__msg__EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, PrivilegedEvents)();
  j2735_v2x_msgs__msg__EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, ResponseType)();
  if (!j2735_v2x_msgs__msg__EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_message_type_support_handle.typesupport_identifier) {
    j2735_v2x_msgs__msg__EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &j2735_v2x_msgs__msg__EmergencyDetails__rosidl_typesupport_introspection_c__EmergencyDetails_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
