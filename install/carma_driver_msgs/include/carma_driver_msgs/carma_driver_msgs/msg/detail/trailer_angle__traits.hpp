// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_driver_msgs:msg/TrailerAngle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/msg/trailer_angle.hpp"


#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__TRAILER_ANGLE__TRAITS_HPP_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__TRAILER_ANGLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "carma_driver_msgs/msg/detail/trailer_angle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace carma_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrailerAngle & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrailerAngle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrailerAngle & msg, bool use_flow_style = false)
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

}  // namespace carma_driver_msgs

namespace rosidl_generator_traits
{

[[deprecated("use carma_driver_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const carma_driver_msgs::msg::TrailerAngle & msg,
  std::ostream & out, size_t indentation = 0)
{
  carma_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use carma_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const carma_driver_msgs::msg::TrailerAngle & msg)
{
  return carma_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<carma_driver_msgs::msg::TrailerAngle>()
{
  return "carma_driver_msgs::msg::TrailerAngle";
}

template<>
inline const char * name<carma_driver_msgs::msg::TrailerAngle>()
{
  return "carma_driver_msgs/msg/TrailerAngle";
}

template<>
struct has_fixed_size<carma_driver_msgs::msg::TrailerAngle>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<carma_driver_msgs::msg::TrailerAngle>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<carma_driver_msgs::msg::TrailerAngle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__TRAILER_ANGLE__TRAITS_HPP_
