// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/NodeAttributeSetXY.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_attribute_set_xy.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/node_attribute_set_xy__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'local_node'
#include "j2735_v2x_msgs/msg/detail/node_attribute_xy_list__traits.hpp"
// Member 'disabled'
// Member 'enabled'
#include "j2735_v2x_msgs/msg/detail/segment_attribute_xy_list__traits.hpp"
// Member 'data'
#include "j2735_v2x_msgs/msg/detail/lane_data_attribute_list__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeAttributeSetXY & msg,
  std::ostream & out)
{
  out << "{";
  // member: local_node
  {
    out << "local_node: ";
    to_flow_style_yaml(msg.local_node, out);
    out << ", ";
  }

  // member: local_node_exists
  {
    out << "local_node_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.local_node_exists, out);
    out << ", ";
  }

  // member: disabled
  {
    out << "disabled: ";
    to_flow_style_yaml(msg.disabled, out);
    out << ", ";
  }

  // member: disabled_exists
  {
    out << "disabled_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.disabled_exists, out);
    out << ", ";
  }

  // member: enabled
  {
    out << "enabled: ";
    to_flow_style_yaml(msg.enabled, out);
    out << ", ";
  }

  // member: enabled_exists
  {
    out << "enabled_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled_exists, out);
    out << ", ";
  }

  // member: data
  {
    out << "data: ";
    to_flow_style_yaml(msg.data, out);
    out << ", ";
  }

  // member: data_exists
  {
    out << "data_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.data_exists, out);
    out << ", ";
  }

  // member: d_width
  {
    out << "d_width: ";
    rosidl_generator_traits::value_to_yaml(msg.d_width, out);
    out << ", ";
  }

  // member: d_width_exists
  {
    out << "d_width_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.d_width_exists, out);
    out << ", ";
  }

  // member: d_elevation
  {
    out << "d_elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.d_elevation, out);
    out << ", ";
  }

  // member: d_elevation_exists
  {
    out << "d_elevation_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.d_elevation_exists, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NodeAttributeSetXY & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: local_node
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_node:\n";
    to_block_style_yaml(msg.local_node, out, indentation + 2);
  }

  // member: local_node_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_node_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.local_node_exists, out);
    out << "\n";
  }

  // member: disabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disabled:\n";
    to_block_style_yaml(msg.disabled, out, indentation + 2);
  }

  // member: disabled_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disabled_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.disabled_exists, out);
    out << "\n";
  }

  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled:\n";
    to_block_style_yaml(msg.enabled, out, indentation + 2);
  }

  // member: enabled_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled_exists, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data:\n";
    to_block_style_yaml(msg.data, out, indentation + 2);
  }

  // member: data_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.data_exists, out);
    out << "\n";
  }

  // member: d_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d_width: ";
    rosidl_generator_traits::value_to_yaml(msg.d_width, out);
    out << "\n";
  }

  // member: d_width_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d_width_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.d_width_exists, out);
    out << "\n";
  }

  // member: d_elevation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d_elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.d_elevation, out);
    out << "\n";
  }

  // member: d_elevation_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d_elevation_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.d_elevation_exists, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NodeAttributeSetXY & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::NodeAttributeSetXY & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::NodeAttributeSetXY & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::NodeAttributeSetXY>()
{
  return "j2735_v2x_msgs::msg::NodeAttributeSetXY";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::NodeAttributeSetXY>()
{
  return "j2735_v2x_msgs/msg/NodeAttributeSetXY";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::NodeAttributeSetXY>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::LaneDataAttributeList>::value && has_fixed_size<j2735_v2x_msgs::msg::NodeAttributeXYList>::value && has_fixed_size<j2735_v2x_msgs::msg::SegmentAttributeXYList>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::NodeAttributeSetXY>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::LaneDataAttributeList>::value && has_bounded_size<j2735_v2x_msgs::msg::NodeAttributeXYList>::value && has_bounded_size<j2735_v2x_msgs::msg::SegmentAttributeXYList>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::NodeAttributeSetXY>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__TRAITS_HPP_
