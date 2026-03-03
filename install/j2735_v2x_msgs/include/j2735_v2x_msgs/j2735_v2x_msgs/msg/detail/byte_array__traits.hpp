// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/ByteArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/byte_array.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BYTE_ARRAY__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BYTE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/byte_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ByteArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: message_type
  {
    out << "message_type: ";
    rosidl_generator_traits::value_to_yaml(msg.message_type, out);
    out << ", ";
  }

  // member: content
  {
    if (msg.content.size() == 0) {
      out << "content: []";
    } else {
      out << "content: [";
      size_t pending_items = msg.content.size();
      for (auto item : msg.content) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const ByteArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: message_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_type: ";
    rosidl_generator_traits::value_to_yaml(msg.message_type, out);
    out << "\n";
  }

  // member: content
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.content.size() == 0) {
      out << "content: []\n";
    } else {
      out << "content:\n";
      for (auto item : msg.content) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ByteArray & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::ByteArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::ByteArray & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::ByteArray>()
{
  return "j2735_v2x_msgs::msg::ByteArray";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::ByteArray>()
{
  return "j2735_v2x_msgs/msg/ByteArray";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::ByteArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::ByteArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::ByteArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BYTE_ARRAY__TRAITS_HPP_
