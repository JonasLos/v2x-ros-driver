// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/ObstacleDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/obstacle_detection.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__OBSTACLE_DETECTION__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__OBSTACLE_DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/obstacle_detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'ob_dist'
#include "j2735_v2x_msgs/msg/detail/obstacle_distance__traits.hpp"
// Member 'ob_direct'
#include "j2735_v2x_msgs/msg/detail/obstacle_direction__traits.hpp"
// Member 'date_time'
#include "j2735_v2x_msgs/msg/detail/d_date_time__traits.hpp"
// Member 'description'
#include "j2735_v2x_msgs/msg/detail/iti_scodes__traits.hpp"
// Member 'location_details'
#include "j2735_v2x_msgs/msg/detail/itis_generic_locations__traits.hpp"
// Member 'vert_event'
#include "j2735_v2x_msgs/msg/detail/vertical_acceleration_threshold__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObstacleDetection & msg,
  std::ostream & out)
{
  out << "{";
  // member: presence_vector
  {
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << ", ";
  }

  // member: ob_dist
  {
    out << "ob_dist: ";
    to_flow_style_yaml(msg.ob_dist, out);
    out << ", ";
  }

  // member: ob_direct
  {
    out << "ob_direct: ";
    to_flow_style_yaml(msg.ob_direct, out);
    out << ", ";
  }

  // member: date_time
  {
    out << "date_time: ";
    to_flow_style_yaml(msg.date_time, out);
    out << ", ";
  }

  // member: description
  {
    out << "description: ";
    to_flow_style_yaml(msg.description, out);
    out << ", ";
  }

  // member: location_details
  {
    out << "location_details: ";
    to_flow_style_yaml(msg.location_details, out);
    out << ", ";
  }

  // member: vert_event
  {
    out << "vert_event: ";
    to_flow_style_yaml(msg.vert_event, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObstacleDetection & msg,
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

  // member: ob_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ob_dist:\n";
    to_block_style_yaml(msg.ob_dist, out, indentation + 2);
  }

  // member: ob_direct
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ob_direct:\n";
    to_block_style_yaml(msg.ob_direct, out, indentation + 2);
  }

  // member: date_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "date_time:\n";
    to_block_style_yaml(msg.date_time, out, indentation + 2);
  }

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description:\n";
    to_block_style_yaml(msg.description, out, indentation + 2);
  }

  // member: location_details
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location_details:\n";
    to_block_style_yaml(msg.location_details, out, indentation + 2);
  }

  // member: vert_event
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vert_event:\n";
    to_block_style_yaml(msg.vert_event, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObstacleDetection & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::ObstacleDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::ObstacleDetection & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::ObstacleDetection>()
{
  return "j2735_v2x_msgs::msg::ObstacleDetection";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::ObstacleDetection>()
{
  return "j2735_v2x_msgs/msg/ObstacleDetection";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::ObstacleDetection>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::DDateTime>::value && has_fixed_size<j2735_v2x_msgs::msg::ITISGenericLocations>::value && has_fixed_size<j2735_v2x_msgs::msg::ITIScodes>::value && has_fixed_size<j2735_v2x_msgs::msg::ObstacleDirection>::value && has_fixed_size<j2735_v2x_msgs::msg::ObstacleDistance>::value && has_fixed_size<j2735_v2x_msgs::msg::VerticalAccelerationThreshold>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::ObstacleDetection>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::DDateTime>::value && has_bounded_size<j2735_v2x_msgs::msg::ITISGenericLocations>::value && has_bounded_size<j2735_v2x_msgs::msg::ITIScodes>::value && has_bounded_size<j2735_v2x_msgs::msg::ObstacleDirection>::value && has_bounded_size<j2735_v2x_msgs::msg::ObstacleDistance>::value && has_bounded_size<j2735_v2x_msgs::msg::VerticalAccelerationThreshold>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::ObstacleDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__OBSTACLE_DETECTION__TRAITS_HPP_
