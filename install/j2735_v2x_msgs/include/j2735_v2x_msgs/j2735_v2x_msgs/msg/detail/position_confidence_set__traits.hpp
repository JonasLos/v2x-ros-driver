// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/PositionConfidenceSet.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/position_confidence_set.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_SET__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_SET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/position_confidence_set__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pos'
#include "j2735_v2x_msgs/msg/detail/position_confidence__traits.hpp"
// Member 'elevation'
#include "j2735_v2x_msgs/msg/detail/elevation_confidence__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PositionConfidenceSet & msg,
  std::ostream & out)
{
  out << "{";
  // member: pos
  {
    out << "pos: ";
    to_flow_style_yaml(msg.pos, out);
    out << ", ";
  }

  // member: elevation
  {
    out << "elevation: ";
    to_flow_style_yaml(msg.elevation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PositionConfidenceSet & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos:\n";
    to_block_style_yaml(msg.pos, out, indentation + 2);
  }

  // member: elevation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevation:\n";
    to_block_style_yaml(msg.elevation, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PositionConfidenceSet & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::PositionConfidenceSet & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::PositionConfidenceSet & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::PositionConfidenceSet>()
{
  return "j2735_v2x_msgs::msg::PositionConfidenceSet";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::PositionConfidenceSet>()
{
  return "j2735_v2x_msgs/msg/PositionConfidenceSet";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::PositionConfidenceSet>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::ElevationConfidence>::value && has_fixed_size<j2735_v2x_msgs::msg::PositionConfidence>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::PositionConfidenceSet>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::ElevationConfidence>::value && has_bounded_size<j2735_v2x_msgs::msg::PositionConfidence>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::PositionConfidenceSet>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_SET__TRAITS_HPP_
