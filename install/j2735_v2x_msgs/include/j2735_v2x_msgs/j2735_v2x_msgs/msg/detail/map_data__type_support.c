// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/MapData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/map_data__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/map_data__functions.h"
#include "j2735_v2x_msgs/msg/detail/map_data__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `layer_type`
#include "j2735_v2x_msgs/msg/layer_type.h"
// Member `layer_type`
#include "j2735_v2x_msgs/msg/detail/layer_type__rosidl_typesupport_introspection_c.h"
// Member `intersections`
#include "j2735_v2x_msgs/msg/intersection_geometry.h"
// Member `intersections`
#include "j2735_v2x_msgs/msg/detail/intersection_geometry__rosidl_typesupport_introspection_c.h"
// Member `road_segments`
#include "j2735_v2x_msgs/msg/road_segment_list.h"
// Member `road_segments`
#include "j2735_v2x_msgs/msg/detail/road_segment_list__rosidl_typesupport_introspection_c.h"
// Member `data_parameters`
#include "j2735_v2x_msgs/msg/data_parameters.h"
// Member `data_parameters`
#include "j2735_v2x_msgs/msg/detail/data_parameters__rosidl_typesupport_introspection_c.h"
// Member `restriction_list`
#include "j2735_v2x_msgs/msg/restriction_class_list.h"
// Member `restriction_list`
#include "j2735_v2x_msgs/msg/detail/restriction_class_list__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__MapData__init(message_memory);
}

void j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__MapData__fini(message_memory);
}

size_t j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__size_function__MapData__intersections(
  const void * untyped_member)
{
  const j2735_v2x_msgs__msg__IntersectionGeometry__Sequence * member =
    (const j2735_v2x_msgs__msg__IntersectionGeometry__Sequence *)(untyped_member);
  return member->size;
}

const void * j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__get_const_function__MapData__intersections(
  const void * untyped_member, size_t index)
{
  const j2735_v2x_msgs__msg__IntersectionGeometry__Sequence * member =
    (const j2735_v2x_msgs__msg__IntersectionGeometry__Sequence *)(untyped_member);
  return &member->data[index];
}

void * j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__get_function__MapData__intersections(
  void * untyped_member, size_t index)
{
  j2735_v2x_msgs__msg__IntersectionGeometry__Sequence * member =
    (j2735_v2x_msgs__msg__IntersectionGeometry__Sequence *)(untyped_member);
  return &member->data[index];
}

void j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__fetch_function__MapData__intersections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const j2735_v2x_msgs__msg__IntersectionGeometry * item =
    ((const j2735_v2x_msgs__msg__IntersectionGeometry *)
    j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__get_const_function__MapData__intersections(untyped_member, index));
  j2735_v2x_msgs__msg__IntersectionGeometry * value =
    (j2735_v2x_msgs__msg__IntersectionGeometry *)(untyped_value);
  *value = *item;
}

void j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__assign_function__MapData__intersections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  j2735_v2x_msgs__msg__IntersectionGeometry * item =
    ((j2735_v2x_msgs__msg__IntersectionGeometry *)
    j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__get_function__MapData__intersections(untyped_member, index));
  const j2735_v2x_msgs__msg__IntersectionGeometry * value =
    (const j2735_v2x_msgs__msg__IntersectionGeometry *)(untyped_value);
  *item = *value;
}

bool j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__resize_function__MapData__intersections(
  void * untyped_member, size_t size)
{
  j2735_v2x_msgs__msg__IntersectionGeometry__Sequence * member =
    (j2735_v2x_msgs__msg__IntersectionGeometry__Sequence *)(untyped_member);
  j2735_v2x_msgs__msg__IntersectionGeometry__Sequence__fini(member);
  return j2735_v2x_msgs__msg__IntersectionGeometry__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_member_array[15] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__MapData, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__MapData, time_stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_stamp_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__MapData, time_stamp_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "msg_issue_revision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__MapData, msg_issue_revision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "layer_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__MapData, layer_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "layer_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__MapData, layer_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "layer_id_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__MapData, layer_id_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "intersections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__MapData, intersections),  // bytes offset in struct
    NULL,  // default value
    j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__size_function__MapData__intersections,  // size() function pointer
    j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__get_const_function__MapData__intersections,  // get_const(index) function pointer
    j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__get_function__MapData__intersections,  // get(index) function pointer
    j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__fetch_function__MapData__intersections,  // fetch(index, &value) function pointer
    j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__assign_function__MapData__intersections,  // assign(index, value) function pointer
    j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__resize_function__MapData__intersections  // resize(index) function pointer
  },
  {
    "intersections_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__MapData, intersections_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_segments",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__MapData, road_segments),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_segments_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__MapData, road_segments_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data_parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__MapData, data_parameters),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data_parameters_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__MapData, data_parameters_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "restriction_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__MapData, restriction_list),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "restriction_list_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__MapData, restriction_list_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "MapData",  // message name
  15,  // number of fields
  sizeof(j2735_v2x_msgs__msg__MapData),
  false,  // has_any_key_member_
  j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_member_array,  // message members
  j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_init_function,  // function to initialize message memory (memory has to be allocated)
  j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_type_support_handle = {
  0,
  &j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__MapData__get_type_hash,
  &j2735_v2x_msgs__msg__MapData__get_type_description,
  &j2735_v2x_msgs__msg__MapData__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, MapData)() {
  j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, LayerType)();
  j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, IntersectionGeometry)();
  j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, RoadSegmentList)();
  j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, DataParameters)();
  j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, RestrictionClassList)();
  if (!j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_type_support_handle.typesupport_identifier) {
    j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &j2735_v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
