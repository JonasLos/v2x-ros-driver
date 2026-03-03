// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_driver_msgs:msg/ByteArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/msg/byte_array.hpp"


#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__BYTE_ARRAY__TRAITS_HPP_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__BYTE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "carma_driver_msgs/msg/detail/byte_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace carma_driver_msgs
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

}  // namespace carma_driver_msgs

namespace rosidl_generator_traits
{

[[deprecated("use carma_driver_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const carma_driver_msgs::msg::ByteArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  carma_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use carma_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const carma_driver_msgs::msg::ByteArray & msg)
{
  return carma_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<carma_driver_msgs::msg::ByteArray>()
{
  return "carma_driver_msgs::msg::ByteArray";
}

template<>
inline const char * name<carma_driver_msgs::msg::ByteArray>()
{
  return "carma_driver_msgs/msg/ByteArray";
}

template<>
struct has_fixed_size<carma_driver_msgs::msg::ByteArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_driver_msgs::msg::ByteArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_driver_msgs::msg::ByteArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__BYTE_ARRAY__TRAITS_HPP_
