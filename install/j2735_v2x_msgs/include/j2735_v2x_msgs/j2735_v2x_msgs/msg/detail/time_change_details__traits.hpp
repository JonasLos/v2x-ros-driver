// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/TimeChangeDetails.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/time_change_details.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TIME_CHANGE_DETAILS__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TIME_CHANGE_DETAILS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/time_change_details__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TimeChangeDetails & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_time
  {
    out << "start_time: ";
    rosidl_generator_traits::value_to_yaml(msg.start_time, out);
    out << ", ";
  }

  // member: start_time_exists
  {
    out << "start_time_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.start_time_exists, out);
    out << ", ";
  }

  // member: min_end_time
  {
    out << "min_end_time: ";
    rosidl_generator_traits::value_to_yaml(msg.min_end_time, out);
    out << ", ";
  }

  // member: max_end_time
  {
    out << "max_end_time: ";
    rosidl_generator_traits::value_to_yaml(msg.max_end_time, out);
    out << ", ";
  }

  // member: max_end_time_exists
  {
    out << "max_end_time_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.max_end_time_exists, out);
    out << ", ";
  }

  // member: likely_time
  {
    out << "likely_time: ";
    rosidl_generator_traits::value_to_yaml(msg.likely_time, out);
    out << ", ";
  }

  // member: likely_time_exists
  {
    out << "likely_time_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.likely_time_exists, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: confidence_exists
  {
    out << "confidence_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence_exists, out);
    out << ", ";
  }

  // member: next_time
  {
    out << "next_time: ";
    rosidl_generator_traits::value_to_yaml(msg.next_time, out);
    out << ", ";
  }

  // member: next_time_exists
  {
    out << "next_time_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.next_time_exists, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TimeChangeDetails & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_time: ";
    rosidl_generator_traits::value_to_yaml(msg.start_time, out);
    out << "\n";
  }

  // member: start_time_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_time_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.start_time_exists, out);
    out << "\n";
  }

  // member: min_end_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_end_time: ";
    rosidl_generator_traits::value_to_yaml(msg.min_end_time, out);
    out << "\n";
  }

  // member: max_end_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_end_time: ";
    rosidl_generator_traits::value_to_yaml(msg.max_end_time, out);
    out << "\n";
  }

  // member: max_end_time_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_end_time_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.max_end_time_exists, out);
    out << "\n";
  }

  // member: likely_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "likely_time: ";
    rosidl_generator_traits::value_to_yaml(msg.likely_time, out);
    out << "\n";
  }

  // member: likely_time_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "likely_time_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.likely_time_exists, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: confidence_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence_exists, out);
    out << "\n";
  }

  // member: next_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "next_time: ";
    rosidl_generator_traits::value_to_yaml(msg.next_time, out);
    out << "\n";
  }

  // member: next_time_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "next_time_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.next_time_exists, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TimeChangeDetails & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::TimeChangeDetails & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::TimeChangeDetails & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::TimeChangeDetails>()
{
  return "j2735_v2x_msgs::msg::TimeChangeDetails";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::TimeChangeDetails>()
{
  return "j2735_v2x_msgs/msg/TimeChangeDetails";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::TimeChangeDetails>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::TimeChangeDetails>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<j2735_v2x_msgs::msg::TimeChangeDetails>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TIME_CHANGE_DETAILS__TRAITS_HPP_
