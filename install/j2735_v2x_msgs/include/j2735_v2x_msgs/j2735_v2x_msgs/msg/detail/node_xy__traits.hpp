// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/NodeXY.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_xy.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_XY__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_XY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/node_xy__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'delta'
#include "j2735_v2x_msgs/msg/detail/node_offset_point_xy__traits.hpp"
// Member 'attributes'
#include "j2735_v2x_msgs/msg/detail/node_attribute_set_xy__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeXY & msg,
  std::ostream & out)
{
  out << "{";
  // member: delta
  {
    out << "delta: ";
    to_flow_style_yaml(msg.delta, out);
    out << ", ";
  }

  // member: attributes
  {
    out << "attributes: ";
    to_flow_style_yaml(msg.attributes, out);
    out << ", ";
  }

  // member: attributes_exists
  {
    out << "attributes_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.attributes_exists, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NodeXY & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: delta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta:\n";
    to_block_style_yaml(msg.delta, out, indentation + 2);
  }

  // member: attributes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attributes:\n";
    to_block_style_yaml(msg.attributes, out, indentation + 2);
  }

  // member: attributes_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attributes_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.attributes_exists, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NodeXY & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::NodeXY & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::NodeXY & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::NodeXY>()
{
  return "j2735_v2x_msgs::msg::NodeXY";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::NodeXY>()
{
  return "j2735_v2x_msgs/msg/NodeXY";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::NodeXY>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::NodeAttributeSetXY>::value && has_fixed_size<j2735_v2x_msgs::msg::NodeOffsetPointXY>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::NodeXY>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::NodeAttributeSetXY>::value && has_bounded_size<j2735_v2x_msgs::msg::NodeOffsetPointXY>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::NodeXY>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_XY__TRAITS_HPP_
