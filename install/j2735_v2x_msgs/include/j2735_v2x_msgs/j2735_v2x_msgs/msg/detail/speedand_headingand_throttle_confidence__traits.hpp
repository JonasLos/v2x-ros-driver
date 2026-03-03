// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/SpeedandHeadingandThrottleConfidence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/speedand_headingand_throttle_confidence.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/speedand_headingand_throttle_confidence__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'heading'
#include "j2735_v2x_msgs/msg/detail/heading_confidence__traits.hpp"
// Member 'speed'
#include "j2735_v2x_msgs/msg/detail/speed_confidence__traits.hpp"
// Member 'throttle'
#include "j2735_v2x_msgs/msg/detail/throttle_confidence__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SpeedandHeadingandThrottleConfidence & msg,
  std::ostream & out)
{
  out << "{";
  // member: heading
  {
    out << "heading: ";
    to_flow_style_yaml(msg.heading, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    to_flow_style_yaml(msg.speed, out);
    out << ", ";
  }

  // member: throttle
  {
    out << "throttle: ";
    to_flow_style_yaml(msg.throttle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpeedandHeadingandThrottleConfidence & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading:\n";
    to_block_style_yaml(msg.heading, out, indentation + 2);
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed:\n";
    to_block_style_yaml(msg.speed, out, indentation + 2);
  }

  // member: throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle:\n";
    to_block_style_yaml(msg.throttle, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpeedandHeadingandThrottleConfidence & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence>()
{
  return "j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence>()
{
  return "j2735_v2x_msgs/msg/SpeedandHeadingandThrottleConfidence";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::HeadingConfidence>::value && has_fixed_size<j2735_v2x_msgs::msg::SpeedConfidence>::value && has_fixed_size<j2735_v2x_msgs::msg::ThrottleConfidence>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::HeadingConfidence>::value && has_bounded_size<j2735_v2x_msgs::msg::SpeedConfidence>::value && has_bounded_size<j2735_v2x_msgs::msg::ThrottleConfidence>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__TRAITS_HPP_
