// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from j2735_v2x_msgs:msg/TransmissionAndSpeed.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "j2735_v2x_msgs/msg/detail/transmission_and_speed__functions.h"
#include "j2735_v2x_msgs/msg/detail/transmission_and_speed__struct.hpp"
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

void TransmissionAndSpeed_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) j2735_v2x_msgs::msg::TransmissionAndSpeed(_init);
}

void TransmissionAndSpeed_fini_function(void * message_memory)
{
  auto typed_message = static_cast<j2735_v2x_msgs::msg::TransmissionAndSpeed *>(message_memory);
  typed_message->~TransmissionAndSpeed();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TransmissionAndSpeed_message_member_array[2] = {
  {
    "transmission",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<j2735_v2x_msgs::msg::TransmissionState>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::TransmissionAndSpeed, transmission),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<j2735_v2x_msgs::msg::Velocity>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::TransmissionAndSpeed, speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TransmissionAndSpeed_message_members = {
  "j2735_v2x_msgs::msg",  // message namespace
  "TransmissionAndSpeed",  // message name
  2,  // number of fields
  sizeof(j2735_v2x_msgs::msg::TransmissionAndSpeed),
  false,  // has_any_key_member_
  TransmissionAndSpeed_message_member_array,  // message members
  TransmissionAndSpeed_init_function,  // function to initialize message memory (memory has to be allocated)
  TransmissionAndSpeed_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TransmissionAndSpeed_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TransmissionAndSpeed_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__TransmissionAndSpeed__get_type_hash,
  &j2735_v2x_msgs__msg__TransmissionAndSpeed__get_type_description,
  &j2735_v2x_msgs__msg__TransmissionAndSpeed__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace j2735_v2x_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<j2735_v2x_msgs::msg::TransmissionAndSpeed>()
{
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::TransmissionAndSpeed_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, j2735_v2x_msgs, msg, TransmissionAndSpeed)() {
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::TransmissionAndSpeed_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
