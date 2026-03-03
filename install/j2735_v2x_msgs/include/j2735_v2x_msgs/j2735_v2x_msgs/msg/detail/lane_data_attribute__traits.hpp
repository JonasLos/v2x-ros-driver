// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_data_attribute.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/lane_data_attribute__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'speed_limits'
#include "j2735_v2x_msgs/msg/detail/speed_limit_list__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneDataAttribute & msg,
  std::ostream & out)
{
  out << "{";
  // member: choice
  {
    out << "choice: ";
    rosidl_generator_traits::value_to_yaml(msg.choice, out);
    out << ", ";
  }

  // member: path_end_point_angle
  {
    out << "path_end_point_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.path_end_point_angle, out);
    out << ", ";
  }

  // member: lane_crown_point_center
  {
    out << "lane_crown_point_center: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_crown_point_center, out);
    out << ", ";
  }

  // member: lane_crown_point_right
  {
    out << "lane_crown_point_right: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_crown_point_right, out);
    out << ", ";
  }

  // member: lane_crown_point_left
  {
    out << "lane_crown_point_left: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_crown_point_left, out);
    out << ", ";
  }

  // member: lane_angle
  {
    out << "lane_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_angle, out);
    out << ", ";
  }

  // member: speed_limits
  {
    out << "speed_limits: ";
    to_flow_style_yaml(msg.speed_limits, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneDataAttribute & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "choice: ";
    rosidl_generator_traits::value_to_yaml(msg.choice, out);
    out << "\n";
  }

  // member: path_end_point_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_end_point_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.path_end_point_angle, out);
    out << "\n";
  }

  // member: lane_crown_point_center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_crown_point_center: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_crown_point_center, out);
    out << "\n";
  }

  // member: lane_crown_point_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_crown_point_right: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_crown_point_right, out);
    out << "\n";
  }

  // member: lane_crown_point_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_crown_point_left: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_crown_point_left, out);
    out << "\n";
  }

  // member: lane_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_angle, out);
    out << "\n";
  }

  // member: speed_limits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_limits:\n";
    to_block_style_yaml(msg.speed_limits, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneDataAttribute & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::LaneDataAttribute & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::LaneDataAttribute & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::LaneDataAttribute>()
{
  return "j2735_v2x_msgs::msg::LaneDataAttribute";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::LaneDataAttribute>()
{
  return "j2735_v2x_msgs/msg/LaneDataAttribute";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::LaneDataAttribute>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::SpeedLimitList>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::LaneDataAttribute>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::SpeedLimitList>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::LaneDataAttribute>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__TRAITS_HPP_
