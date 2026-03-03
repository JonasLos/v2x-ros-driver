// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlBounds.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_bounds__functions.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_bounds__struct.hpp"
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

void TrafficControlBounds_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) j2735_v2x_msgs::msg::TrafficControlBounds(_init);
}

void TrafficControlBounds_fini_function(void * message_memory)
{
  auto typed_message = static_cast<j2735_v2x_msgs::msg::TrafficControlBounds *>(message_memory);
  typed_message->~TrafficControlBounds();
}

size_t size_function__TrafficControlBounds__offsets(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__TrafficControlBounds__offsets(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<j2735_v2x_msgs::msg::OffsetPoint, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__TrafficControlBounds__offsets(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<j2735_v2x_msgs::msg::OffsetPoint, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrafficControlBounds__offsets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const j2735_v2x_msgs::msg::OffsetPoint *>(
    get_const_function__TrafficControlBounds__offsets(untyped_member, index));
  auto & value = *reinterpret_cast<j2735_v2x_msgs::msg::OffsetPoint *>(untyped_value);
  value = item;
}

void assign_function__TrafficControlBounds__offsets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<j2735_v2x_msgs::msg::OffsetPoint *>(
    get_function__TrafficControlBounds__offsets(untyped_member, index));
  const auto & value = *reinterpret_cast<const j2735_v2x_msgs::msg::OffsetPoint *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrafficControlBounds_message_member_array[4] = {
  {
    "oldest",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::TrafficControlBounds, oldest),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reflon",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::TrafficControlBounds, reflon),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reflat",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::TrafficControlBounds, reflat),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "offsets",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<j2735_v2x_msgs::msg::OffsetPoint>(),  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::TrafficControlBounds, offsets),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrafficControlBounds__offsets,  // size() function pointer
    get_const_function__TrafficControlBounds__offsets,  // get_const(index) function pointer
    get_function__TrafficControlBounds__offsets,  // get(index) function pointer
    fetch_function__TrafficControlBounds__offsets,  // fetch(index, &value) function pointer
    assign_function__TrafficControlBounds__offsets,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrafficControlBounds_message_members = {
  "j2735_v2x_msgs::msg",  // message namespace
  "TrafficControlBounds",  // message name
  4,  // number of fields
  sizeof(j2735_v2x_msgs::msg::TrafficControlBounds),
  false,  // has_any_key_member_
  TrafficControlBounds_message_member_array,  // message members
  TrafficControlBounds_init_function,  // function to initialize message memory (memory has to be allocated)
  TrafficControlBounds_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrafficControlBounds_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrafficControlBounds_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__TrafficControlBounds__get_type_hash,
  &j2735_v2x_msgs__msg__TrafficControlBounds__get_type_description,
  &j2735_v2x_msgs__msg__TrafficControlBounds__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace j2735_v2x_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<j2735_v2x_msgs::msg::TrafficControlBounds>()
{
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::TrafficControlBounds_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, j2735_v2x_msgs, msg, TrafficControlBounds)() {
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::TrafficControlBounds_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
