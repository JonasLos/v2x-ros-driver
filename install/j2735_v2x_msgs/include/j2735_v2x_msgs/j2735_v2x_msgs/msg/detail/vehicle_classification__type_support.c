// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/VehicleClassification.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/vehicle_classification__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_classification__functions.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_classification__struct.h"


// Include directives for member types
// Member `key_type`
#include "j2735_v2x_msgs/msg/basic_vehicle_class.h"
// Member `key_type`
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__rosidl_typesupport_introspection_c.h"
// Member `role`
#include "j2735_v2x_msgs/msg/basic_vehicle_role.h"
// Member `role`
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_role__rosidl_typesupport_introspection_c.h"
// Member `hpms_type`
#include "j2735_v2x_msgs/msg/vehicle_type.h"
// Member `hpms_type`
#include "j2735_v2x_msgs/msg/detail/vehicle_type__rosidl_typesupport_introspection_c.h"
// Member `vehicle_type`
#include "j2735_v2x_msgs/msg/itis_vehicle_group_affected.h"
// Member `vehicle_type`
#include "j2735_v2x_msgs/msg/detail/itis_vehicle_group_affected__rosidl_typesupport_introspection_c.h"
// Member `response_equip`
#include "j2735_v2x_msgs/msg/itis_incident_response_equipment.h"
// Member `response_equip`
#include "j2735_v2x_msgs/msg/detail/itis_incident_response_equipment__rosidl_typesupport_introspection_c.h"
// Member `responder_type`
#include "j2735_v2x_msgs/msg/itis_responder_group_affected.h"
// Member `responder_type`
#include "j2735_v2x_msgs/msg/detail/itis_responder_group_affected__rosidl_typesupport_introspection_c.h"
// Member `fuel_type`
#include "j2735_v2x_msgs/msg/fuel_type.h"
// Member `fuel_type`
#include "j2735_v2x_msgs/msg/detail/fuel_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void j2735_v2x_msgs__msg__VehicleClassification__rosidl_typesupport_introspection_c__VehicleClassification_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__VehicleClassification__init(message_memory);
}

void j2735_v2x_msgs__msg__VehicleClassification__rosidl_typesupport_introspection_c__VehicleClassification_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__VehicleClassification__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember j2735_v2x_msgs__msg__VehicleClassification__rosidl_typesupport_introspection_c__VehicleClassification_message_member_array[9] = {
  {
    "presence_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__VehicleClassification, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "key_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__VehicleClassification, key_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "role",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__VehicleClassification, role),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "iso3833",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__VehicleClassification, iso3833),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hpms_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__VehicleClassification, hpms_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__VehicleClassification, vehicle_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "response_equip",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__VehicleClassification, response_equip),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "responder_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__VehicleClassification, responder_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fuel_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__VehicleClassification, fuel_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers j2735_v2x_msgs__msg__VehicleClassification__rosidl_typesupport_introspection_c__VehicleClassification_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "VehicleClassification",  // message name
  9,  // number of fields
  sizeof(j2735_v2x_msgs__msg__VehicleClassification),
  false,  // has_any_key_member_
  j2735_v2x_msgs__msg__VehicleClassification__rosidl_typesupport_introspection_c__VehicleClassification_message_member_array,  // message members
  j2735_v2x_msgs__msg__VehicleClassification__rosidl_typesupport_introspection_c__VehicleClassification_init_function,  // function to initialize message memory (memory has to be allocated)
  j2735_v2x_msgs__msg__VehicleClassification__rosidl_typesupport_introspection_c__VehicleClassification_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t j2735_v2x_msgs__msg__VehicleClassification__rosidl_typesupport_introspection_c__VehicleClassification_message_type_support_handle = {
  0,
  &j2735_v2x_msgs__msg__VehicleClassification__rosidl_typesupport_introspection_c__VehicleClassification_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__VehicleClassification__get_type_hash,
  &j2735_v2x_msgs__msg__VehicleClassification__get_type_description,
  &j2735_v2x_msgs__msg__VehicleClassification__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, VehicleClassification)() {
  j2735_v2x_msgs__msg__VehicleClassification__rosidl_typesupport_introspection_c__VehicleClassification_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, BasicVehicleClass)();
  j2735_v2x_msgs__msg__VehicleClassification__rosidl_typesupport_introspection_c__VehicleClassification_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, BasicVehicleRole)();
  j2735_v2x_msgs__msg__VehicleClassification__rosidl_typesupport_introspection_c__VehicleClassification_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, VehicleType)();
  j2735_v2x_msgs__msg__VehicleClassification__rosidl_typesupport_introspection_c__VehicleClassification_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, ITISVehicleGroupAffected)();
  j2735_v2x_msgs__msg__VehicleClassification__rosidl_typesupport_introspection_c__VehicleClassification_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, ITISIncidentResponseEquipment)();
  j2735_v2x_msgs__msg__VehicleClassification__rosidl_typesupport_introspection_c__VehicleClassification_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, ITISResponderGroupAffected)();
  j2735_v2x_msgs__msg__VehicleClassification__rosidl_typesupport_introspection_c__VehicleClassification_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, FuelType)();
  if (!j2735_v2x_msgs__msg__VehicleClassification__rosidl_typesupport_introspection_c__VehicleClassification_message_type_support_handle.typesupport_identifier) {
    j2735_v2x_msgs__msg__VehicleClassification__rosidl_typesupport_introspection_c__VehicleClassification_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &j2735_v2x_msgs__msg__VehicleClassification__rosidl_typesupport_introspection_c__VehicleClassification_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
