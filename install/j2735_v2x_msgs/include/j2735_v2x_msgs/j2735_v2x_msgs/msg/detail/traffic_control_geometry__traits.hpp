// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlGeometry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_geometry.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_GEOMETRY__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_GEOMETRY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/traffic_control_geometry__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'nodes'
#include "j2735_v2x_msgs/msg/detail/path_node__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficControlGeometry & msg,
  std::ostream & out)
{
  out << "{";
  // member: proj
  {
    out << "proj: ";
    rosidl_generator_traits::value_to_yaml(msg.proj, out);
    out << ", ";
  }

  // member: datum
  {
    out << "datum: ";
    rosidl_generator_traits::value_to_yaml(msg.datum, out);
    out << ", ";
  }

  // member: reftime
  {
    out << "reftime: ";
    rosidl_generator_traits::value_to_yaml(msg.reftime, out);
    out << ", ";
  }

  // member: reflon
  {
    out << "reflon: ";
    rosidl_generator_traits::value_to_yaml(msg.reflon, out);
    out << ", ";
  }

  // member: reflat
  {
    out << "reflat: ";
    rosidl_generator_traits::value_to_yaml(msg.reflat, out);
    out << ", ";
  }

  // member: refelv
  {
    out << "refelv: ";
    rosidl_generator_traits::value_to_yaml(msg.refelv, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: nodes
  {
    if (msg.nodes.size() == 0) {
      out << "nodes: []";
    } else {
      out << "nodes: [";
      size_t pending_items = msg.nodes.size();
      for (auto item : msg.nodes) {
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
  const TrafficControlGeometry & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: proj
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "proj: ";
    rosidl_generator_traits::value_to_yaml(msg.proj, out);
    out << "\n";
  }

  // member: datum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "datum: ";
    rosidl_generator_traits::value_to_yaml(msg.datum, out);
    out << "\n";
  }

  // member: reftime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reftime: ";
    rosidl_generator_traits::value_to_yaml(msg.reftime, out);
    out << "\n";
  }

  // member: reflon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reflon: ";
    rosidl_generator_traits::value_to_yaml(msg.reflon, out);
    out << "\n";
  }

  // member: reflat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reflat: ";
    rosidl_generator_traits::value_to_yaml(msg.reflat, out);
    out << "\n";
  }

  // member: refelv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "refelv: ";
    rosidl_generator_traits::value_to_yaml(msg.refelv, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: nodes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.nodes.size() == 0) {
      out << "nodes: []\n";
    } else {
      out << "nodes:\n";
      for (auto item : msg.nodes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficControlGeometry & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::TrafficControlGeometry & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::TrafficControlGeometry & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::TrafficControlGeometry>()
{
  return "j2735_v2x_msgs::msg::TrafficControlGeometry";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::TrafficControlGeometry>()
{
  return "j2735_v2x_msgs/msg/TrafficControlGeometry";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::TrafficControlGeometry>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::TrafficControlGeometry>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::TrafficControlGeometry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_GEOMETRY__TRAITS_HPP_
