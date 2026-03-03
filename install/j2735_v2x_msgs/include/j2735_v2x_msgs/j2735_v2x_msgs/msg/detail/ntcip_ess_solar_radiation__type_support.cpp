// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from j2735_v2x_msgs:msg/NTCIPEssSolarRadiation.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_solar_radiation__functions.h"
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_solar_radiation__struct.hpp"
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

void NTCIPEssSolarRadiation_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) j2735_v2x_msgs::msg::NTCIPEssSolarRadiation(_init);
}

void NTCIPEssSolarRadiation_fini_function(void * message_memory)
{
  auto typed_message = static_cast<j2735_v2x_msgs::msg::NTCIPEssSolarRadiation *>(message_memory);
  typed_message->~NTCIPEssSolarRadiation();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NTCIPEssSolarRadiation_message_member_array[1] = {
  {
    "ess_solar_radiation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::NTCIPEssSolarRadiation, ess_solar_radiation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NTCIPEssSolarRadiation_message_members = {
  "j2735_v2x_msgs::msg",  // message namespace
  "NTCIPEssSolarRadiation",  // message name
  1,  // number of fields
  sizeof(j2735_v2x_msgs::msg::NTCIPEssSolarRadiation),
  false,  // has_any_key_member_
  NTCIPEssSolarRadiation_message_member_array,  // message members
  NTCIPEssSolarRadiation_init_function,  // function to initialize message memory (memory has to be allocated)
  NTCIPEssSolarRadiation_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NTCIPEssSolarRadiation_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NTCIPEssSolarRadiation_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__get_type_hash,
  &j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__get_type_description,
  &j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace j2735_v2x_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<j2735_v2x_msgs::msg::NTCIPEssSolarRadiation>()
{
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::NTCIPEssSolarRadiation_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, j2735_v2x_msgs, msg, NTCIPEssSolarRadiation)() {
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::NTCIPEssSolarRadiation_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
