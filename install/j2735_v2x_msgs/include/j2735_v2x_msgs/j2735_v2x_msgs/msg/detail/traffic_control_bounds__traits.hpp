// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlBounds.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_bounds.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_BOUNDS__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_BOUNDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/traffic_control_bounds__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'offsets'
#include "j2735_v2x_msgs/msg/detail/offset_point__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficControlBounds & msg,
  std::ostream & out)
{
  out << "{";
  // member: oldest
  {
    out << "oldest: ";
    rosidl_generator_traits::value_to_yaml(msg.oldest, out);
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

  // member: offsets
  {
    if (msg.offsets.size() == 0) {
      out << "offsets: []";
    } else {
      out << "offsets: [";
      size_t pending_items = msg.offsets.size();
      for (auto item : msg.offsets) {
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
  const TrafficControlBounds & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: oldest
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "oldest: ";
    rosidl_generator_traits::value_to_yaml(msg.oldest, out);
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

  // member: offsets
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.offsets.size() == 0) {
      out << "offsets: []\n";
    } else {
      out << "offsets:\n";
      for (auto item : msg.offsets) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficControlBounds & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::TrafficControlBounds & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::TrafficControlBounds & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::TrafficControlBounds>()
{
  return "j2735_v2x_msgs::msg::TrafficControlBounds";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::TrafficControlBounds>()
{
  return "j2735_v2x_msgs/msg/TrafficControlBounds";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::TrafficControlBounds>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::OffsetPoint>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::TrafficControlBounds>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::OffsetPoint>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::TrafficControlBounds>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_BOUNDS__TRAITS_HPP_
