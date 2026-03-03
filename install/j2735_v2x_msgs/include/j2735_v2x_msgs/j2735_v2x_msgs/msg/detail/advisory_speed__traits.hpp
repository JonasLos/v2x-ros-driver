// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/AdvisorySpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/advisory_speed.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/advisory_speed__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'type'
#include "j2735_v2x_msgs/msg/detail/advisory_speed_type__traits.hpp"
// Member 'confidence'
#include "j2735_v2x_msgs/msg/detail/speed_confidence__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AdvisorySpeed & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    to_flow_style_yaml(msg.type, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: speed_exists
  {
    out << "speed_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_exists, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    to_flow_style_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: distance_exists
  {
    out << "distance_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_exists, out);
    out << ", ";
  }

  // member: restriction_class_id
  {
    out << "restriction_class_id: ";
    rosidl_generator_traits::value_to_yaml(msg.restriction_class_id, out);
    out << ", ";
  }

  // member: restriction_class_id_exists
  {
    out << "restriction_class_id_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.restriction_class_id_exists, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AdvisorySpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type:\n";
    to_block_style_yaml(msg.type, out, indentation + 2);
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: speed_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_exists, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence:\n";
    to_block_style_yaml(msg.confidence, out, indentation + 2);
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: distance_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_exists, out);
    out << "\n";
  }

  // member: restriction_class_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "restriction_class_id: ";
    rosidl_generator_traits::value_to_yaml(msg.restriction_class_id, out);
    out << "\n";
  }

  // member: restriction_class_id_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "restriction_class_id_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.restriction_class_id_exists, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AdvisorySpeed & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::AdvisorySpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::AdvisorySpeed & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::AdvisorySpeed>()
{
  return "j2735_v2x_msgs::msg::AdvisorySpeed";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::AdvisorySpeed>()
{
  return "j2735_v2x_msgs/msg/AdvisorySpeed";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::AdvisorySpeed>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::AdvisorySpeedType>::value && has_fixed_size<j2735_v2x_msgs::msg::SpeedConfidence>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::AdvisorySpeed>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::AdvisorySpeedType>::value && has_bounded_size<j2735_v2x_msgs::msg::SpeedConfidence>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::AdvisorySpeed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED__TRAITS_HPP_
