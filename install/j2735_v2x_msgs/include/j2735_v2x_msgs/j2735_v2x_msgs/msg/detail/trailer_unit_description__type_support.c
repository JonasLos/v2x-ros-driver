// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/TrailerUnitDescription.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/trailer_unit_description__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/trailer_unit_description__functions.h"
#include "j2735_v2x_msgs/msg/detail/trailer_unit_description__struct.h"


// Include directives for member types
// Member `is_dolly`
#include "j2735_v2x_msgs/msg/is_dolly.h"
// Member `is_dolly`
#include "j2735_v2x_msgs/msg/detail/is_dolly__rosidl_typesupport_introspection_c.h"
// Member `width`
#include "j2735_v2x_msgs/msg/vehicle_width.h"
// Member `width`
#include "j2735_v2x_msgs/msg/detail/vehicle_width__rosidl_typesupport_introspection_c.h"
// Member `length`
#include "j2735_v2x_msgs/msg/vehicle_length.h"
// Member `length`
#include "j2735_v2x_msgs/msg/detail/vehicle_length__rosidl_typesupport_introspection_c.h"
// Member `height`
// Member `center_of_gravity`
#include "j2735_v2x_msgs/msg/vehicle_height.h"
// Member `height`
// Member `center_of_gravity`
#include "j2735_v2x_msgs/msg/detail/vehicle_height__rosidl_typesupport_introspection_c.h"
// Member `mass`
#include "j2735_v2x_msgs/msg/trailer_mass.h"
// Member `mass`
#include "j2735_v2x_msgs/msg/detail/trailer_mass__rosidl_typesupport_introspection_c.h"
// Member `bumper_heights`
#include "j2735_v2x_msgs/msg/bumper_heights.h"
// Member `bumper_heights`
#include "j2735_v2x_msgs/msg/detail/bumper_heights__rosidl_typesupport_introspection_c.h"
// Member `front_pivot`
// Member `rear_pivot`
#include "j2735_v2x_msgs/msg/pivot_point_description.h"
// Member `front_pivot`
// Member `rear_pivot`
#include "j2735_v2x_msgs/msg/detail/pivot_point_description__rosidl_typesupport_introspection_c.h"
// Member `rear_wheel_offset`
#include "j2735_v2x_msgs/msg/offset_b12.h"
// Member `rear_wheel_offset`
#include "j2735_v2x_msgs/msg/detail/offset_b12__rosidl_typesupport_introspection_c.h"
// Member `position_offset`
#include "j2735_v2x_msgs/msg/node_xy24b.h"
// Member `position_offset`
#include "j2735_v2x_msgs/msg/detail/node_xy24b__rosidl_typesupport_introspection_c.h"
// Member `elevation_offset`
#include "j2735_v2x_msgs/msg/vert_offset_b07.h"
// Member `elevation_offset`
#include "j2735_v2x_msgs/msg/detail/vert_offset_b07__rosidl_typesupport_introspection_c.h"
// Member `crumb_data`
#include "j2735_v2x_msgs/msg/trailer_history_point_list.h"
// Member `crumb_data`
#include "j2735_v2x_msgs/msg/detail/trailer_history_point_list__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void j2735_v2x_msgs__msg__TrailerUnitDescription__rosidl_typesupport_introspection_c__TrailerUnitDescription_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__TrailerUnitDescription__init(message_memory);
}

