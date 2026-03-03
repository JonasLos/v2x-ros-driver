// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/LaneTypeAttributes.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/lane_type_attributes__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/lane_type_attributes__functions.h"
#include "j2735_v2x_msgs/msg/detail/lane_type_attributes__struct.h"


// Include directives for member types
// Member `vehicle`
#include "j2735_v2x_msgs/msg/lane_attributes_vehicle.h"
// Member `vehicle`
#include "j2735_v2x_msgs/msg/detail/lane_attributes_vehicle__rosidl_typesupport_introspection_c.h"
// Member `crosswalk`
#include "j2735_v2x_msgs/msg/lane_attributes_crosswalk.h"
// Member `crosswalk`
#include "j2735_v2x_msgs/msg/detail/lane_attributes_crosswalk__rosidl_typesupport_introspection_c.h"
// Member `bike_lane`
#include "j2735_v2x_msgs/msg/lane_attributes_bike.h"
// Member `bike_lane`
#include "j2735_v2x_msgs/msg/detail/lane_attributes_bike__rosidl_typesupport_introspection_c.h"
// Member `sidewalk`
#include "j2735_v2x_msgs/msg/lane_attributes_sidewalk.h"
// Member `sidewalk`
#include "j2735_v2x_msgs/msg/detail/lane_attributes_sidewalk__rosidl_typesupport_introspection_c.h"
// Member `median`
#include "j2735_v2x_msgs/msg/lane_attributes_barrier.h"
// Member `median`
#include "j2735_v2x_msgs/msg/detail/lane_attributes_barrier__rosidl_typesupport_introspection_c.h"
// Member `striping`
#include "j2735_v2x_msgs/msg/lane_attributes_striping.h"
// Member `striping`
#include "j2735_v2x_msgs/msg/detail/lane_attributes_striping__rosidl_typesupport_introspection_c.h"
// Member `tracked_vehicle`
#include "j2735_v2x_msgs/msg/lane_attributes_tracked_vehicle.h"
// Member `tracked_vehicle`
#include "j2735_v2x_msgs/msg/detail/lane_attributes_tracked_vehicle__rosidl_typesupport_introspection_c.h"
// Member `parking`
#include "j2735_v2x_msgs/msg/lane_attributes_parking.h"
// Member `parking`
#include "j2735_v2x_msgs/msg/detail/lane_attributes_parking__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void j2735_v2x_msgs__msg__LaneTypeAttributes__rosidl_typesupport_introspection_c__LaneTypeAttributes_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__LaneTypeAttributes__init(message_memory);
}

void j2735_v2x_msgs__msg__LaneTypeAttributes__rosidl_typesupport_introspection_c__LaneTypeAttributes_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__LaneTypeAttributes__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember j2735_v2x_msgs__msg__LaneTypeAttributes__rosidl_typesupport_introspection_c__LaneTypeAttributes_message_member_array[9] = {
  {
    "choice",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__LaneTypeAttributes, choice),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__LaneTypeAttributes, vehicle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "crosswalk",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__LaneTypeAttributes, crosswalk),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bike_lane",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__LaneTypeAttributes, bike_lane),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sidewalk",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__LaneTypeAttributes, sidewalk),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "median",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__LaneTypeAttributes, median),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "striping",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__LaneTypeAttributes, striping),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tracked_vehicle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__LaneTypeAttributes, tracked_vehicle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parking",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__LaneTypeAttributes, parking),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers j2735_v2x_msgs__msg__LaneTypeAttributes__rosidl_typesupport_introspection_c__LaneTypeAttributes_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "LaneTypeAttributes",  // message name
  9,  // number of fields
  sizeof(j2735_v2x_msgs__msg__LaneTypeAttributes),
  false,  // has_any_key_member_
  j2735_v2x_msgs__msg__LaneTypeAttributes__rosidl_typesupport_introspection_c__LaneTypeAttributes_message_member_array,  // message members
  j2735_v2x_msgs__msg__LaneTypeAttributes__rosidl_typesupport_introspection_c__LaneTypeAttributes_init_function,  // function to initialize message memory (memory has to be allocated)
  j2735_v2x_msgs__msg__LaneTypeAttributes__rosidl_typesupport_introspection_c__LaneTypeAttributes_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t j2735_v2x_msgs__msg__LaneTypeAttributes__rosidl_typesupport_introspection_c__LaneTypeAttributes_message_type_support_handle = {
  0,
  &j2735_v2x_msgs__msg__LaneTypeAttributes__rosidl_typesupport_introspection_c__LaneTypeAttributes_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__LaneTypeAttributes__get_type_hash,
  &j2735_v2x_msgs__msg__LaneTypeAttributes__get_type_description,
  &j2735_v2x_msgs__msg__LaneTypeAttributes__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, LaneTypeAttributes)() {
  j2735_v2x_msgs__msg__LaneTypeAttributes__rosidl_typesupport_introspection_c__LaneTypeAttributes_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, LaneAttributesVehicle)();
  j2735_v2x_msgs__msg__LaneTypeAttributes__rosidl_typesupport_introspection_c__LaneTypeAttributes_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, LaneAttributesCrosswalk)();
  j2735_v2x_msgs__msg__LaneTypeAttributes__rosidl_typesupport_introspection_c__LaneTypeAttributes_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, LaneAttributesBike)();
  j2735_v2x_msgs__msg__LaneTypeAttributes__rosidl_typesupport_introspection_c__LaneTypeAttributes_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, LaneAttributesSidewalk)();
  j2735_v2x_msgs__msg__LaneTypeAttributes__rosidl_typesupport_introspection_c__LaneTypeAttributes_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, LaneAttributesBarrier)();
  j2735_v2x_msgs__msg__LaneTypeAttributes__rosidl_typesupport_introspection_c__LaneTypeAttributes_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, LaneAttributesStriping)();
  j2735_v2x_msgs__msg__LaneTypeAttributes__rosidl_typesupport_introspection_c__LaneTypeAttributes_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, LaneAttributesTrackedVehicle)();
  j2735_v2x_msgs__msg__LaneTypeAttributes__rosidl_typesupport_introspection_c__LaneTypeAttributes_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, LaneAttributesParking)();
  if (!j2735_v2x_msgs__msg__LaneTypeAttributes__rosidl_typesupport_introspection_c__LaneTypeAttributes_message_type_support_handle.typesupport_identifier) {
    j2735_v2x_msgs__msg__LaneTypeAttributes__rosidl_typesupport_introspection_c__LaneTypeAttributes_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &j2735_v2x_msgs__msg__LaneTypeAttributes__rosidl_typesupport_introspection_c__LaneTypeAttributes_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
