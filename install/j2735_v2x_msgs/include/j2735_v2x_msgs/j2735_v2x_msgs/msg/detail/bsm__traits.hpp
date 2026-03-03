// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/BSM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/bsm.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BSM__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BSM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/bsm__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'core_data'
#include "j2735_v2x_msgs/msg/detail/bsm_core_data__traits.hpp"
// Member 'part_ii'
#include "j2735_v2x_msgs/msg/detail/bsm_part_ii_extension__traits.hpp"
// Member 'regional'
#include "j2735_v2x_msgs/msg/detail/bsm_regional_extension__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BSM & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: core_data
  {
    out << "core_data: ";
    to_flow_style_yaml(msg.core_data, out);
    out << ", ";
  }

  // member: presence_vector
  {
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << ", ";
  }

  // member: part_ii
  {
    if (msg.part_ii.size() == 0) {
      out << "part_ii: []";
    } else {
      out << "part_ii: [";
      size_t pending_items = msg.part_ii.size();
      for (auto item : msg.part_ii) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: regional
  {
    if (msg.regional.size() == 0) {
      out << "regional: []";
    } else {
      out << "regional: [";
      size_t pending_items = msg.regional.size();
      for (auto item : msg.regional) {
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
  const BSM & msg,
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

  // member: core_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "core_data:\n";
    to_block_style_yaml(msg.core_data, out, indentation + 2);
  }

  // member: presence_vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << "\n";
  }

  // member: part_ii
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.part_ii.size() == 0) {
      out << "part_ii: []\n";
    } else {
      out << "part_ii:\n";
      for (auto item : msg.part_ii) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: regional
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.regional.size() == 0) {
      out << "regional: []\n";
    } else {
      out << "regional:\n";
      for (auto item : msg.regional) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BSM & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::BSM & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::BSM & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::BSM>()
{
  return "j2735_v2x_msgs::msg::BSM";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::BSM>()
{
  return "j2735_v2x_msgs/msg/BSM";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::BSM>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::BSM>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::BSM>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BSM__TRAITS_HPP_
