// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/PathHistoryPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/path_history_point.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/path_history_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'lat_offset'
// Member 'lon_offset'
#include "j2735_v2x_msgs/msg/detail/offset_llb18__traits.hpp"
// Member 'elevation_offset'
#include "j2735_v2x_msgs/msg/detail/vert_offset_b12__traits.hpp"
// Member 'time_offset'
#include "j2735_v2x_msgs/msg/detail/time_offset__traits.hpp"
// Member 'speed'
#include "j2735_v2x_msgs/msg/detail/speed__traits.hpp"
// Member 'pos_accuracy'
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__traits.hpp"
// Member 'heading'
#include "j2735_v2x_msgs/msg/detail/coarse_heading__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PathHistoryPoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: lat_offset
  {
    out << "lat_offset: ";
    to_flow_style_yaml(msg.lat_offset, out);
    out << ", ";
  }

  // member: lon_offset
  {
    out << "lon_offset: ";
    to_flow_style_yaml(msg.lon_offset, out);
    out << ", ";
  }

  // member: elevation_offset
  {
    out << "elevation_offset: ";
    to_flow_style_yaml(msg.elevation_offset, out);
    out << ", ";
  }

  // member: time_offset
  {
    out << "time_offset: ";
    to_flow_style_yaml(msg.time_offset, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    to_flow_style_yaml(msg.speed, out);
    out << ", ";
  }

  // member: pos_accuracy
  {
    out << "pos_accuracy: ";
    to_flow_style_yaml(msg.pos_accuracy, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    to_flow_style_yaml(msg.heading, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathHistoryPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lat_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_offset:\n";
    to_block_style_yaml(msg.lat_offset, out, indentation + 2);
  }

  // member: lon_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon_offset:\n";
    to_block_style_yaml(msg.lon_offset, out, indentation + 2);
  }

  // member: elevation_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevation_offset:\n";
    to_block_style_yaml(msg.elevation_offset, out, indentation + 2);
  }

  // member: time_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_offset:\n";
    to_block_style_yaml(msg.time_offset, out, indentation + 2);
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed:\n";
    to_block_style_yaml(msg.speed, out, indentation + 2);
  }

  // member: pos_accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_accuracy:\n";
    to_block_style_yaml(msg.pos_accuracy, out, indentation + 2);
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading:\n";
    to_block_style_yaml(msg.heading, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathHistoryPoint & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::PathHistoryPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::PathHistoryPoint & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::PathHistoryPoint>()
{
  return "j2735_v2x_msgs::msg::PathHistoryPoint";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::PathHistoryPoint>()
{
  return "j2735_v2x_msgs/msg/PathHistoryPoint";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::PathHistoryPoint>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::CoarseHeading>::value && has_fixed_size<j2735_v2x_msgs::msg::OffsetLLB18>::value && has_fixed_size<j2735_v2x_msgs::msg::PositionalAccuracy>::value && has_fixed_size<j2735_v2x_msgs::msg::Speed>::value && has_fixed_size<j2735_v2x_msgs::msg::TimeOffset>::value && has_fixed_size<j2735_v2x_msgs::msg::VertOffsetB12>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::PathHistoryPoint>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::CoarseHeading>::value && has_bounded_size<j2735_v2x_msgs::msg::OffsetLLB18>::value && has_bounded_size<j2735_v2x_msgs::msg::PositionalAccuracy>::value && has_bounded_size<j2735_v2x_msgs::msg::Speed>::value && has_bounded_size<j2735_v2x_msgs::msg::TimeOffset>::value && has_bounded_size<j2735_v2x_msgs::msg::VertOffsetB12>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::PathHistoryPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT__TRAITS_HPP_
