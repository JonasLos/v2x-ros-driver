// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/TrailerHistoryPointList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/trailer_history_point_list.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT_LIST__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/trailer_history_point_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'trailer_history_points'
#include "j2735_v2x_msgs/msg/detail/trailer_history_point__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrailerHistoryPointList & msg,
  std::ostream & out)
{
  out << "{";
  // member: trailer_history_points
  {
    if (msg.trailer_history_points.size() == 0) {
      out << "trailer_history_points: []";
    } else {
      out << "trailer_history_points: [";
      size_t pending_items = msg.trailer_history_points.size();
      for (auto item : msg.trailer_history_points) {
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
  const TrailerHistoryPointList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: trailer_history_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trailer_history_points.size() == 0) {
      out << "trailer_history_points: []\n";
    } else {
      out << "trailer_history_points:\n";
      for (auto item : msg.trailer_history_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrailerHistoryPointList & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::TrailerHistoryPointList & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::TrailerHistoryPointList & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::TrailerHistoryPointList>()
{
  return "j2735_v2x_msgs::msg::TrailerHistoryPointList";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::TrailerHistoryPointList>()
{
  return "j2735_v2x_msgs/msg/TrailerHistoryPointList";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::TrailerHistoryPointList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::TrailerHistoryPointList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::TrailerHistoryPointList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT_LIST__TRAITS_HPP_
