// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/SpeedLimitList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/speed_limit_list.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_LIST__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/speed_limit_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'speed_limits'
#include "j2735_v2x_msgs/msg/detail/regulatory_speed_limit__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SpeedLimitList & msg,
  std::ostream & out)
{
  out << "{";
  // member: speed_limits
  {
    if (msg.speed_limits.size() == 0) {
      out << "speed_limits: []";
    } else {
      out << "speed_limits: [";
      size_t pending_items = msg.speed_limits.size();
      for (auto item : msg.speed_limits) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpeedLimitList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: speed_limits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.speed_limits.size() == 0) {
      out << "speed_limits: []\n";
    } else {
      out << "speed_limits:\n";
      for (auto item : msg.speed_limits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpeedLimitList & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::SpeedLimitList & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::SpeedLimitList & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::SpeedLimitList>()
{
  return "j2735_v2x_msgs::msg::SpeedLimitList";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::SpeedLimitList>()
{
  return "j2735_v2x_msgs/msg/SpeedLimitList";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::SpeedLimitList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::SpeedLimitList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::SpeedLimitList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_LIST__TRAITS_HPP_
