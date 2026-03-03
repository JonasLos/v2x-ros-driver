// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_msgs:msg/UIInstructions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/msg/ui_instructions.hpp"


#ifndef CARMA_MSGS__MSG__DETAIL__UI_INSTRUCTIONS__TRAITS_HPP_
#define CARMA_MSGS__MSG__DETAIL__UI_INSTRUCTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "carma_msgs/msg/detail/ui_instructions__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace carma_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UIInstructions & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: msg
  {
    out << "msg: ";
    rosidl_generator_traits::value_to_yaml(msg.msg, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: response_service
  {
    out << "response_service: ";
    rosidl_generator_traits::value_to_yaml(msg.response_service, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UIInstructions & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg: ";
    rosidl_generator_traits::value_to_yaml(msg.msg, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: response_service
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response_service: ";
    rosidl_generator_traits::value_to_yaml(msg.response_service, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UIInstructions & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace carma_msgs

namespace rosidl_generator_traits
{

[[deprecated("use carma_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const carma_msgs::msg::UIInstructions & msg,
  std::ostream & out, size_t indentation = 0)
{
  carma_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use carma_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const carma_msgs::msg::UIInstructions & msg)
{
  return carma_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<carma_msgs::msg::UIInstructions>()
{
  return "carma_msgs::msg::UIInstructions";
}

template<>
inline const char * name<carma_msgs::msg::UIInstructions>()
{
  return "carma_msgs/msg/UIInstructions";
}

template<>
struct has_fixed_size<carma_msgs::msg::UIInstructions>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_msgs::msg::UIInstructions>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_msgs::msg::UIInstructions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_MSGS__MSG__DETAIL__UI_INSTRUCTIONS__TRAITS_HPP_
