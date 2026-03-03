// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/NodeAttributeXYList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_attribute_xy_list.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_XY_LIST__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_XY_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/node_attribute_xy_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'node_attribute_xy_list'
#include "j2735_v2x_msgs/msg/detail/node_attribute_xy__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeAttributeXYList & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_attribute_xy_list
  {
    if (msg.node_attribute_xy_list.size() == 0) {
      out << "node_attribute_xy_list: []";
    } else {
      out << "node_attribute_xy_list: [";
      size_t pending_items = msg.node_attribute_xy_list.size();
      for (auto item : msg.node_attribute_xy_list) {
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
  const NodeAttributeXYList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_attribute_xy_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.node_attribute_xy_list.size() == 0) {
      out << "node_attribute_xy_list: []\n";
    } else {
      out << "node_attribute_xy_list:\n";
      for (auto item : msg.node_attribute_xy_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NodeAttributeXYList & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::NodeAttributeXYList & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::NodeAttributeXYList & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::NodeAttributeXYList>()
{
  return "j2735_v2x_msgs::msg::NodeAttributeXYList";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::NodeAttributeXYList>()
{
  return "j2735_v2x_msgs/msg/NodeAttributeXYList";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::NodeAttributeXYList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::NodeAttributeXYList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::NodeAttributeXYList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_XY_LIST__TRAITS_HPP_
