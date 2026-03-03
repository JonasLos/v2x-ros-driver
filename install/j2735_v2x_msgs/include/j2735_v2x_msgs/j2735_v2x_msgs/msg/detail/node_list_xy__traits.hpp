// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/NodeListXY.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_list_xy.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_LIST_XY__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_LIST_XY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/node_list_xy__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'nodes'
#include "j2735_v2x_msgs/msg/detail/node_set_xy__traits.hpp"
// Member 'computed'
#include "j2735_v2x_msgs/msg/detail/computed_lane__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeListXY & msg,
  std::ostream & out)
{
  out << "{";
  // member: choice
  {
    out << "choice: ";
    rosidl_generator_traits::value_to_yaml(msg.choice, out);
    out << ", ";
  }

  // member: nodes
  {
    out << "nodes: ";
    to_flow_style_yaml(msg.nodes, out);
    out << ", ";
  }

  // member: computed
  {
    out << "computed: ";
    to_flow_style_yaml(msg.computed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NodeListXY & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "choice: ";
    rosidl_generator_traits::value_to_yaml(msg.choice, out);
    out << "\n";
  }

  // member: nodes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nodes:\n";
    to_block_style_yaml(msg.nodes, out, indentation + 2);
  }

  // member: computed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "computed:\n";
    to_block_style_yaml(msg.computed, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NodeListXY & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::NodeListXY & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::NodeListXY & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::NodeListXY>()
{
  return "j2735_v2x_msgs::msg::NodeListXY";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::NodeListXY>()
{
  return "j2735_v2x_msgs/msg/NodeListXY";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::NodeListXY>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::ComputedLane>::value && has_fixed_size<j2735_v2x_msgs::msg::NodeSetXY>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::NodeListXY>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::ComputedLane>::value && has_bounded_size<j2735_v2x_msgs::msg::NodeSetXY>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::NodeListXY>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_LIST_XY__TRAITS_HPP_
