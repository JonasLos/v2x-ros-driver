// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/CoefficientOfFriction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/coefficient_of_friction.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__COEFFICIENT_OF_FRICTION__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__COEFFICIENT_OF_FRICTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/coefficient_of_friction__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CoefficientOfFriction & msg,
  std::ostream & out)
{
  out << "{";
  // member: coefficient
  {
    out << "coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.coefficient, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CoefficientOfFriction & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: coefficient
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.coefficient, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CoefficientOfFriction & msg, bool use_flow_style = false)
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

}  // namespace j2735_v2x_msgs

namespace rosidl_generator_traits
{

[[deprecated("use j2735_v2x_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const j2735_v2x_msgs::msg::CoefficientOfFriction & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::CoefficientOfFriction & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::CoefficientOfFriction>()
{
  return "j2735_v2x_msgs::msg::CoefficientOfFriction";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::CoefficientOfFriction>()
{
  return "j2735_v2x_msgs/msg/CoefficientOfFriction";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::CoefficientOfFriction>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::CoefficientOfFriction>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<j2735_v2x_msgs::msg::CoefficientOfFriction>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__COEFFICIENT_OF_FRICTION__TRAITS_HPP_
