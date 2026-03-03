// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/ComputedLane.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/computed_lane.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__COMPUTED_LANE__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__COMPUTED_LANE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/computed_lane__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'offset_x_axis'
#include "j2735_v2x_msgs/msg/detail/offset_xaxis__traits.hpp"
// Member 'offset_y_axis'
#include "j2735_v2x_msgs/msg/detail/offset_yaxis__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ComputedLane & msg,
  std::ostream & out)
{
  out << "{";
  // member: reference_lane_id
  {
    out << "reference_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_lane_id, out);
    out << ", ";
  }

  // member: offset_x_axis
  {
    out << "offset_x_axis: ";
    to_flow_style_yaml(msg.offset_x_axis, out);
    out << ", ";
  }

  // member: offset_y_axis
  {
    out << "offset_y_axis: ";
    to_flow_style_yaml(msg.offset_y_axis, out);
    out << ", ";
  }

  // member: rotate_xy
  {
    out << "rotate_xy: ";
    rosidl_generator_traits::value_to_yaml(msg.rotate_xy, out);
    out << ", ";
  }

  // member: rotatexy_exists
  {
    out << "rotatexy_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.rotatexy_exists, out);
    out << ", ";
  }

  // member: scale_x_axis
  {
    out << "scale_x_axis: ";
    rosidl_generator_traits::value_to_yaml(msg.scale_x_axis, out);
    out << ", ";
  }

  // member: scale_x_axis_exists
  {
    out << "scale_x_axis_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.scale_x_axis_exists, out);
    out << ", ";
  }

  // member: scale_y_axis
  {
    out << "scale_y_axis: ";
    rosidl_generator_traits::value_to_yaml(msg.scale_y_axis, out);
    out << ", ";
  }

  // member: scale_y_axis_exists
  {
    out << "scale_y_axis_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.scale_y_axis_exists, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputedLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reference_lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_lane_id, out);
    out << "\n";
  }

  // member: offset_x_axis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_x_axis:\n";
    to_block_style_yaml(msg.offset_x_axis, out, indentation + 2);
  }

  // member: offset_y_axis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_y_axis:\n";
    to_block_style_yaml(msg.offset_y_axis, out, indentation + 2);
  }

  // member: rotate_xy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotate_xy: ";
    rosidl_generator_traits::value_to_yaml(msg.rotate_xy, out);
    out << "\n";
  }

  // member: rotatexy_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotatexy_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.rotatexy_exists, out);
    out << "\n";
  }

  // member: scale_x_axis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale_x_axis: ";
    rosidl_generator_traits::value_to_yaml(msg.scale_x_axis, out);
    out << "\n";
  }

  // member: scale_x_axis_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale_x_axis_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.scale_x_axis_exists, out);
    out << "\n";
  }

  // member: scale_y_axis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale_y_axis: ";
    rosidl_generator_traits::value_to_yaml(msg.scale_y_axis, out);
    out << "\n";
  }

  // member: scale_y_axis_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale_y_axis_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.scale_y_axis_exists, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputedLane & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::ComputedLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::ComputedLane & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::ComputedLane>()
{
  return "j2735_v2x_msgs::msg::ComputedLane";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::ComputedLane>()
{
  return "j2735_v2x_msgs/msg/ComputedLane";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::ComputedLane>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::OffsetXaxis>::value && has_fixed_size<j2735_v2x_msgs::msg::OffsetYaxis>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::ComputedLane>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::OffsetXaxis>::value && has_bounded_size<j2735_v2x_msgs::msg::OffsetYaxis>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::ComputedLane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__COMPUTED_LANE__TRAITS_HPP_
