// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/PathHistory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/path_history.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/path_history__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'crumb_data'
#include "j2735_v2x_msgs/msg/detail/path_history_point_list__traits.hpp"
// Member 'initial_position'
#include "j2735_v2x_msgs/msg/detail/full_position_vector__traits.hpp"
// Member 'curr_gnss_status'
#include "j2735_v2x_msgs/msg/detail/gnss_status__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PathHistory & msg,
  std::ostream & out)
{
  out << "{";
  // member: presence_vector
  {
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << ", ";
  }

  // member: crumb_data
  {
    out << "crumb_data: ";
    to_flow_style_yaml(msg.crumb_data, out);
    out << ", ";
  }

  // member: initial_position
  {
    out << "initial_position: ";
    to_flow_style_yaml(msg.initial_position, out);
    out << ", ";
  }

  // member: curr_gnss_status
  {
    out << "curr_gnss_status: ";
    to_flow_style_yaml(msg.curr_gnss_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathHistory & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: presence_vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << "\n";
  }

  // member: crumb_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crumb_data:\n";
    to_block_style_yaml(msg.crumb_data, out, indentation + 2);
  }

  // member: initial_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_position:\n";
    to_block_style_yaml(msg.initial_position, out, indentation + 2);
  }

  // member: curr_gnss_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curr_gnss_status:\n";
    to_block_style_yaml(msg.curr_gnss_status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathHistory & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::PathHistory & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::PathHistory & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::PathHistory>()
{
  return "j2735_v2x_msgs::msg::PathHistory";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::PathHistory>()
{
  return "j2735_v2x_msgs/msg/PathHistory";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::PathHistory>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::FullPositionVector>::value && has_fixed_size<j2735_v2x_msgs::msg::GNSSStatus>::value && has_fixed_size<j2735_v2x_msgs::msg::PathHistoryPointList>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::PathHistory>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::FullPositionVector>::value && has_bounded_size<j2735_v2x_msgs::msg::GNSSStatus>::value && has_bounded_size<j2735_v2x_msgs::msg::PathHistoryPointList>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::PathHistory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY__TRAITS_HPP_
