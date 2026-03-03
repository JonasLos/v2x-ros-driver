// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlRequestV01.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_request_v01.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_V01__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_V01__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/traffic_control_request_v01__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'reqid'
#include "j2735_v2x_msgs/msg/detail/id64b__traits.hpp"
// Member 'bounds'
#include "j2735_v2x_msgs/msg/detail/traffic_control_bounds__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficControlRequestV01 & msg,
  std::ostream & out)
{
  out << "{";
  // member: reqid
  {
    out << "reqid: ";
    to_flow_style_yaml(msg.reqid, out);
    out << ", ";
  }

  // member: reqseq
  {
    out << "reqseq: ";
    rosidl_generator_traits::value_to_yaml(msg.reqseq, out);
    out << ", ";
  }

  // member: scale
  {
    out << "scale: ";
    rosidl_generator_traits::value_to_yaml(msg.scale, out);
    out << ", ";
  }

  // member: bounds
  {
    if (msg.bounds.size() == 0) {
      out << "bounds: []";
    } else {
      out << "bounds: [";
      size_t pending_items = msg.bounds.size();
      for (auto item : msg.bounds) {
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
  const TrafficControlRequestV01 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reqid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reqid:\n";
    to_block_style_yaml(msg.reqid, out, indentation + 2);
  }

  // member: reqseq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reqseq: ";
    rosidl_generator_traits::value_to_yaml(msg.reqseq, out);
    out << "\n";
  }

  // member: scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale: ";
    rosidl_generator_traits::value_to_yaml(msg.scale, out);
    out << "\n";
  }

  // member: bounds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bounds.size() == 0) {
      out << "bounds: []\n";
    } else {
      out << "bounds:\n";
      for (auto item : msg.bounds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficControlRequestV01 & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::TrafficControlRequestV01 & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::TrafficControlRequestV01 & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::TrafficControlRequestV01>()
{
  return "j2735_v2x_msgs::msg::TrafficControlRequestV01";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::TrafficControlRequestV01>()
{
  return "j2735_v2x_msgs/msg/TrafficControlRequestV01";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::TrafficControlRequestV01>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::TrafficControlRequestV01>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::TrafficControlRequestV01>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_V01__TRAITS_HPP_
