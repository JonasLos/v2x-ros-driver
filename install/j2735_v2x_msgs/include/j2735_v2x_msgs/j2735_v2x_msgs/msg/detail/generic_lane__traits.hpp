// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/GenericLane.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/generic_lane.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__GENERIC_LANE__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__GENERIC_LANE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/generic_lane__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'lane_attributes'
#include "j2735_v2x_msgs/msg/detail/lane_attributes__traits.hpp"
// Member 'maneuvers'
#include "j2735_v2x_msgs/msg/detail/allowed_maneuvers__traits.hpp"
// Member 'node_list'
#include "j2735_v2x_msgs/msg/detail/node_list_xy__traits.hpp"
// Member 'connects_to'
#include "j2735_v2x_msgs/msg/detail/connects_to_list__traits.hpp"
// Member 'overlay_lane_list'
#include "j2735_v2x_msgs/msg/detail/overlay_lane_list__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GenericLane & msg,
  std::ostream & out)
{
  out << "{";
  // member: lane_id
  {
    out << "lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_id, out);
    out << ", ";
  }

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

  // member: ingress_approach
  {
    out << "ingress_approach: ";
    rosidl_generator_traits::value_to_yaml(msg.ingress_approach, out);
    out << ", ";
  }

  // member: ingress_approach_exists
  {
    out << "ingress_approach_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.ingress_approach_exists, out);
    out << ", ";
  }

  // member: egress_approach
  {
    out << "egress_approach: ";
    rosidl_generator_traits::value_to_yaml(msg.egress_approach, out);
    out << ", ";
  }

  // member: egress_approach_exists
  {
    out << "egress_approach_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.egress_approach_exists, out);
    out << ", ";
  }

  // member: lane_attributes
  {
    out << "lane_attributes: ";
    to_flow_style_yaml(msg.lane_attributes, out);
    out << ", ";
  }

  // member: maneuvers
  {
    out << "maneuvers: ";
    to_flow_style_yaml(msg.maneuvers, out);
    out << ", ";
  }

  // member: maneuvers_exists
  {
    out << "maneuvers_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuvers_exists, out);
    out << ", ";
  }

  // member: node_list
  {
    out << "node_list: ";
    to_flow_style_yaml(msg.node_list, out);
    out << ", ";
  }

  // member: connects_to
  {
    out << "connects_to: ";
    to_flow_style_yaml(msg.connects_to, out);
    out << ", ";
  }

  // member: connects_to_exists
  {
    out << "connects_to_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.connects_to_exists, out);
    out << ", ";
  }

  // member: overlay_lane_list
  {
    out << "overlay_lane_list: ";
    to_flow_style_yaml(msg.overlay_lane_list, out);
    out << ", ";
  }

  // member: overlay_lane_list_exists
  {
    out << "overlay_lane_list_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.overlay_lane_list_exists, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenericLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_id, out);
    out << "\n";
  }

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

  // member: ingress_approach
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ingress_approach: ";
    rosidl_generator_traits::value_to_yaml(msg.ingress_approach, out);
    out << "\n";
  }

  // member: ingress_approach_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ingress_approach_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.ingress_approach_exists, out);
    out << "\n";
  }

  // member: egress_approach
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "egress_approach: ";
    rosidl_generator_traits::value_to_yaml(msg.egress_approach, out);
    out << "\n";
  }

  // member: egress_approach_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "egress_approach_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.egress_approach_exists, out);
    out << "\n";
  }

  // member: lane_attributes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_attributes:\n";
    to_block_style_yaml(msg.lane_attributes, out, indentation + 2);
  }

  // member: maneuvers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuvers:\n";
    to_block_style_yaml(msg.maneuvers, out, indentation + 2);
  }

  // member: maneuvers_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuvers_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuvers_exists, out);
    out << "\n";
  }

  // member: node_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_list:\n";
    to_block_style_yaml(msg.node_list, out, indentation + 2);
  }

  // member: connects_to
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connects_to:\n";
    to_block_style_yaml(msg.connects_to, out, indentation + 2);
  }

  // member: connects_to_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connects_to_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.connects_to_exists, out);
    out << "\n";
  }

  // member: overlay_lane_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overlay_lane_list:\n";
    to_block_style_yaml(msg.overlay_lane_list, out, indentation + 2);
  }

  // member: overlay_lane_list_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overlay_lane_list_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.overlay_lane_list_exists, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenericLane & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::GenericLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::GenericLane & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::GenericLane>()
{
  return "j2735_v2x_msgs::msg::GenericLane";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::GenericLane>()
{
  return "j2735_v2x_msgs/msg/GenericLane";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::GenericLane>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::GenericLane>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::GenericLane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__GENERIC_LANE__TRAITS_HPP_
