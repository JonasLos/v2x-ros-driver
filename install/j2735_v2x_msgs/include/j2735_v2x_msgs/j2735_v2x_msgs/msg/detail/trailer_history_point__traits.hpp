// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/TrailerHistoryPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/trailer_history_point.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/trailer_history_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pivot_angle'
#include "j2735_v2x_msgs/msg/detail/angle__traits.hpp"
// Member 'time_offset'
#include "j2735_v2x_msgs/msg/detail/time_offset__traits.hpp"
// Member 'position_offset'
#include "j2735_v2x_msgs/msg/detail/node_xy24b__traits.hpp"
// Member 'elevation_offset'
#include "j2735_v2x_msgs/msg/detail/vert_offset_b07__traits.hpp"
// Member 'heading'
#include "j2735_v2x_msgs/msg/detail/coarse_heading__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrailerHistoryPoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: presence_vector
  {
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << ", ";
  }

  // member: pivot_angle
  {
    out << "pivot_angle: ";
    to_flow_style_yaml(msg.pivot_angle, out);
    out << ", ";
  }

  // member: time_offset
  {
    out << "time_offset: ";
    to_flow_style_yaml(msg.time_offset, out);
    out << ", ";
  }

  // member: position_offset
  {
    out << "position_offset: ";
    to_flow_style_yaml(msg.position_offset, out);
    out << ", ";
  }

  // member: elevation_offset
  {
    out << "elevation_offset: ";
    to_flow_style_yaml(msg.elevation_offset, out);
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
  const TrailerHistoryPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: presence_vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << "\n";
  }

  // member: pivot_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pivot_angle:\n";
    to_block_style_yaml(msg.pivot_angle, out, indentation + 2);
  }

  // member: time_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_offset:\n";
    to_block_style_yaml(msg.time_offset, out, indentation + 2);
  }

  // member: position_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_offset:\n";
    to_block_style_yaml(msg.position_offset, out, indentation + 2);
  }

  // member: elevation_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevation_offset:\n";
    to_block_style_yaml(msg.elevation_offset, out, indentation + 2);
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

inline std::string to_yaml(const TrailerHistoryPoint & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::TrailerHistoryPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::TrailerHistoryPoint & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::TrailerHistoryPoint>()
{
  return "j2735_v2x_msgs::msg::TrailerHistoryPoint";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::TrailerHistoryPoint>()
{
  return "j2735_v2x_msgs/msg/TrailerHistoryPoint";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::TrailerHistoryPoint>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::Angle>::value && has_fixed_size<j2735_v2x_msgs::msg::CoarseHeading>::value && has_fixed_size<j2735_v2x_msgs::msg::NodeXY24b>::value && has_fixed_size<j2735_v2x_msgs::msg::TimeOffset>::value && has_fixed_size<j2735_v2x_msgs::msg::VertOffsetB07>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::TrailerHistoryPoint>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::Angle>::value && has_bounded_size<j2735_v2x_msgs::msg::CoarseHeading>::value && has_bounded_size<j2735_v2x_msgs::msg::NodeXY24b>::value && has_bounded_size<j2735_v2x_msgs::msg::TimeOffset>::value && has_bounded_size<j2735_v2x_msgs::msg::VertOffsetB07>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::TrailerHistoryPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT__TRAITS_HPP_
