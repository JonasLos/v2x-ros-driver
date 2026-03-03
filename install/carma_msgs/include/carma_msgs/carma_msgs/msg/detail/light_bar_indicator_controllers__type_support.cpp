// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from carma_msgs:msg/LightBarIndicatorControllers.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "carma_msgs/msg/detail/light_bar_indicator_controllers__functions.h"
#include "carma_msgs/msg/detail/light_bar_indicator_controllers__struct.hpp"
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

void LightBarIndicatorControllers_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) carma_msgs::msg::LightBarIndicatorControllers(_init);
}

void LightBarIndicatorControllers_fini_function(void * message_memory)
{
  auto typed_message = static_cast<carma_msgs::msg::LightBarIndicatorControllers *>(message_memory);
  typed_message->~LightBarIndicatorControllers();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LightBarIndicatorControllers_message_member_array[8] = {
  {
    "green_solid_owner",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs::msg::LightBarIndicatorControllers, green_solid_owner),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "green_flash_owner",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs::msg::LightBarIndicatorControllers, green_flash_owner),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "yellow_sides_owner",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs::msg::LightBarIndicatorControllers, yellow_sides_owner),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "yellow_dim_owner",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs::msg::LightBarIndicatorControllers, yellow_dim_owner),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "yellow_flash_owner",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs::msg::LightBarIndicatorControllers, yellow_flash_owner),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "yellow_arrow_left_owner",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs::msg::LightBarIndicatorControllers, yellow_arrow_left_owner),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "yellow_arrow_right_owner",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs::msg::LightBarIndicatorControllers, yellow_arrow_right_owner),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "yellow_arrow_out_owner",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs::msg::LightBarIndicatorControllers, yellow_arrow_out_owner),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LightBarIndicatorControllers_message_members = {
  "carma_msgs::msg",  // message namespace
  "LightBarIndicatorControllers",  // message name
  8,  // number of fields
  sizeof(carma_msgs::msg::LightBarIndicatorControllers),
  false,  // has_any_key_member_
  LightBarIndicatorControllers_message_member_array,  // message members
  LightBarIndicatorControllers_init_function,  // function to initialize message memory (memory has to be allocated)
  LightBarIndicatorControllers_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LightBarIndicatorControllers_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LightBarIndicatorControllers_message_members,
  get_message_typesupport_handle_function,
  &carma_msgs__msg__LightBarIndicatorControllers__get_type_hash,
  &carma_msgs__msg__LightBarIndicatorControllers__get_type_description,
  &carma_msgs__msg__LightBarIndicatorControllers__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace carma_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_msgs::msg::LightBarIndicatorControllers>()
{
  return &::carma_msgs::msg::rosidl_typesupport_introspection_cpp::LightBarIndicatorControllers_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carma_msgs, msg, LightBarIndicatorControllers)() {
  return &::carma_msgs::msg::rosidl_typesupport_introspection_cpp::LightBarIndicatorControllers_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
