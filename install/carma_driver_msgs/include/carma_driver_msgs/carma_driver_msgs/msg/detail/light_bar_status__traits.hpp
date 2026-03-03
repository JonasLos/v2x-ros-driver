// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_driver_msgs:msg/LightBarStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/msg/light_bar_status.hpp"


#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__LIGHT_BAR_STATUS__TRAITS_HPP_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__LIGHT_BAR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "carma_driver_msgs/msg/detail/light_bar_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace carma_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LightBarStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: green_solid
  {
    out << "green_solid: ";
    rosidl_generator_traits::value_to_yaml(msg.green_solid, out);
    out << ", ";
  }

  // member: yellow_solid
  {
    out << "yellow_solid: ";
    rosidl_generator_traits::value_to_yaml(msg.yellow_solid, out);
    out << ", ";
  }

  // member: right_arrow
  {
    out << "right_arrow: ";
    rosidl_generator_traits::value_to_yaml(msg.right_arrow, out);
    out << ", ";
  }

  // member: left_arrow
  {
    out << "left_arrow: ";
    rosidl_generator_traits::value_to_yaml(msg.left_arrow, out);
    out << ", ";
  }

  // member: sides_solid
  {
    out << "sides_solid: ";
    rosidl_generator_traits::value_to_yaml(msg.sides_solid, out);
    out << ", ";
  }

  // member: flash
  {
    out << "flash: ";
    rosidl_generator_traits::value_to_yaml(msg.flash, out);
    out << ", ";
  }

  // member: green_flash
  {
    out << "green_flash: ";
    rosidl_generator_traits::value_to_yaml(msg.green_flash, out);
    out << ", ";
  }

  // member: takedown
  {
    out << "takedown: ";
    rosidl_generator_traits::value_to_yaml(msg.takedown, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LightBarStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: green_solid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "green_solid: ";
    rosidl_generator_traits::value_to_yaml(msg.green_solid, out);
    out << "\n";
  }

  // member: yellow_solid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yellow_solid: ";
    rosidl_generator_traits::value_to_yaml(msg.yellow_solid, out);
    out << "\n";
  }

  // member: right_arrow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_arrow: ";
    rosidl_generator_traits::value_to_yaml(msg.right_arrow, out);
    out << "\n";
  }

  // member: left_arrow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_arrow: ";
    rosidl_generator_traits::value_to_yaml(msg.left_arrow, out);
    out << "\n";
  }

  // member: sides_solid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sides_solid: ";
    rosidl_generator_traits::value_to_yaml(msg.sides_solid, out);
    out << "\n";
  }

  // member: flash
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flash: ";
    rosidl_generator_traits::value_to_yaml(msg.flash, out);
    out << "\n";
  }

  // member: green_flash
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "green_flash: ";
    rosidl_generator_traits::value_to_yaml(msg.green_flash, out);
    out << "\n";
  }

  // member: takedown
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "takedown: ";
    rosidl_generator_traits::value_to_yaml(msg.takedown, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LightBarStatus & msg, bool use_flow_style = false)
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
  const carma_driver_msgs::msg::LightBarStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  carma_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use carma_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const carma_driver_msgs::msg::LightBarStatus & msg)
{
  return carma_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<carma_driver_msgs::msg::LightBarStatus>()
{
  return "carma_driver_msgs::msg::LightBarStatus";
}

template<>
inline const char * name<carma_driver_msgs::msg::LightBarStatus>()
{
  return "carma_driver_msgs/msg/LightBarStatus";
}

template<>
struct has_fixed_size<carma_driver_msgs::msg::LightBarStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carma_driver_msgs::msg::LightBarStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carma_driver_msgs::msg::LightBarStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__LIGHT_BAR_STATUS__TRAITS_HPP_
