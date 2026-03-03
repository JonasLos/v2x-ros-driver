// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/PathHistoryPointList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/path_history_point_list.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT_LIST__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/path_history_point_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'points'
#include "j2735_v2x_msgs/msg/detail/path_history_point__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PathHistoryPointList & msg,
  std::ostream & out)
{
  out << "{";
  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
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
  const PathHistoryPointList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathHistoryPointList & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::PathHistoryPointList & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::PathHistoryPointList & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::PathHistoryPointList>()
{
  return "j2735_v2x_msgs::msg::PathHistoryPointList";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::PathHistoryPointList>()
{
  return "j2735_v2x_msgs/msg/PathHistoryPointList";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::PathHistoryPointList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::PathHistoryPointList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::PathHistoryPointList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT_LIST__TRAITS_HPP_
