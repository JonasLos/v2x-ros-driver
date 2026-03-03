// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/PivotPointDescription.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/pivot_point_description.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PIVOT_POINT_DESCRIPTION__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PIVOT_POINT_DESCRIPTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/pivot_point_description__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pivot_offset'
#include "j2735_v2x_msgs/msg/detail/offset_b11__traits.hpp"
// Member 'pivot_angle'
#include "j2735_v2x_msgs/msg/detail/angle__traits.hpp"
// Member 'pivots'
#include "j2735_v2x_msgs/msg/detail/pivoting_allowed__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PivotPointDescription & msg,
  std::ostream & out)
{
  out << "{";
  // member: pivot_offset
  {
    out << "pivot_offset: ";
    to_flow_style_yaml(msg.pivot_offset, out);
    out << ", ";
  }

  // member: pivot_angle
  {
    out << "pivot_angle: ";
    to_flow_style_yaml(msg.pivot_angle, out);
    out << ", ";
  }

  // member: pivots
  {
    out << "pivots: ";
    to_flow_style_yaml(msg.pivots, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PivotPointDescription & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pivot_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pivot_offset:\n";
    to_block_style_yaml(msg.pivot_offset, out, indentation + 2);
  }

  // member: pivot_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pivot_angle:\n";
    to_block_style_yaml(msg.pivot_angle, out, indentation + 2);
  }

  // member: pivots
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pivots:\n";
    to_block_style_yaml(msg.pivots, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PivotPointDescription & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::PivotPointDescription & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::PivotPointDescription & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::PivotPointDescription>()
{
  return "j2735_v2x_msgs::msg::PivotPointDescription";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::PivotPointDescription>()
{
  return "j2735_v2x_msgs/msg/PivotPointDescription";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::PivotPointDescription>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::Angle>::value && has_fixed_size<j2735_v2x_msgs::msg::OffsetB11>::value && has_fixed_size<j2735_v2x_msgs::msg::PivotingAllowed>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::PivotPointDescription>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::Angle>::value && has_bounded_size<j2735_v2x_msgs::msg::OffsetB11>::value && has_bounded_size<j2735_v2x_msgs::msg::PivotingAllowed>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::PivotPointDescription>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PIVOT_POINT_DESCRIPTION__TRAITS_HPP_
