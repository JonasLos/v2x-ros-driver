// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_driver_msgs:msg/TurnSignal.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/msg/turn_signal.hpp"


#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__TURN_SIGNAL__TRAITS_HPP_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__TURN_SIGNAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "carma_driver_msgs/msg/detail/turn_signal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace carma_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TurnSignal & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurnSignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurnSignal & msg, bool use_flow_style = false)
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
  const carma_driver_msgs::msg::TurnSignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  carma_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use carma_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const carma_driver_msgs::msg::TurnSignal & msg)
{
  return carma_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<carma_driver_msgs::msg::TurnSignal>()
{
  return "carma_driver_msgs::msg::TurnSignal";
}

template<>
inline const char * name<carma_driver_msgs::msg::TurnSignal>()
{
  return "carma_driver_msgs/msg/TurnSignal";
}

template<>
struct has_fixed_size<carma_driver_msgs::msg::TurnSignal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carma_driver_msgs::msg::TurnSignal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carma_driver_msgs::msg::TurnSignal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__TURN_SIGNAL__TRAITS_HPP_
