// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/BSMPartIIExtension.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/bsm_part_ii_extension__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/bsm_part_ii_extension__functions.h"
#include "j2735_v2x_msgs/msg/detail/bsm_part_ii_extension__struct.h"


// Include directives for member types
// Member `vehicle_safety_extensions`
#include "j2735_v2x_msgs/msg/vehicle_safety_extensions.h"
// Member `vehicle_safety_extensions`
#include "j2735_v2x_msgs/msg/detail/vehicle_safety_extensions__rosidl_typesupport_introspection_c.h"
// Member `special_vehicle_extensions`
#include "j2735_v2x_msgs/msg/special_vehicle_extensions.h"
// Member `special_vehicle_extensions`
#include "j2735_v2x_msgs/msg/detail/special_vehicle_extensions__rosidl_typesupport_introspection_c.h"
// Member `supplemental_vehicle_extensions`
#include "j2735_v2x_msgs/msg/supplemental_vehicle_extensions.h"
// Member `supplemental_vehicle_extensions`
#include "j2735_v2x_msgs/msg/detail/supplemental_vehicle_extensions__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void j2735_v2x_msgs__msg__BSMPartIIExtension__rosidl_typesupport_introspection_c__BSMPartIIExtension_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__BSMPartIIExtension__init(message_memory);
}

void j2735_v2x_msgs__msg__BSMPartIIExtension__rosidl_typesupport_introspection_c__BSMPartIIExtension_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__BSMPartIIExtension__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember j2735_v2x_msgs__msg__BSMPartIIExtension__rosidl_typesupport_introspection_c__BSMPartIIExtension_message_member_array[4] = {
  {
    "part_ii_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BSMPartIIExtension, part_ii_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_safety_extensions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BSMPartIIExtension, vehicle_safety_extensions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "special_vehicle_extensions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BSMPartIIExtension, special_vehicle_extensions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "supplemental_vehicle_extensions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__BSMPartIIExtension, supplemental_vehicle_extensions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers j2735_v2x_msgs__msg__BSMPartIIExtension__rosidl_typesupport_introspection_c__BSMPartIIExtension_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "BSMPartIIExtension",  // message name
  4,  // number of fields
  sizeof(j2735_v2x_msgs__msg__BSMPartIIExtension),
  false,  // has_any_key_member_
  j2735_v2x_msgs__msg__BSMPartIIExtension__rosidl_typesupport_introspection_c__BSMPartIIExtension_message_member_array,  // message members
  j2735_v2x_msgs__msg__BSMPartIIExtension__rosidl_typesupport_introspection_c__BSMPartIIExtension_init_function,  // function to initialize message memory (memory has to be allocated)
  j2735_v2x_msgs__msg__BSMPartIIExtension__rosidl_typesupport_introspection_c__BSMPartIIExtension_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t j2735_v2x_msgs__msg__BSMPartIIExtension__rosidl_typesupport_introspection_c__BSMPartIIExtension_message_type_support_handle = {
  0,
  &j2735_v2x_msgs__msg__BSMPartIIExtension__rosidl_typesupport_introspection_c__BSMPartIIExtension_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__BSMPartIIExtension__get_type_hash,
  &j2735_v2x_msgs__msg__BSMPartIIExtension__get_type_description,
  &j2735_v2x_msgs__msg__BSMPartIIExtension__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, BSMPartIIExtension)() {
  j2735_v2x_msgs__msg__BSMPartIIExtension__rosidl_typesupport_introspection_c__BSMPartIIExtension_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, VehicleSafetyExtensions)();
  j2735_v2x_msgs__msg__BSMPartIIExtension__rosidl_typesupport_introspection_c__BSMPartIIExtension_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, SpecialVehicleExtensions)();
  j2735_v2x_msgs__msg__BSMPartIIExtension__rosidl_typesupport_introspection_c__BSMPartIIExtension_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, SupplementalVehicleExtensions)();
  if (!j2735_v2x_msgs__msg__BSMPartIIExtension__rosidl_typesupport_introspection_c__BSMPartIIExtension_message_type_support_handle.typesupport_identifier) {
    j2735_v2x_msgs__msg__BSMPartIIExtension__rosidl_typesupport_introspection_c__BSMPartIIExtension_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &j2735_v2x_msgs__msg__BSMPartIIExtension__rosidl_typesupport_introspection_c__BSMPartIIExtension_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
