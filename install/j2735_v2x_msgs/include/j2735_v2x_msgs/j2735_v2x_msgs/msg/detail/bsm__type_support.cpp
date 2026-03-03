// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from j2735_v2x_msgs:msg/BSM.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "j2735_v2x_msgs/msg/detail/bsm__functions.h"
#include "j2735_v2x_msgs/msg/detail/bsm__struct.hpp"
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

void BSM_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) j2735_v2x_msgs::msg::BSM(_init);
}

void BSM_fini_function(void * message_memory)
{
  auto typed_message = static_cast<j2735_v2x_msgs::msg::BSM *>(message_memory);
  typed_message->~BSM();
}

size_t size_function__BSM__part_ii(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<j2735_v2x_msgs::msg::BSMPartIIExtension> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BSM__part_ii(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<j2735_v2x_msgs::msg::BSMPartIIExtension> *>(untyped_member);
  return &member[index];
}

void * get_function__BSM__part_ii(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<j2735_v2x_msgs::msg::BSMPartIIExtension> *>(untyped_member);
  return &member[index];
}

void fetch_function__BSM__part_ii(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const j2735_v2x_msgs::msg::BSMPartIIExtension *>(
    get_const_function__BSM__part_ii(untyped_member, index));
  auto & value = *reinterpret_cast<j2735_v2x_msgs::msg::BSMPartIIExtension *>(untyped_value);
  value = item;
}

void assign_function__BSM__part_ii(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<j2735_v2x_msgs::msg::BSMPartIIExtension *>(
    get_function__BSM__part_ii(untyped_member, index));
  const auto & value = *reinterpret_cast<const j2735_v2x_msgs::msg::BSMPartIIExtension *>(untyped_value);
  item = value;
}

void resize_function__BSM__part_ii(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<j2735_v2x_msgs::msg::BSMPartIIExtension> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BSM__regional(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<j2735_v2x_msgs::msg::BSMRegionalExtension> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BSM__regional(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<j2735_v2x_msgs::msg::BSMRegionalExtension> *>(untyped_member);
  return &member[index];
}

void * get_function__BSM__regional(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<j2735_v2x_msgs::msg::BSMRegionalExtension> *>(untyped_member);
  return &member[index];
}

void fetch_function__BSM__regional(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const j2735_v2x_msgs::msg::BSMRegionalExtension *>(
    get_const_function__BSM__regional(untyped_member, index));
  auto & value = *reinterpret_cast<j2735_v2x_msgs::msg::BSMRegionalExtension *>(untyped_value);
  value = item;
}

void assign_function__BSM__regional(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<j2735_v2x_msgs::msg::BSMRegionalExtension *>(
    get_function__BSM__regional(untyped_member, index));
  const auto & value = *reinterpret_cast<const j2735_v2x_msgs::msg::BSMRegionalExtension *>(untyped_value);
  item = value;
}

void resize_function__BSM__regional(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<j2735_v2x_msgs::msg::BSMRegionalExtension> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BSM_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::BSM, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "core_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<j2735_v2x_msgs::msg::BSMCoreData>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::BSM, core_data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "presence_vector",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::BSM, presence_vector),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "part_ii",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<j2735_v2x_msgs::msg::BSMPartIIExtension>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::BSM, part_ii),  // bytes offset in struct
    nullptr,  // default value
    size_function__BSM__part_ii,  // size() function pointer
    get_const_function__BSM__part_ii,  // get_const(index) function pointer
    get_function__BSM__part_ii,  // get(index) function pointer
    fetch_function__BSM__part_ii,  // fetch(index, &value) function pointer
    assign_function__BSM__part_ii,  // assign(index, value) function pointer
    resize_function__BSM__part_ii  // resize(index) function pointer
  },
  {
    "regional",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<j2735_v2x_msgs::msg::BSMRegionalExtension>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::BSM, regional),  // bytes offset in struct
    nullptr,  // default value
    size_function__BSM__regional,  // size() function pointer
    get_const_function__BSM__regional,  // get_const(index) function pointer
    get_function__BSM__regional,  // get(index) function pointer
    fetch_function__BSM__regional,  // fetch(index, &value) function pointer
    assign_function__BSM__regional,  // assign(index, value) function pointer
    resize_function__BSM__regional  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BSM_message_members = {
  "j2735_v2x_msgs::msg",  // message namespace
  "BSM",  // message name
  5,  // number of fields
  sizeof(j2735_v2x_msgs::msg::BSM),
  false,  // has_any_key_member_
  BSM_message_member_array,  // message members
  BSM_init_function,  // function to initialize message memory (memory has to be allocated)
  BSM_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BSM_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BSM_message_members,
  get_message_typesupport_handle_function,
  &j2735_v2x_msgs__msg__BSM__get_type_hash,
  &j2735_v2x_msgs__msg__BSM__get_type_description,
  &j2735_v2x_msgs__msg__BSM__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace j2735_v2x_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<j2735_v2x_msgs::msg::BSM>()
{
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::BSM_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, j2735_v2x_msgs, msg, BSM)() {
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::BSM_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
