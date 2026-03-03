// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlParams.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_params.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PARAMS__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/traffic_control_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'vclasses'
#include "j2735_v2x_msgs/msg/detail/traffic_control_veh_class__traits.hpp"
// Member 'schedule'
#include "j2735_v2x_msgs/msg/detail/traffic_control_schedule__traits.hpp"
// Member 'detail'
#include "j2735_v2x_msgs/msg/detail/traffic_control_detail__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficControlParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: vclasses
  {
    if (msg.vclasses.size() == 0) {
      out << "vclasses: []";
    } else {
      out << "vclasses: [";
      size_t pending_items = msg.vclasses.size();
      for (auto item : msg.vclasses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: schedule
  {
    out << "schedule: ";
    to_flow_style_yaml(msg.schedule, out);
    out << ", ";
  }

  // member: regulatory
  {
    out << "regulatory: ";
    rosidl_generator_traits::value_to_yaml(msg.regulatory, out);
    out << ", ";
  }

  // member: detail
  {
    out << "detail: ";
    to_flow_style_yaml(msg.detail, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrafficControlParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vclasses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vclasses.size() == 0) {
      out << "vclasses: []\n";
    } else {
      out << "vclasses:\n";
      for (auto item : msg.vclasses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: schedule
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "schedule:\n";
    to_block_style_yaml(msg.schedule, out, indentation + 2);
  }

  // member: regulatory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "regulatory: ";
    rosidl_generator_traits::value_to_yaml(msg.regulatory, out);
    out << "\n";
  }

  // member: detail
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detail:\n";
    to_block_style_yaml(msg.detail, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficControlParams & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::TrafficControlParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::TrafficControlParams & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::TrafficControlParams>()
{
  return "j2735_v2x_msgs::msg::TrafficControlParams";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::TrafficControlParams>()
{
  return "j2735_v2x_msgs/msg/TrafficControlParams";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::TrafficControlParams>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::TrafficControlParams>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::TrafficControlParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PARAMS__TRAITS_HPP_
