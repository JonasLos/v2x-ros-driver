// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_msgs:msg/SystemAlert.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/msg/system_alert.hpp"


#ifndef CARMA_MSGS__MSG__DETAIL__SYSTEM_ALERT__TRAITS_HPP_
#define CARMA_MSGS__MSG__DETAIL__SYSTEM_ALERT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "carma_msgs/msg/detail/system_alert__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace carma_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SystemAlert & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: description
  {
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << ", ";
  }

  // member: source_node
  {
    out << "source_node: ";
    rosidl_generator_traits::value_to_yaml(msg.source_node, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SystemAlert & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << "\n";
  }

  // member: source_node
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_node: ";
    rosidl_generator_traits::value_to_yaml(msg.source_node, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SystemAlert & msg, bool use_flow_style = false)
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
  const carma_msgs::msg::SystemAlert & msg,
  std::ostream & out, size_t indentation = 0)
{
  carma_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use carma_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const carma_msgs::msg::SystemAlert & msg)
{
  return carma_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<carma_msgs::msg::SystemAlert>()
{
  return "carma_msgs::msg::SystemAlert";
}

template<>
inline const char * name<carma_msgs::msg::SystemAlert>()
{
  return "carma_msgs/msg/SystemAlert";
}

template<>
struct has_fixed_size<carma_msgs::msg::SystemAlert>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_msgs::msg::SystemAlert>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_msgs::msg::SystemAlert>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_MSGS__MSG__DETAIL__SYSTEM_ALERT__TRAITS_HPP_
