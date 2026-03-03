// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/DataParameters.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/data_parameters.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__DATA_PARAMETERS__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__DATA_PARAMETERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/data_parameters__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DataParameters & msg,
  std::ostream & out)
{
  out << "{";
  // member: process_method
  {
    out << "process_method: ";
    rosidl_generator_traits::value_to_yaml(msg.process_method, out);
    out << ", ";
  }

  // member: process_agency
  {
    out << "process_agency: ";
    rosidl_generator_traits::value_to_yaml(msg.process_agency, out);
    out << ", ";
  }

  // member: last_checked_date
  {
    out << "last_checked_date: ";
    rosidl_generator_traits::value_to_yaml(msg.last_checked_date, out);
    out << ", ";
  }

  // member: geoid_used
  {
    out << "geoid_used: ";
    rosidl_generator_traits::value_to_yaml(msg.geoid_used, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DataParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: process_method
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "process_method: ";
    rosidl_generator_traits::value_to_yaml(msg.process_method, out);
    out << "\n";
  }

  // member: process_agency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "process_agency: ";
    rosidl_generator_traits::value_to_yaml(msg.process_agency, out);
    out << "\n";
  }

  // member: last_checked_date
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_checked_date: ";
    rosidl_generator_traits::value_to_yaml(msg.last_checked_date, out);
    out << "\n";
  }

  // member: geoid_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "geoid_used: ";
    rosidl_generator_traits::value_to_yaml(msg.geoid_used, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DataParameters & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::DataParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::DataParameters & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::DataParameters>()
{
  return "j2735_v2x_msgs::msg::DataParameters";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::DataParameters>()
{
  return "j2735_v2x_msgs/msg/DataParameters";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::DataParameters>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::DataParameters>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::DataParameters>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__DATA_PARAMETERS__TRAITS_HPP_
