// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_msgs:msg/LightBarIndicatorControllers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/msg/light_bar_indicator_controllers.hpp"


#ifndef CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR_CONTROLLERS__TRAITS_HPP_
#define CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR_CONTROLLERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "carma_msgs/msg/detail/light_bar_indicator_controllers__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace carma_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LightBarIndicatorControllers & msg,
  std::ostream & out)
{
  out << "{";
  // member: green_solid_owner
  {
    out << "green_solid_owner: ";
    rosidl_generator_traits::value_to_yaml(msg.green_solid_owner, out);
    out << ", ";
  }

  // member: green_flash_owner
  {
    out << "green_flash_owner: ";
    rosidl_generator_traits::value_to_yaml(msg.green_flash_owner, out);
    out << ", ";
  }

  // member: yellow_sides_owner
  {
    out << "yellow_sides_owner: ";
    rosidl_generator_traits::value_to_yaml(msg.yellow_sides_owner, out);
    out << ", ";
  }

  // member: yellow_dim_owner
  {
    out << "yellow_dim_owner: ";
    rosidl_generator_traits::value_to_yaml(msg.yellow_dim_owner, out);
    out << ", ";
  }

  // member: yellow_flash_owner
  {
    out << "yellow_flash_owner: ";
    rosidl_generator_traits::value_to_yaml(msg.yellow_flash_owner, out);
    out << ", ";
  }

  // member: yellow_arrow_left_owner
  {
    out << "yellow_arrow_left_owner: ";
    rosidl_generator_traits::value_to_yaml(msg.yellow_arrow_left_owner, out);
    out << ", ";
  }

  // member: yellow_arrow_right_owner
  {
    out << "yellow_arrow_right_owner: ";
    rosidl_generator_traits::value_to_yaml(msg.yellow_arrow_right_owner, out);
    out << ", ";
  }

  // member: yellow_arrow_out_owner
  {
    out << "yellow_arrow_out_owner: ";
    rosidl_generator_traits::value_to_yaml(msg.yellow_arrow_out_owner, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LightBarIndicatorControllers & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: green_solid_owner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "green_solid_owner: ";
    rosidl_generator_traits::value_to_yaml(msg.green_solid_owner, out);
    out << "\n";
  }

  // member: green_flash_owner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "green_flash_owner: ";
    rosidl_generator_traits::value_to_yaml(msg.green_flash_owner, out);
    out << "\n";
  }

  // member: yellow_sides_owner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yellow_sides_owner: ";
    rosidl_generator_traits::value_to_yaml(msg.yellow_sides_owner, out);
    out << "\n";
  }

  // member: yellow_dim_owner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yellow_dim_owner: ";
    rosidl_generator_traits::value_to_yaml(msg.yellow_dim_owner, out);
    out << "\n";
  }

  // member: yellow_flash_owner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yellow_flash_owner: ";
    rosidl_generator_traits::value_to_yaml(msg.yellow_flash_owner, out);
    out << "\n";
  }

  // member: yellow_arrow_left_owner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yellow_arrow_left_owner: ";
    rosidl_generator_traits::value_to_yaml(msg.yellow_arrow_left_owner, out);
    out << "\n";
  }

  // member: yellow_arrow_right_owner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yellow_arrow_right_owner: ";
    rosidl_generator_traits::value_to_yaml(msg.yellow_arrow_right_owner, out);
    out << "\n";
  }

  // member: yellow_arrow_out_owner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yellow_arrow_out_owner: ";
    rosidl_generator_traits::value_to_yaml(msg.yellow_arrow_out_owner, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LightBarIndicatorControllers & msg, bool use_flow_style = false)
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

}  // namespace carma_msgs

namespace rosidl_generator_traits
{

[[deprecated("use carma_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const carma_msgs::msg::LightBarIndicatorControllers & msg,
  std::ostream & out, size_t indentation = 0)
{
  carma_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use carma_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const carma_msgs::msg::LightBarIndicatorControllers & msg)
{
  return carma_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<carma_msgs::msg::LightBarIndicatorControllers>()
{
  return "carma_msgs::msg::LightBarIndicatorControllers";
}

template<>
inline const char * name<carma_msgs::msg::LightBarIndicatorControllers>()
{
  return "carma_msgs/msg/LightBarIndicatorControllers";
}

template<>
struct has_fixed_size<carma_msgs::msg::LightBarIndicatorControllers>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_msgs::msg::LightBarIndicatorControllers>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_msgs::msg::LightBarIndicatorControllers>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR_CONTROLLERS__TRAITS_HPP_
