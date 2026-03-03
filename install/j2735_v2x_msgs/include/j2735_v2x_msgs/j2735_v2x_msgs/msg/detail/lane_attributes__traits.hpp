// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/LaneAttributes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_attributes.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/lane_attributes__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'directional_use'
#include "j2735_v2x_msgs/msg/detail/lane_direction__traits.hpp"
// Member 'shared_with'
#include "j2735_v2x_msgs/msg/detail/lane_sharing__traits.hpp"
// Member 'lane_type'
#include "j2735_v2x_msgs/msg/detail/lane_type_attributes__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneAttributes & msg,
  std::ostream & out)
{
  out << "{";
  // member: directional_use
  {
    out << "directional_use: ";
    to_flow_style_yaml(msg.directional_use, out);
    out << ", ";
  }

  // member: shared_with
  {
    out << "shared_with: ";
    to_flow_style_yaml(msg.shared_with, out);
    out << ", ";
  }

  // member: lane_type
  {
    out << "lane_type: ";
    to_flow_style_yaml(msg.lane_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneAttributes & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: directional_use
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "directional_use:\n";
    to_block_style_yaml(msg.directional_use, out, indentation + 2);
  }

  // member: shared_with
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shared_with:\n";
    to_block_style_yaml(msg.shared_with, out, indentation + 2);
  }

  // member: lane_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_type:\n";
    to_block_style_yaml(msg.lane_type, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneAttributes & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::LaneAttributes & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::LaneAttributes & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::LaneAttributes>()
{
  return "j2735_v2x_msgs::msg::LaneAttributes";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::LaneAttributes>()
{
  return "j2735_v2x_msgs/msg/LaneAttributes";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::LaneAttributes>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::LaneDirection>::value && has_fixed_size<j2735_v2x_msgs::msg::LaneSharing>::value && has_fixed_size<j2735_v2x_msgs::msg::LaneTypeAttributes>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::LaneAttributes>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::LaneDirection>::value && has_bounded_size<j2735_v2x_msgs::msg::LaneSharing>::value && has_bounded_size<j2735_v2x_msgs::msg::LaneTypeAttributes>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::LaneAttributes>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES__TRAITS_HPP_
