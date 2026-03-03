// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_msgs:msg/CarlaEnabled.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/msg/carla_enabled.hpp"


#ifndef CARMA_MSGS__MSG__DETAIL__CARLA_ENABLED__TRAITS_HPP_
#define CARMA_MSGS__MSG__DETAIL__CARLA_ENABLED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "carma_msgs/msg/detail/carla_enabled__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace carma_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CarlaEnabled & msg,
  std::ostream & out)
{
  out << "{";
  // member: carla_enabled
  {
    out << "carla_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.carla_enabled, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CarlaEnabled & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: carla_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "carla_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.carla_enabled, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CarlaEnabled & msg, bool use_flow_style = false)
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
  const carma_msgs::msg::CarlaEnabled & msg,
  std::ostream & out, size_t indentation = 0)
{
  carma_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use carma_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const carma_msgs::msg::CarlaEnabled & msg)
{
  return carma_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<carma_msgs::msg::CarlaEnabled>()
{
  return "carma_msgs::msg::CarlaEnabled";
}

template<>
inline const char * name<carma_msgs::msg::CarlaEnabled>()
{
  return "carma_msgs/msg/CarlaEnabled";
}

template<>
struct has_fixed_size<carma_msgs::msg::CarlaEnabled>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carma_msgs::msg::CarlaEnabled>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carma_msgs::msg::CarlaEnabled>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_MSGS__MSG__DETAIL__CARLA_ENABLED__TRAITS_HPP_
