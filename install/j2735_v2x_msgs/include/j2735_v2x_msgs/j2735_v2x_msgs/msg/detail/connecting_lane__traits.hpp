// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/ConnectingLane.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/connecting_lane.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__CONNECTING_LANE__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__CONNECTING_LANE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/connecting_lane__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'maneuver'
#include "j2735_v2x_msgs/msg/detail/allowed_maneuvers__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConnectingLane & msg,
  std::ostream & out)
{
  out << "{";
  // member: lane
  {
    out << "lane: ";
    rosidl_generator_traits::value_to_yaml(msg.lane, out);
    out << ", ";
  }

  // member: maneuver
  {
    out << "maneuver: ";
    to_flow_style_yaml(msg.maneuver, out);
    out << ", ";
  }

  // member: maneuver_exists
  {
    out << "maneuver_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuver_exists, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConnectingLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane: ";
    rosidl_generator_traits::value_to_yaml(msg.lane, out);
    out << "\n";
  }

  // member: maneuver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuver:\n";
    to_block_style_yaml(msg.maneuver, out, indentation + 2);
  }

  // member: maneuver_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuver_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuver_exists, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConnectingLane & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::ConnectingLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::ConnectingLane & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::ConnectingLane>()
{
  return "j2735_v2x_msgs::msg::ConnectingLane";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::ConnectingLane>()
{
  return "j2735_v2x_msgs/msg/ConnectingLane";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::ConnectingLane>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::AllowedManeuvers>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::ConnectingLane>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::AllowedManeuvers>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::ConnectingLane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__CONNECTING_LANE__TRAITS_HPP_
