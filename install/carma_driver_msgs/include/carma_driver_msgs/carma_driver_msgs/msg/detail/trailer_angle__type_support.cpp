// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from carma_driver_msgs:msg/TrailerAngle.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "carma_driver_msgs/msg/detail/trailer_angle__functions.h"
#include "carma_driver_msgs/msg/detail/trailer_angle__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace carma_driver_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TrailerAngle_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) carma_driver_msgs::msg::TrailerAngle(_init);
}

void TrailerAngle_fini_function(void * message_memory)
{
  auto typed_message = static_cast<carma_driver_msgs::msg::TrailerAngle *>(message_memory);
  typed_message->~TrailerAngle();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrailerAngle_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs::msg::TrailerAngle, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs::msg::TrailerAngle, angle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrailerAngle_message_members = {
  "carma_driver_msgs::msg",  // message namespace
  "TrailerAngle",  // message name
  2,  // number of fields
  sizeof(carma_driver_msgs::msg::TrailerAngle),
  false,  // has_any_key_member_
  TrailerAngle_message_member_array,  // message members
  TrailerAngle_init_function,  // function to initialize message memory (memory has to be allocated)
  TrailerAngle_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrailerAngle_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrailerAngle_message_members,
  get_message_typesupport_handle_function,
  &carma_driver_msgs__msg__TrailerAngle__get_type_hash,
  &carma_driver_msgs__msg__TrailerAngle__get_type_description,
  &carma_driver_msgs__msg__TrailerAngle__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace carma_driver_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_driver_msgs::msg::TrailerAngle>()
{
  return &::carma_driver_msgs::msg::rosidl_typesupport_introspection_cpp::TrailerAngle_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carma_driver_msgs, msg, TrailerAngle)() {
  return &::carma_driver_msgs::msg::rosidl_typesupport_introspection_cpp::TrailerAngle_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
