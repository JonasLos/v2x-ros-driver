// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/FullPositionVector.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/full_position_vector.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__FULL_POSITION_VECTOR__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__FULL_POSITION_VECTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/full_position_vector__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'utc_time'
#include "j2735_v2x_msgs/msg/detail/d_date_time__traits.hpp"
// Member 'lon'
#include "j2735_v2x_msgs/msg/detail/longitude__traits.hpp"
// Member 'lat'
#include "j2735_v2x_msgs/msg/detail/latitude__traits.hpp"
// Member 'elevation'
#include "j2735_v2x_msgs/msg/detail/elevation__traits.hpp"
// Member 'heading'
#include "j2735_v2x_msgs/msg/detail/heading__traits.hpp"
// Member 'speed'
#include "j2735_v2x_msgs/msg/detail/transmission_and_speed__traits.hpp"
// Member 'pos_accuracy'
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__traits.hpp"
// Member 'time_confidence'
#include "j2735_v2x_msgs/msg/detail/time_confidence__traits.hpp"
// Member 'pos_confidence'
#include "j2735_v2x_msgs/msg/detail/position_confidence_set__traits.hpp"
// Member 'speed_confidence'
#include "j2735_v2x_msgs/msg/detail/speedand_headingand_throttle_confidence__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FullPositionVector & msg,
  std::ostream & out)
{
  out << "{";
  // member: presence_vector
  {
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << ", ";
  }

  // member: utc_time
  {
    out << "utc_time: ";
    to_flow_style_yaml(msg.utc_time, out);
    out << ", ";
  }

  // member: lon
  {
    out << "lon: ";
    to_flow_style_yaml(msg.lon, out);
    out << ", ";
  }

  // member: lat
  {
    out << "lat: ";
    to_flow_style_yaml(msg.lat, out);
    out << ", ";
  }

  // member: elevation
  {
    out << "elevation: ";
    to_flow_style_yaml(msg.elevation, out);
    out << ", ";
  }

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

  // member: pos_accuracy
  {
    out << "pos_accuracy: ";
    to_flow_style_yaml(msg.pos_accuracy, out);
    out << ", ";
  }

  // member: time_confidence
  {
    out << "time_confidence: ";
    to_flow_style_yaml(msg.time_confidence, out);
    out << ", ";
  }

  // member: pos_confidence
  {
    out << "pos_confidence: ";
    to_flow_style_yaml(msg.pos_confidence, out);
    out << ", ";
  }

  // member: speed_confidence
  {
    out << "speed_confidence: ";
    to_flow_style_yaml(msg.speed_confidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FullPositionVector & msg,
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

  // member: utc_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_time:\n";
    to_block_style_yaml(msg.utc_time, out, indentation + 2);
  }

  // member: lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon:\n";
    to_block_style_yaml(msg.lon, out, indentation + 2);
  }

  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat:\n";
    to_block_style_yaml(msg.lat, out, indentation + 2);
  }

  // member: elevation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevation:\n";
    to_block_style_yaml(msg.elevation, out, indentation + 2);
  }

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

  // member: pos_accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_accuracy:\n";
    to_block_style_yaml(msg.pos_accuracy, out, indentation + 2);
  }

  // member: time_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_confidence:\n";
    to_block_style_yaml(msg.time_confidence, out, indentation + 2);
  }

  // member: pos_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_confidence:\n";
    to_block_style_yaml(msg.pos_confidence, out, indentation + 2);
  }

  // member: speed_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_confidence:\n";
    to_block_style_yaml(msg.speed_confidence, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FullPositionVector & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::FullPositionVector & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::FullPositionVector & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::FullPositionVector>()
{
  return "j2735_v2x_msgs::msg::FullPositionVector";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::FullPositionVector>()
{
  return "j2735_v2x_msgs/msg/FullPositionVector";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::FullPositionVector>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::DDateTime>::value && has_fixed_size<j2735_v2x_msgs::msg::Elevation>::value && has_fixed_size<j2735_v2x_msgs::msg::Heading>::value && has_fixed_size<j2735_v2x_msgs::msg::Latitude>::value && has_fixed_size<j2735_v2x_msgs::msg::Longitude>::value && has_fixed_size<j2735_v2x_msgs::msg::PositionConfidenceSet>::value && has_fixed_size<j2735_v2x_msgs::msg::PositionalAccuracy>::value && has_fixed_size<j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence>::value && has_fixed_size<j2735_v2x_msgs::msg::TimeConfidence>::value && has_fixed_size<j2735_v2x_msgs::msg::TransmissionAndSpeed>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::FullPositionVector>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::DDateTime>::value && has_bounded_size<j2735_v2x_msgs::msg::Elevation>::value && has_bounded_size<j2735_v2x_msgs::msg::Heading>::value && has_bounded_size<j2735_v2x_msgs::msg::Latitude>::value && has_bounded_size<j2735_v2x_msgs::msg::Longitude>::value && has_bounded_size<j2735_v2x_msgs::msg::PositionConfidenceSet>::value && has_bounded_size<j2735_v2x_msgs::msg::PositionalAccuracy>::value && has_bounded_size<j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence>::value && has_bounded_size<j2735_v2x_msgs::msg::TimeConfidence>::value && has_bounded_size<j2735_v2x_msgs::msg::TransmissionAndSpeed>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::FullPositionVector>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__FULL_POSITION_VECTOR__TRAITS_HPP_
