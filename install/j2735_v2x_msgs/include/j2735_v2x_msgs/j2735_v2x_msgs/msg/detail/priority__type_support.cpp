// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from j2735_v2x_msgs:msg/Priority.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "j2735_v2x_msgs/msg/detail/priority__functions.h"
#include "j2735_v2x_msgs/msg/detail/priority__struct.hpp"
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

void Priority_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) j2735_v2x_msgs::msg::Priority(_init);
}

void Priority_fini_function(void * message_memory)
{
  auto typed_message = static_cast<j2735_v2x_msgs::msg::Priority *>(message_memory);
  typed_message->~Priority();
}

size_t size_function__Priority__priority(const void * untyped_member)
{
  (void)untyped_member;
  return 1;
}

const void * get_const_function__Priority__priority(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 1> *>(untyped_member);
  return &member[index];
}

void * get_function__Priority__priority(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 1> *>(untyped_member);
  return &member[index];
}

void fetch_function__Priority__priority(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__Priority__priority(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__Priority__priority(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__Priority__priority(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Priority_message_member_array[1] = {
  {
    "priority",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::Priority, priority),  // bytes offset in struct
    nullptr,  // default value
    size_function__Priority__priority,  // size() function pointer
    get_const_function__Priority__priority,  // get_const(index) function pointer
    get_function__Priority__priority,  // get(index) function pointer
    fetch_function__Priority__priority,  // fetch(index, &value) function pointer
    assign_function__Priority__priority,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Priority_message_members = {
  "j2735_v2x_msgs::msg",  // message namespace
  "Priority",  // message name
  1,  // number of fields
  sizeof(j2735_v2x_msgs::msg::Priority),
  false,  // has_any_key_member_
  Priority_message_member_array,  // message members
  Priority_init_function,  // function to initialize message memory (memory has to be allocated)
  Priority_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Priority_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Priority_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__Priority__get_type_hash,
  &j2735_v2x_msgs__msg__Priority__get_type_description,
  &j2735_v2x_msgs__msg__Priority__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace j2735_v2x_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<j2735_v2x_msgs::msg::Priority>()
{
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::Priority_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, j2735_v2x_msgs, msg, Priority)() {
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::Priority_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
