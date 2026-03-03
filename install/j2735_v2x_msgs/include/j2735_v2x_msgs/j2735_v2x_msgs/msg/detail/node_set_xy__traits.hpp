// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/NodeSetXY.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_set_xy.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_SET_XY__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_SET_XY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/node_set_xy__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'node_set_xy'
#include "j2735_v2x_msgs/msg/detail/node_xy__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeSetXY & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_set_xy
  {
    if (msg.node_set_xy.size() == 0) {
      out << "node_set_xy: []";
    } else {
      out << "node_set_xy: [";
      size_t pending_items = msg.node_set_xy.size();
      for (auto item : msg.node_set_xy) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NodeSetXY & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_set_xy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.node_set_xy.size() == 0) {
      out << "node_set_xy: []\n";
    } else {
      out << "node_set_xy:\n";
      for (auto item : msg.node_set_xy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NodeSetXY & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::NodeSetXY & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::NodeSetXY & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::NodeSetXY>()
{
  return "j2735_v2x_msgs::msg::NodeSetXY";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::NodeSetXY>()
{
  return "j2735_v2x_msgs/msg/NodeSetXY";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::NodeSetXY>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::NodeSetXY>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::NodeSetXY>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_SET_XY__TRAITS_HPP_
