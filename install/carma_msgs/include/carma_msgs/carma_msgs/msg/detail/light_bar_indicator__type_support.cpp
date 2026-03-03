// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from carma_msgs:msg/LightBarIndicator.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "carma_msgs/msg/detail/light_bar_indicator__functions.h"
#include "carma_msgs/msg/detail/light_bar_indicator__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace carma_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LightBarIndicator_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) carma_msgs::msg::LightBarIndicator(_init);
}

void LightBarIndicator_fini_function(void * message_memory)
{
  auto typed_message = static_cast<carma_msgs::msg::LightBarIndicator *>(message_memory);
  typed_message->~LightBarIndicator();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LightBarIndicator_message_member_array[1] = {
  {
    "indicator",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs::msg::LightBarIndicator, indicator),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LightBarIndicator_message_members = {
  "carma_msgs::msg",  // message namespace
  "LightBarIndicator",  // message name
  1,  // number of fields
  sizeof(carma_msgs::msg::LightBarIndicator),
  false,  // has_any_key_member_
  LightBarIndicator_message_member_array,  // message members
  LightBarIndicator_init_function,  // function to initialize message memory (memory has to be allocated)
  LightBarIndicator_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LightBarIndicator_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LightBarIndicator_message_members,
  get_message_typesupport_handle_function,
  &carma_msgs__msg__LightBarIndicator__get_type_hash,
  &carma_msgs__msg__LightBarIndicator__get_type_description,
  &carma_msgs__msg__LightBarIndicator__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace carma_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_msgs::msg::LightBarIndicator>()
{
  return &::carma_msgs::msg::rosidl_typesupport_introspection_cpp::LightBarIndicator_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carma_msgs, msg, LightBarIndicator)() {
  return &::carma_msgs::msg::rosidl_typesupport_introspection_cpp::LightBarIndicator_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
