// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from j2735_v2x_msgs:msg/YawRateConfidence.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "j2735_v2x_msgs/msg/detail/yaw_rate_confidence__functions.h"
#include "j2735_v2x_msgs/msg/detail/yaw_rate_confidence__struct.hpp"
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

void YawRateConfidence_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) j2735_v2x_msgs::msg::YawRateConfidence(_init);
}

void YawRateConfidence_fini_function(void * message_memory)
{
  auto typed_message = static_cast<j2735_v2x_msgs::msg::YawRateConfidence *>(message_memory);
  typed_message->~YawRateConfidence();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember YawRateConfidence_message_member_array[1] = {
  {
    "yaw_rate_confidence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::YawRateConfidence, yaw_rate_confidence),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers YawRateConfidence_message_members = {
  "j2735_v2x_msgs::msg",  // message namespace
  "YawRateConfidence",  // message name
  1,  // number of fields
  sizeof(j2735_v2x_msgs::msg::YawRateConfidence),
  false,  // has_any_key_member_
  YawRateConfidence_message_member_array,  // message members
  YawRateConfidence_init_function,  // function to initialize message memory (memory has to be allocated)
  YawRateConfidence_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t YawRateConfidence_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &YawRateConfidence_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__YawRateConfidence__get_type_hash,
  &j2735_v2x_msgs__msg__YawRateConfidence__get_type_description,
  &j2735_v2x_msgs__msg__YawRateConfidence__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace j2735_v2x_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<j2735_v2x_msgs::msg::YawRateConfidence>()
{
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::YawRateConfidence_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, j2735_v2x_msgs, msg, YawRateConfidence)() {
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::YawRateConfidence_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
