// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/DDateTime.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/d_date_time.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__D_DATE_TIME__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__D_DATE_TIME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/d_date_time__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'year'
#include "j2735_v2x_msgs/msg/detail/d_year__traits.hpp"
// Member 'month'
#include "j2735_v2x_msgs/msg/detail/d_month__traits.hpp"
// Member 'day'
#include "j2735_v2x_msgs/msg/detail/d_day__traits.hpp"
// Member 'hour'
#include "j2735_v2x_msgs/msg/detail/d_hour__traits.hpp"
// Member 'minute'
#include "j2735_v2x_msgs/msg/detail/d_minute__traits.hpp"
// Member 'second'
#include "j2735_v2x_msgs/msg/detail/d_second__traits.hpp"
// Member 'offset'
#include "j2735_v2x_msgs/msg/detail/d_offset__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DDateTime & msg,
  std::ostream & out)
{
  out << "{";
  // member: presence_vector
  {
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << ", ";
  }

  // member: year
  {
    out << "year: ";
    to_flow_style_yaml(msg.year, out);
    out << ", ";
  }

  // member: month
  {
    out << "month: ";
    to_flow_style_yaml(msg.month, out);
    out << ", ";
  }

  // member: day
  {
    out << "day: ";
    to_flow_style_yaml(msg.day, out);
    out << ", ";
  }

  // member: hour
  {
    out << "hour: ";
    to_flow_style_yaml(msg.hour, out);
    out << ", ";
  }

  // member: minute
  {
    out << "minute: ";
    to_flow_style_yaml(msg.minute, out);
    out << ", ";
  }

  // member: second
  {
    out << "second: ";
    to_flow_style_yaml(msg.second, out);
    out << ", ";
  }

  // member: offset
  {
    out << "offset: ";
    to_flow_style_yaml(msg.offset, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DDateTime & msg,
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

  // member: year
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "year:\n";
    to_block_style_yaml(msg.year, out, indentation + 2);
  }

  // member: month
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "month:\n";
    to_block_style_yaml(msg.month, out, indentation + 2);
  }

  // member: day
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "day:\n";
    to_block_style_yaml(msg.day, out, indentation + 2);
  }

  // member: hour
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hour:\n";
    to_block_style_yaml(msg.hour, out, indentation + 2);
  }

  // member: minute
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "minute:\n";
    to_block_style_yaml(msg.minute, out, indentation + 2);
  }

  // member: second
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "second:\n";
    to_block_style_yaml(msg.second, out, indentation + 2);
  }

  // member: offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset:\n";
    to_block_style_yaml(msg.offset, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DDateTime & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::DDateTime & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::DDateTime & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::DDateTime>()
{
  return "j2735_v2x_msgs::msg::DDateTime";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::DDateTime>()
{
  return "j2735_v2x_msgs/msg/DDateTime";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::DDateTime>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::DDay>::value && has_fixed_size<j2735_v2x_msgs::msg::DHour>::value && has_fixed_size<j2735_v2x_msgs::msg::DMinute>::value && has_fixed_size<j2735_v2x_msgs::msg::DMonth>::value && has_fixed_size<j2735_v2x_msgs::msg::DOffset>::value && has_fixed_size<j2735_v2x_msgs::msg::DSecond>::value && has_fixed_size<j2735_v2x_msgs::msg::DYear>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::DDateTime>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::DDay>::value && has_bounded_size<j2735_v2x_msgs::msg::DHour>::value && has_bounded_size<j2735_v2x_msgs::msg::DMinute>::value && has_bounded_size<j2735_v2x_msgs::msg::DMonth>::value && has_bounded_size<j2735_v2x_msgs::msg::DOffset>::value && has_bounded_size<j2735_v2x_msgs::msg::DSecond>::value && has_bounded_size<j2735_v2x_msgs::msg::DYear>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::DDateTime>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__D_DATE_TIME__TRAITS_HPP_
