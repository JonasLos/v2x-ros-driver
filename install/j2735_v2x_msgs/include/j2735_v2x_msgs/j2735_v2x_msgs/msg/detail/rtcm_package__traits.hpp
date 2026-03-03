// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/RTCMPackage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/rtcm_package.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__RTCM_PACKAGE__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__RTCM_PACKAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/rtcm_package__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'rtcm_header'
#include "j2735_v2x_msgs/msg/detail/rtcm_header__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RTCMPackage & msg,
  std::ostream & out)
{
  out << "{";
  // member: presence_vector
  {
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << ", ";
  }

  // member: rtcm_header
  {
    out << "rtcm_header: ";
    to_flow_style_yaml(msg.rtcm_header, out);
    out << ", ";
  }

  // member: messages
  {
    if (msg.messages.size() == 0) {
      out << "messages: []";
    } else {
      out << "messages: [";
      size_t pending_items = msg.messages.size();
      for (auto item : msg.messages) {
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
  const RTCMPackage & msg,
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

  // member: rtcm_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rtcm_header:\n";
    to_block_style_yaml(msg.rtcm_header, out, indentation + 2);
  }

  // member: messages
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.messages.size() == 0) {
      out << "messages: []\n";
    } else {
      out << "messages:\n";
      for (auto item : msg.messages) {
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

inline std::string to_yaml(const RTCMPackage & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::RTCMPackage & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::RTCMPackage & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::RTCMPackage>()
{
  return "j2735_v2x_msgs::msg::RTCMPackage";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::RTCMPackage>()
{
  return "j2735_v2x_msgs/msg/RTCMPackage";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::RTCMPackage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::RTCMPackage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::RTCMPackage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__RTCM_PACKAGE__TRAITS_HPP_
