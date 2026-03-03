// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/intersection_geometry.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/intersection_geometry__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'id'
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__traits.hpp"
// Member 'ref_point'
#include "j2735_v2x_msgs/msg/detail/position3_d__traits.hpp"
// Member 'speed_limits'
#include "j2735_v2x_msgs/msg/detail/speed_limit_list__traits.hpp"
// Member 'lane_set'
#include "j2735_v2x_msgs/msg/detail/lane_list__traits.hpp"
// Member 'preempt_priority_data'
#include "j2735_v2x_msgs/msg/detail/preempt_priority_list__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IntersectionGeometry & msg,
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

  // member: lane_set
  {
    out << "lane_set: ";
    to_flow_style_yaml(msg.lane_set, out);
    out << ", ";
  }

  // member: preempt_priority_data
  {
    out << "preempt_priority_data: ";
    to_flow_style_yaml(msg.preempt_priority_data, out);
    out << ", ";
  }

  // member: preempt_priority_data_exists
  {
    out << "preempt_priority_data_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.preempt_priority_data_exists, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IntersectionGeometry & msg,
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

  // member: lane_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_set:\n";
    to_block_style_yaml(msg.lane_set, out, indentation + 2);
  }

  // member: preempt_priority_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preempt_priority_data:\n";
    to_block_style_yaml(msg.preempt_priority_data, out, indentation + 2);
  }

  // member: preempt_priority_data_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preempt_priority_data_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.preempt_priority_data_exists, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IntersectionGeometry & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::IntersectionGeometry & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::IntersectionGeometry & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::IntersectionGeometry>()
{
  return "j2735_v2x_msgs::msg::IntersectionGeometry";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::IntersectionGeometry>()
{
  return "j2735_v2x_msgs/msg/IntersectionGeometry";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::IntersectionGeometry>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::IntersectionGeometry>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::IntersectionGeometry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__TRAITS_HPP_