void j2735_v2x_msgs__msg__TrailerUnitDescription__rosidl_typesupport_introspection_c__TrailerUnitDescription_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__TrailerUnitDescription__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember j2735_v2x_msgs__msg__TrailerUnitDescription__rosidl_typesupport_introspection_c__TrailerUnitDescription_message_member_array[14] = {
  {
    "presence_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrailerUnitDescription, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_dolly",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrailerUnitDescription, is_dolly),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrailerUnitDescription, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrailerUnitDescription, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrailerUnitDescription, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mass",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrailerUnitDescription, mass),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bumper_heights",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrailerUnitDescription, bumper_heights),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "center_of_gravity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrailerUnitDescription, center_of_gravity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "front_pivot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrailerUnitDescription, front_pivot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rear_pivot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrailerUnitDescription, rear_pivot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rear_wheel_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrailerUnitDescription, rear_wheel_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrailerUnitDescription, position_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elevation_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrailerUnitDescription, elevation_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "crumb_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrailerUnitDescription, crumb_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers j2735_v2x_msgs__msg__TrailerUnitDescription__rosidl_typesupport_introspection_c__TrailerUnitDescription_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "TrailerUnitDescription",  // message name
  14,  // number of fields
  sizeof(j2735_v2x_msgs__msg__TrailerUnitDescription),
  false,  // has_any_key_member_
  j2735_v2x_msgs__msg__TrailerUnitDescription__rosidl_typesupport_introspection_c__TrailerUnitDescription_message_member_array,  // message members
  j2735_v2x_msgs__msg__TrailerUnitDescription__rosidl_typesupport_introspection_c__TrailerUnitDescription_init_function,  // function to initialize message memory (memory has to be allocated)
  j2735_v2x_msgs__msg__TrailerUnitDescription__rosidl_typesupport_introspection_c__TrailerUnitDescription_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t j2735_v2x_msgs__msg__TrailerUnitDescription__rosidl_typesupport_introspection_c__TrailerUnitDescription_message_type_support_handle = {
  0,
  &j2735_v2x_msgs__msg__TrailerUnitDescription__rosidl_typesupport_introspection_c__TrailerUnitDescription_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__TrailerUnitDescription__get_type_hash,
  &j2735_v2x_msgs__msg__TrailerUnitDescription__get_type_description,
  &j2735_v2x_msgs__msg__TrailerUnitDescription__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TrailerUnitDescription)() {
  j2735_v2x_msgs__msg__TrailerUnitDescription__rosidl_typesupport_introspection_c__TrailerUnitDescription_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, IsDolly)();
  j2735_v2x_msgs__msg__TrailerUnitDescription__rosidl_typesupport_introspection_c__TrailerUnitDescription_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, VehicleWidth)();
  j2735_v2x_msgs__msg__TrailerUnitDescription__rosidl_typesupport_introspection_c__TrailerUnitDescription_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, VehicleLength)();
  j2735_v2x_msgs__msg__TrailerUnitDescription__rosidl_typesupport_introspection_c__TrailerUnitDescription_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, VehicleHeight)();
  j2735_v2x_msgs__msg__TrailerUnitDescription__rosidl_typesupport_introspection_c__TrailerUnitDescription_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TrailerMass)();
  j2735_v2x_msgs__msg__TrailerUnitDescription__rosidl_typesupport_introspection_c__TrailerUnitDescription_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, BumperHeights)();
  j2735_v2x_msgs__msg__TrailerUnitDescription__rosidl_typesupport_introspection_c__TrailerUnitDescription_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, VehicleHeight)();
  j2735_v2x_msgs__msg__TrailerUnitDescription__rosidl_typesupport_introspection_c__TrailerUnitDescription_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, PivotPointDescription)();
  j2735_v2x_msgs__msg__TrailerUnitDescription__rosidl_typesupport_introspection_c__TrailerUnitDescription_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, PivotPointDescription)();
  j2735_v2x_msgs__msg__TrailerUnitDescription__rosidl_typesupport_introspection_c__TrailerUnitDescription_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, OffsetB12)();
  j2735_v2x_msgs__msg__TrailerUnitDescription__rosidl_typesupport_introspection_c__TrailerUnitDescription_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, NodeXY24b)();
  j2735_v2x_msgs__msg__TrailerUnitDescription__rosidl_typesupport_introspection_c__TrailerUnitDescription_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, VertOffsetB07)();
  j2735_v2x_msgs__msg__TrailerUnitDescription__rosidl_typesupport_introspection_c__TrailerUnitDescription_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TrailerHistoryPointList)();
  if (!j2735_v2x_msgs__msg__TrailerUnitDescription__rosidl_typesupport_introspection_c__TrailerUnitDescription_message_type_support_handle.typesupport_identifier) {
    j2735_v2x_msgs__msg__TrailerUnitDescription__rosidl_typesupport_introspection_c__TrailerUnitDescription_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &j2735_v2x_msgs__msg__TrailerUnitDescription__rosidl_typesupport_introspection_c__TrailerUnitDescription_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
