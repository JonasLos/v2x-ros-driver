// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/RoadSegment.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/road_segment.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/road_segment__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'id'
#include "j2735_v2x_msgs/msg/detail/road_segment_reference_id__traits.hpp"
// Member 'ref_point'
#include "j2735_v2x_msgs/msg/detail/position3_d__traits.hpp"
// Member 'speed_limits'
#include "j2735_v2x_msgs/msg/detail/speed_limit_list__traits.hpp"
// Member 'road_lane_set'
#include "j2735_v2x_msgs/msg/detail/road_lane_set_list__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RoadSegment & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: name_exists
  {
    out << "name_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.name_exists, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    to_flow_style_yaml(msg.id, out);
    out << ", ";
  }

  // member: revision
  {
    out << "revision: ";
    rosidl_generator_traits::value_to_yaml(msg.revision, out);
    out << ", ";
  }

  // member: ref_point
  {
    out << "ref_point: ";
    to_flow_style_yaml(msg.ref_point, out);
    out << ", ";
  }

  // member: lane_width
  {
    out << "lane_width: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_width, out);
    out << ", ";
  }

  // member: lane_width_exists
  {
    out << "lane_width_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_width_exists, out);
    out << ", ";
  }

  // member: speed_limits
  {
    out << "speed_limits: ";
    to_flow_style_yaml(msg.speed_limits, out);
    out << ", ";
  }

  // member: speed_limits_exists
  {
    out << "speed_limits_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limits_exists, out);
    out << ", ";
  }

  // member: road_lane_set
  {
    out << "road_lane_set: ";
    to_flow_style_yaml(msg.road_lane_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RoadSegment & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: name_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.name_exists, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id:\n";
    to_block_style_yaml(msg.id, out, indentation + 2);
  }

  // member: revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "revision: ";
    rosidl_generator_traits::value_to_yaml(msg.revision, out);
    out << "\n";
  }

  // member: ref_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_point:\n";
    to_block_style_yaml(msg.ref_point, out, indentation + 2);
  }

  // member: lane_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_width: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_width, out);
    out << "\n";
  }

  // member: lane_width_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_width_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_width_exists, out);
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

  // member: speed_limits_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_limits_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limits_exists, out);
    out << "\n";
  }

  // member: road_lane_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_lane_set:\n";
    to_block_style_yaml(msg.road_lane_set, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoadSegment & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::RoadSegment & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::RoadSegment & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::RoadSegment>()
{
  return "j2735_v2x_msgs::msg::RoadSegment";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::RoadSegment>()
{
  return "j2735_v2x_msgs/msg/RoadSegment";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::RoadSegment>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::RoadSegment>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::RoadSegment>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT__TRAITS_HPP_
