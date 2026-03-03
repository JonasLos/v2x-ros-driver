// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlParams.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_params__functions.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_params__struct.hpp"
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

void TrafficControlParams_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) j2735_v2x_msgs::msg::TrafficControlParams(_init);
}

void TrafficControlParams_fini_function(void * message_memory)
{
  auto typed_message = static_cast<j2735_v2x_msgs::msg::TrafficControlParams *>(message_memory);
  typed_message->~TrafficControlParams();
}

size_t size_function__TrafficControlParams__vclasses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<j2735_v2x_msgs::msg::TrafficControlVehClass> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrafficControlParams__vclasses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<j2735_v2x_msgs::msg::TrafficControlVehClass> *>(untyped_member);
  return &member[index];
}

void * get_function__TrafficControlParams__vclasses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<j2735_v2x_msgs::msg::TrafficControlVehClass> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrafficControlParams__vclasses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const j2735_v2x_msgs::msg::TrafficControlVehClass *>(
    get_const_function__TrafficControlParams__vclasses(untyped_member, index));
  auto & value = *reinterpret_cast<j2735_v2x_msgs::msg::TrafficControlVehClass *>(untyped_value);
  value = item;
}

void assign_function__TrafficControlParams__vclasses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<j2735_v2x_msgs::msg::TrafficControlVehClass *>(
    get_function__TrafficControlParams__vclasses(untyped_member, index));
  const auto & value = *reinterpret_cast<const j2735_v2x_msgs::msg::TrafficControlVehClass *>(untyped_value);
  item = value;
}

void resize_function__TrafficControlParams__vclasses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<j2735_v2x_msgs::msg::TrafficControlVehClass> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrafficControlParams_message_member_array[4] = {
  {
    "vclasses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<j2735_v2x_msgs::msg::TrafficControlVehClass>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::TrafficControlParams, vclasses),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrafficControlParams__vclasses,  // size() function pointer
    get_const_function__TrafficControlParams__vclasses,  // get_const(index) function pointer
    get_function__TrafficControlParams__vclasses,  // get(index) function pointer
    fetch_function__TrafficControlParams__vclasses,  // fetch(index, &value) function pointer
    assign_function__TrafficControlParams__vclasses,  // assign(index, value) function pointer
    resize_function__TrafficControlParams__vclasses  // resize(index) function pointer
  },
  {
    "schedule",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<j2735_v2x_msgs::msg::TrafficControlSchedule>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::TrafficControlParams, schedule),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "regulatory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::TrafficControlParams, regulatory),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "detail",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<j2735_v2x_msgs::msg::TrafficControlDetail>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::TrafficControlParams, detail),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrafficControlParams_message_members = {
  "j2735_v2x_msgs::msg",  // message namespace
  "TrafficControlParams",  // message name
  4,  // number of fields
  sizeof(j2735_v2x_msgs::msg::TrafficControlParams),
  false,  // has_any_key_member_
  TrafficControlParams_message_member_array,  // message members
  TrafficControlParams_init_function,  // function to initialize message memory (memory has to be allocated)
  TrafficControlParams_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrafficControlParams_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrafficControlParams_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__TrafficControlParams__get_type_hash,
  &j2735_v2x_msgs__msg__TrafficControlParams__get_type_description,
  &j2735_v2x_msgs__msg__TrafficControlParams__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace j2735_v2x_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<j2735_v2x_msgs::msg::TrafficControlParams>()
{
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::TrafficControlParams_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, j2735_v2x_msgs, msg, TrafficControlParams)() {
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::TrafficControlParams_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
