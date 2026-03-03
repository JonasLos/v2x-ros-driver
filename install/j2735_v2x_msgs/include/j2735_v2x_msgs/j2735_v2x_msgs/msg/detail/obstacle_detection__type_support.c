// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/ObstacleDetection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/obstacle_detection__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/obstacle_detection__functions.h"
#include "j2735_v2x_msgs/msg/detail/obstacle_detection__struct.h"


// Include directives for member types
// Member `ob_dist`
#include "j2735_v2x_msgs/msg/obstacle_distance.h"
// Member `ob_dist`
#include "j2735_v2x_msgs/msg/detail/obstacle_distance__rosidl_typesupport_introspection_c.h"
// Member `ob_direct`
#include "j2735_v2x_msgs/msg/obstacle_direction.h"
// Member `ob_direct`
#include "j2735_v2x_msgs/msg/detail/obstacle_direction__rosidl_typesupport_introspection_c.h"
// Member `date_time`
#include "j2735_v2x_msgs/msg/d_date_time.h"
// Member `date_time`
#include "j2735_v2x_msgs/msg/detail/d_date_time__rosidl_typesupport_introspection_c.h"
// Member `description`
#include "j2735_v2x_msgs/msg/iti_scodes.h"
// Member `description`
#include "j2735_v2x_msgs/msg/detail/iti_scodes__rosidl_typesupport_introspection_c.h"
// Member `location_details`
#include "j2735_v2x_msgs/msg/itis_generic_locations.h"
// Member `location_details`
#include "j2735_v2x_msgs/msg/detail/itis_generic_locations__rosidl_typesupport_introspection_c.h"
// Member `vert_event`
#include "j2735_v2x_msgs/msg/vertical_acceleration_threshold.h"
// Member `vert_event`
#include "j2735_v2x_msgs/msg/detail/vertical_acceleration_threshold__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void j2735_v2x_msgs__msg__ObstacleDetection__rosidl_typesupport_introspection_c__ObstacleDetection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__ObstacleDetection__init(message_memory);
}

void j2735_v2x_msgs__msg__ObstacleDetection__rosidl_typesupport_introspection_c__ObstacleDetection_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__ObstacleDetection__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember j2735_v2x_msgs__msg__ObstacleDetection__rosidl_typesupport_introspection_c__ObstacleDetection_message_member_array[7] = {
  {
    "presence_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__ObstacleDetection, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ob_dist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__ObstacleDetection, ob_dist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ob_direct",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__ObstacleDetection, ob_direct),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "date_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__ObstacleDetection, date_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__ObstacleDetection, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "location_details",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__ObstacleDetection, location_details),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vert_event",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__ObstacleDetection, vert_event),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers j2735_v2x_msgs__msg__ObstacleDetection__rosidl_typesupport_introspection_c__ObstacleDetection_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "ObstacleDetection",  // message name
  7,  // number of fields
  sizeof(j2735_v2x_msgs__msg__ObstacleDetection),
  false,  // has_any_key_member_
  j2735_v2x_msgs__msg__ObstacleDetection__rosidl_typesupport_introspection_c__ObstacleDetection_message_member_array,  // message members
  j2735_v2x_msgs__msg__ObstacleDetection__rosidl_typesupport_introspection_c__ObstacleDetection_init_function,  // function to initialize message memory (memory has to be allocated)
  j2735_v2x_msgs__msg__ObstacleDetection__rosidl_typesupport_introspection_c__ObstacleDetection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t j2735_v2x_msgs__msg__ObstacleDetection__rosidl_typesupport_introspection_c__ObstacleDetection_message_type_support_handle = {
  0,
  &j2735_v2x_msgs__msg__ObstacleDetection__rosidl_typesupport_introspection_c__ObstacleDetection_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__ObstacleDetection__get_type_hash,
  &j2735_v2x_msgs__msg__ObstacleDetection__get_type_description,
  &j2735_v2x_msgs__msg__ObstacleDetection__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, ObstacleDetection)() {
  j2735_v2x_msgs__msg__ObstacleDetection__rosidl_typesupport_introspection_c__ObstacleDetection_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, ObstacleDistance)();
  j2735_v2x_msgs__msg__ObstacleDetection__rosidl_typesupport_introspection_c__ObstacleDetection_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, ObstacleDirection)();
  j2735_v2x_msgs__msg__ObstacleDetection__rosidl_typesupport_introspection_c__ObstacleDetection_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, DDateTime)();
  j2735_v2x_msgs__msg__ObstacleDetection__rosidl_typesupport_introspection_c__ObstacleDetection_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, ITIScodes)();
  j2735_v2x_msgs__msg__ObstacleDetection__rosidl_typesupport_introspection_c__ObstacleDetection_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, ITISGenericLocations)();
  j2735_v2x_msgs__msg__ObstacleDetection__rosidl_typesupport_introspection_c__ObstacleDetection_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, VerticalAccelerationThreshold)();
  if (!j2735_v2x_msgs__msg__ObstacleDetection__rosidl_typesupport_introspection_c__ObstacleDetection_message_type_support_handle.typesupport_identifier) {
    j2735_v2x_msgs__msg__ObstacleDetection__rosidl_typesupport_introspection_c__ObstacleDetection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &j2735_v2x_msgs__msg__ObstacleDetection__rosidl_typesupport_introspection_c__ObstacleDetection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
