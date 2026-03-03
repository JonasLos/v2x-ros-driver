// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/NodeOffsetPointXY.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_offset_point_xy.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/node_offset_point_xy__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'node_xy1'
#include "j2735_v2x_msgs/msg/detail/node_xy20b__traits.hpp"
// Member 'node_xy2'
#include "j2735_v2x_msgs/msg/detail/node_xy22b__traits.hpp"
// Member 'node_xy3'
#include "j2735_v2x_msgs/msg/detail/node_xy24b__traits.hpp"
// Member 'node_xy4'
#include "j2735_v2x_msgs/msg/detail/node_xy26b__traits.hpp"
// Member 'node_xy5'
#include "j2735_v2x_msgs/msg/detail/node_xy28b__traits.hpp"
// Member 'node_xy6'
#include "j2735_v2x_msgs/msg/detail/node_xy32b__traits.hpp"
// Member 'node_latlon'
#include "j2735_v2x_msgs/msg/detail/node_l_lm_d64b__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeOffsetPointXY & msg,
  std::ostream & out)
{
  out << "{";
  // member: choice
  {
    out << "choice: ";
    rosidl_generator_traits::value_to_yaml(msg.choice, out);
    out << ", ";
  }

  // member: node_xy1
  {
    out << "node_xy1: ";
    to_flow_style_yaml(msg.node_xy1, out);
    out << ", ";
  }

  // member: node_xy2
  {
    out << "node_xy2: ";
    to_flow_style_yaml(msg.node_xy2, out);
    out << ", ";
  }

  // member: node_xy3
  {
    out << "node_xy3: ";
    to_flow_style_yaml(msg.node_xy3, out);
    out << ", ";
  }

  // member: node_xy4
  {
    out << "node_xy4: ";
    to_flow_style_yaml(msg.node_xy4, out);
    out << ", ";
  }

  // member: node_xy5
  {
    out << "node_xy5: ";
    to_flow_style_yaml(msg.node_xy5, out);
    out << ", ";
  }

  // member: node_xy6
  {
    out << "node_xy6: ";
    to_flow_style_yaml(msg.node_xy6, out);
    out << ", ";
  }

  // member: node_latlon
  {
    out << "node_latlon: ";
    to_flow_style_yaml(msg.node_latlon, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NodeOffsetPointXY & msg,
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

  // member: node_xy1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_xy1:\n";
    to_block_style_yaml(msg.node_xy1, out, indentation + 2);
  }

  // member: node_xy2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_xy2:\n";
    to_block_style_yaml(msg.node_xy2, out, indentation + 2);
  }

  // member: node_xy3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_xy3:\n";
    to_block_style_yaml(msg.node_xy3, out, indentation + 2);
  }

  // member: node_xy4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_xy4:\n";
    to_block_style_yaml(msg.node_xy4, out, indentation + 2);
  }

  // member: node_xy5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_xy5:\n";
    to_block_style_yaml(msg.node_xy5, out, indentation + 2);
  }

  // member: node_xy6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_xy6:\n";
    to_block_style_yaml(msg.node_xy6, out, indentation + 2);
  }

  // member: node_latlon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_latlon:\n";
    to_block_style_yaml(msg.node_latlon, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NodeOffsetPointXY & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::NodeOffsetPointXY & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::NodeOffsetPointXY & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::NodeOffsetPointXY>()
{
  return "j2735_v2x_msgs::msg::NodeOffsetPointXY";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::NodeOffsetPointXY>()
{
  return "j2735_v2x_msgs/msg/NodeOffsetPointXY";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::NodeOffsetPointXY>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::NodeLLmD64b>::value && has_fixed_size<j2735_v2x_msgs::msg::NodeXY20b>::value && has_fixed_size<j2735_v2x_msgs::msg::NodeXY22b>::value && has_fixed_size<j2735_v2x_msgs::msg::NodeXY24b>::value && has_fixed_size<j2735_v2x_msgs::msg::NodeXY26b>::value && has_fixed_size<j2735_v2x_msgs::msg::NodeXY28b>::value && has_fixed_size<j2735_v2x_msgs::msg::NodeXY32b>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::NodeOffsetPointXY>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::NodeLLmD64b>::value && has_bounded_size<j2735_v2x_msgs::msg::NodeXY20b>::value && has_bounded_size<j2735_v2x_msgs::msg::NodeXY22b>::value && has_bounded_size<j2735_v2x_msgs::msg::NodeXY24b>::value && has_bounded_size<j2735_v2x_msgs::msg::NodeXY26b>::value && has_bounded_size<j2735_v2x_msgs::msg::NodeXY28b>::value && has_bounded_size<j2735_v2x_msgs::msg::NodeXY32b>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::NodeOffsetPointXY>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__TRAITS_HPP_
