// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/BrakeBoostApplied.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/brake_boost_applied.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BRAKE_BOOST_APPLIED__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BRAKE_BOOST_APPLIED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/brake_boost_applied__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BrakeBoostApplied & msg,
  std::ostream & out)
{
  out << "{";
  // member: brake_boost_applied
  {
    out << "brake_boost_applied: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_boost_applied, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BrakeBoostApplied & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: brake_boost_applied
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_boost_applied: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_boost_applied, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BrakeBoostApplied & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::BrakeBoostApplied & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::BrakeBoostApplied & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::BrakeBoostApplied>()
{
  return "j2735_v2x_msgs::msg::BrakeBoostApplied";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::BrakeBoostApplied>()
{
  return "j2735_v2x_msgs/msg/BrakeBoostApplied";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::BrakeBoostApplied>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::BrakeBoostApplied>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<j2735_v2x_msgs::msg::BrakeBoostApplied>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BRAKE_BOOST_APPLIED__TRAITS_HPP_
