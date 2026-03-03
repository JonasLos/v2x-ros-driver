// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from j2735_v2x_msgs:msg/PreemptPriorityList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "j2735_v2x_msgs/msg/detail/preempt_priority_list__functions.h"
#include "j2735_v2x_msgs/msg/detail/preempt_priority_list__struct.hpp"
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

void PreemptPriorityList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) j2735_v2x_msgs::msg::PreemptPriorityList(_init);
}

void PreemptPriorityList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<j2735_v2x_msgs::msg::PreemptPriorityList *>(message_memory);
  typed_message->~PreemptPriorityList();
}

size_t size_function__PreemptPriorityList__preempt_priority_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<j2735_v2x_msgs::msg::SignalControlZone> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PreemptPriorityList__preempt_priority_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<j2735_v2x_msgs::msg::SignalControlZone> *>(untyped_member);
  return &member[index];
}

void * get_function__PreemptPriorityList__preempt_priority_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<j2735_v2x_msgs::msg::SignalControlZone> *>(untyped_member);
  return &member[index];
}

void fetch_function__PreemptPriorityList__preempt_priority_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const j2735_v2x_msgs::msg::SignalControlZone *>(
    get_const_function__PreemptPriorityList__preempt_priority_list(untyped_member, index));
  auto & value = *reinterpret_cast<j2735_v2x_msgs::msg::SignalControlZone *>(untyped_value);
  value = item;
}

void assign_function__PreemptPriorityList__preempt_priority_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<j2735_v2x_msgs::msg::SignalControlZone *>(
    get_function__PreemptPriorityList__preempt_priority_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const j2735_v2x_msgs::msg::SignalControlZone *>(untyped_value);
  item = value;
}

void resize_function__PreemptPriorityList__preempt_priority_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<j2735_v2x_msgs::msg::SignalControlZone> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PreemptPriorityList_message_member_array[1] = {
  {
    "preempt_priority_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<j2735_v2x_msgs::msg::SignalControlZone>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::PreemptPriorityList, preempt_priority_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__PreemptPriorityList__preempt_priority_list,  // size() function pointer
    get_const_function__PreemptPriorityList__preempt_priority_list,  // get_const(index) function pointer
    get_function__PreemptPriorityList__preempt_priority_list,  // get(index) function pointer
    fetch_function__PreemptPriorityList__preempt_priority_list,  // fetch(index, &value) function pointer
    assign_function__PreemptPriorityList__preempt_priority_list,  // assign(index, value) function pointer
    resize_function__PreemptPriorityList__preempt_priority_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PreemptPriorityList_message_members = {
  "j2735_v2x_msgs::msg",  // message namespace
  "PreemptPriorityList",  // message name
  1,  // number of fields
  sizeof(j2735_v2x_msgs::msg::PreemptPriorityList),
  false,  // has_any_key_member_
  PreemptPriorityList_message_member_array,  // message members
  PreemptPriorityList_init_function,  // function to initialize message memory (memory has to be allocated)
  PreemptPriorityList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PreemptPriorityList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PreemptPriorityList_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__PreemptPriorityList__get_type_hash,
  &j2735_v2x_msgs__msg__PreemptPriorityList__get_type_description,
  &j2735_v2x_msgs__msg__PreemptPriorityList__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace j2735_v2x_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<j2735_v2x_msgs::msg::PreemptPriorityList>()
{
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::PreemptPriorityList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, j2735_v2x_msgs, msg, PreemptPriorityList)() {
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::PreemptPriorityList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
