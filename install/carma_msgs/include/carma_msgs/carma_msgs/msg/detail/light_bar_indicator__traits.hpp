// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_msgs:msg/LightBarIndicator.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/msg/light_bar_indicator.hpp"


#ifndef CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR__TRAITS_HPP_
#define CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "carma_msgs/msg/detail/light_bar_indicator__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace carma_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LightBarIndicator & msg,
  std::ostream & out)
{
  out << "{";
  // member: indicator
  {
    out << "indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.indicator, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LightBarIndicator & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: indicator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.indicator, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LightBarIndicator & msg, bool use_flow_style = false)
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
  const carma_msgs::msg::LightBarIndicator & msg,
  std::ostream & out, size_t indentation = 0)
{
  carma_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use carma_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const carma_msgs::msg::LightBarIndicator & msg)
{
  return carma_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<carma_msgs::msg::LightBarIndicator>()
{
  return "carma_msgs::msg::LightBarIndicator";
}

template<>
inline const char * name<carma_msgs::msg::LightBarIndicator>()
{
  return "carma_msgs/msg/LightBarIndicator";
}

template<>
struct has_fixed_size<carma_msgs::msg::LightBarIndicator>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carma_msgs::msg::LightBarIndicator>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carma_msgs::msg::LightBarIndicator>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR__TRAITS_HPP_
