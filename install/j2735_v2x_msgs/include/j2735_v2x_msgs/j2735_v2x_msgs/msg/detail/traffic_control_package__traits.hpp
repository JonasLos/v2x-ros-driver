// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlPackage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_package.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PACKAGE__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PACKAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/traffic_control_package__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'tcids'
#include "j2735_v2x_msgs/msg/detail/id128b__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficControlPackage & msg,
  std::ostream & out)
{
  out << "{";
  // member: label
  {
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << ", ";
  }

  // member: label_exists
  {
    out << "label_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.label_exists, out);
    out << ", ";
  }

  // member: tcids
  {
    if (msg.tcids.size() == 0) {
      out << "tcids: []";
    } else {
      out << "tcids: [";
      size_t pending_items = msg.tcids.size();
      for (auto item : msg.tcids) {
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
  const TrafficControlPackage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << "\n";
  }

  // member: label_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.label_exists, out);
    out << "\n";
  }

  // member: tcids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tcids.size() == 0) {
      out << "tcids: []\n";
    } else {
      out << "tcids:\n";
      for (auto item : msg.tcids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficControlPackage & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::TrafficControlPackage & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::TrafficControlPackage & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::TrafficControlPackage>()
{
  return "j2735_v2x_msgs::msg::TrafficControlPackage";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::TrafficControlPackage>()
{
  return "j2735_v2x_msgs/msg/TrafficControlPackage";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::TrafficControlPackage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::TrafficControlPackage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::TrafficControlPackage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PACKAGE__TRAITS_HPP_
