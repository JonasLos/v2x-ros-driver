// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlPackage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_package__functions.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_package__struct.hpp"
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

void TrafficControlPackage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) j2735_v2x_msgs::msg::TrafficControlPackage(_init);
}

void TrafficControlPackage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<j2735_v2x_msgs::msg::TrafficControlPackage *>(message_memory);
  typed_message->~TrafficControlPackage();
}

size_t size_function__TrafficControlPackage__tcids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<j2735_v2x_msgs::msg::Id128b> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrafficControlPackage__tcids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<j2735_v2x_msgs::msg::Id128b> *>(untyped_member);
  return &member[index];
}

void * get_function__TrafficControlPackage__tcids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<j2735_v2x_msgs::msg::Id128b> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrafficControlPackage__tcids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const j2735_v2x_msgs::msg::Id128b *>(
    get_const_function__TrafficControlPackage__tcids(untyped_member, index));
  auto & value = *reinterpret_cast<j2735_v2x_msgs::msg::Id128b *>(untyped_value);
  value = item;
}

void assign_function__TrafficControlPackage__tcids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<j2735_v2x_msgs::msg::Id128b *>(
    get_function__TrafficControlPackage__tcids(untyped_member, index));
  const auto & value = *reinterpret_cast<const j2735_v2x_msgs::msg::Id128b *>(untyped_value);
  item = value;
}

void resize_function__TrafficControlPackage__tcids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<j2735_v2x_msgs::msg::Id128b> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrafficControlPackage_message_member_array[3] = {
  {
    "label",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::TrafficControlPackage, label),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "label_exists",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::TrafficControlPackage, label_exists),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tcids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<j2735_v2x_msgs::msg::Id128b>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::TrafficControlPackage, tcids),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrafficControlPackage__tcids,  // size() function pointer
    get_const_function__TrafficControlPackage__tcids,  // get_const(index) function pointer
    get_function__TrafficControlPackage__tcids,  // get(index) function pointer
    fetch_function__TrafficControlPackage__tcids,  // fetch(index, &value) function pointer
    assign_function__TrafficControlPackage__tcids,  // assign(index, value) function pointer
    resize_function__TrafficControlPackage__tcids  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrafficControlPackage_message_members = {
  "j2735_v2x_msgs::msg",  // message namespace
  "TrafficControlPackage",  // message name
  3,  // number of fields
  sizeof(j2735_v2x_msgs::msg::TrafficControlPackage),
  false,  // has_any_key_member_
  TrafficControlPackage_message_member_array,  // message members
  TrafficControlPackage_init_function,  // function to initialize message memory (memory has to be allocated)
  TrafficControlPackage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrafficControlPackage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrafficControlPackage_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__TrafficControlPackage__get_type_hash,
  &j2735_v2x_msgs__msg__TrafficControlPackage__get_type_description,
  &j2735_v2x_msgs__msg__TrafficControlPackage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace j2735_v2x_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<j2735_v2x_msgs::msg::TrafficControlPackage>()
{
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::TrafficControlPackage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, j2735_v2x_msgs, msg, TrafficControlPackage)() {
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::TrafficControlPackage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
