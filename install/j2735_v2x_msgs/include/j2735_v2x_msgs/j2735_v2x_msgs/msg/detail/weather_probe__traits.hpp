// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/WeatherProbe.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/weather_probe.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__WEATHER_PROBE__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__WEATHER_PROBE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/weather_probe__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'air_temp'
#include "j2735_v2x_msgs/msg/detail/ambient_air_temperature__traits.hpp"
// Member 'air_pressure'
#include "j2735_v2x_msgs/msg/detail/ambient_air_pressure__traits.hpp"
// Member 'rain_rates'
#include "j2735_v2x_msgs/msg/detail/wiper_set__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WeatherProbe & msg,
  std::ostream & out)
{
  out << "{";
  // member: presence_vector
  {
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << ", ";
  }

  // member: air_temp
  {
    out << "air_temp: ";
    to_flow_style_yaml(msg.air_temp, out);
    out << ", ";
  }

  // member: air_pressure
  {
    out << "air_pressure: ";
    to_flow_style_yaml(msg.air_pressure, out);
    out << ", ";
  }

  // member: rain_rates
  {
    out << "rain_rates: ";
    to_flow_style_yaml(msg.rain_rates, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WeatherProbe & msg,
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

  // member: air_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "air_temp:\n";
    to_block_style_yaml(msg.air_temp, out, indentation + 2);
  }

  // member: air_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "air_pressure:\n";
    to_block_style_yaml(msg.air_pressure, out, indentation + 2);
  }

  // member: rain_rates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rain_rates:\n";
    to_block_style_yaml(msg.rain_rates, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WeatherProbe & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::WeatherProbe & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::WeatherProbe & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::WeatherProbe>()
{
  return "j2735_v2x_msgs::msg::WeatherProbe";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::WeatherProbe>()
{
  return "j2735_v2x_msgs/msg/WeatherProbe";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::WeatherProbe>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::AmbientAirPressure>::value && has_fixed_size<j2735_v2x_msgs::msg::AmbientAirTemperature>::value && has_fixed_size<j2735_v2x_msgs::msg::WiperSet>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::WeatherProbe>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::AmbientAirPressure>::value && has_bounded_size<j2735_v2x_msgs::msg::AmbientAirTemperature>::value && has_bounded_size<j2735_v2x_msgs::msg::WiperSet>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::WeatherProbe>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__WEATHER_PROBE__TRAITS_HPP_
