// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from j2735_v2x_msgs:msg/SpecialVehicleExtensions.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "j2735_v2x_msgs/msg/detail/special_vehicle_extensions__functions.h"
#include "j2735_v2x_msgs/msg/detail/special_vehicle_extensions__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace j2735_v2x_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SpecialVehicleExtensions_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) j2735_v2x_msgs::msg::SpecialVehicleExtensions(_init);
}

void SpecialVehicleExtensions_fini_function(void * message_memory)
{
  auto typed_message = static_cast<j2735_v2x_msgs::msg::SpecialVehicleExtensions *>(message_memory);
  typed_message->~SpecialVehicleExtensions();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SpecialVehicleExtensions_message_member_array[4] = {
  {
    "presence_vector",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::SpecialVehicleExtensions, presence_vector),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vehicle_alerts",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<j2735_v2x_msgs::msg::EmergencyDetails>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::SpecialVehicleExtensions, vehicle_alerts),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "description",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<j2735_v2x_msgs::msg::EventDescription>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::SpecialVehicleExtensions, description),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "trailers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<j2735_v2x_msgs::msg::TrailerData>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::SpecialVehicleExtensions, trailers),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SpecialVehicleExtensions_message_members = {
  "j2735_v2x_msgs::msg",  // message namespace
  "SpecialVehicleExtensions",  // message name
  4,  // number of fields
  sizeof(j2735_v2x_msgs::msg::SpecialVehicleExtensions),
  false,  // has_any_key_member_
  SpecialVehicleExtensions_message_member_array,  // message members
  SpecialVehicleExtensions_init_function,  // function to initialize message memory (memory has to be allocated)
  SpecialVehicleExtensions_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SpecialVehicleExtensions_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SpecialVehicleExtensions_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__SpecialVehicleExtensions__get_type_hash,
  &j2735_v2x_msgs__msg__SpecialVehicleExtensions__get_type_description,
  &j2735_v2x_msgs__msg__SpecialVehicleExtensions__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace j2735_v2x_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<j2735_v2x_msgs::msg::SpecialVehicleExtensions>()
{
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::SpecialVehicleExtensions_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, j2735_v2x_msgs, msg, SpecialVehicleExtensions)() {
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::SpecialVehicleExtensions_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
