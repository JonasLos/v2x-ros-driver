// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/WeatherReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/weather_report.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__WEATHER_REPORT__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__WEATHER_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/weather_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'is_raining'
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_yes_no__traits.hpp"
// Member 'rain_rate'
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_rate__traits.hpp"
// Member 'precip_situation'
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_situation__traits.hpp"
// Member 'solar_radiation'
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_solar_radiation__traits.hpp"
// Member 'friction'
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_mobile_friction__traits.hpp"
// Member 'road_friction'
#include "j2735_v2x_msgs/msg/detail/coefficient_of_friction__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WeatherReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: presence_vector
  {
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << ", ";
  }

  // member: is_raining
  {
    out << "is_raining: ";
    to_flow_style_yaml(msg.is_raining, out);
    out << ", ";
  }

  // member: rain_rate
  {
    out << "rain_rate: ";
    to_flow_style_yaml(msg.rain_rate, out);
    out << ", ";
  }

  // member: precip_situation
  {
    out << "precip_situation: ";
    to_flow_style_yaml(msg.precip_situation, out);
    out << ", ";
  }

  // member: solar_radiation
  {
    out << "solar_radiation: ";
    to_flow_style_yaml(msg.solar_radiation, out);
    out << ", ";
  }

  // member: friction
  {
    out << "friction: ";
    to_flow_style_yaml(msg.friction, out);
    out << ", ";
  }

  // member: road_friction
  {
    out << "road_friction: ";
    to_flow_style_yaml(msg.road_friction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WeatherReport & msg,
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

  // member: is_raining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_raining:\n";
    to_block_style_yaml(msg.is_raining, out, indentation + 2);
  }

  // member: rain_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rain_rate:\n";
    to_block_style_yaml(msg.rain_rate, out, indentation + 2);
  }

  // member: precip_situation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "precip_situation:\n";
    to_block_style_yaml(msg.precip_situation, out, indentation + 2);
  }

  // member: solar_radiation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solar_radiation:\n";
    to_block_style_yaml(msg.solar_radiation, out, indentation + 2);
  }

  // member: friction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "friction:\n";
    to_block_style_yaml(msg.friction, out, indentation + 2);
  }

  // member: road_friction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_friction:\n";
    to_block_style_yaml(msg.road_friction, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WeatherReport & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::WeatherReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::WeatherReport & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::WeatherReport>()
{
  return "j2735_v2x_msgs::msg::WeatherReport";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::WeatherReport>()
{
  return "j2735_v2x_msgs/msg/WeatherReport";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::WeatherReport>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::CoefficientOfFriction>::value && has_fixed_size<j2735_v2x_msgs::msg::NTCIPEssMobileFriction>::value && has_fixed_size<j2735_v2x_msgs::msg::NTCIPEssPrecipRate>::value && has_fixed_size<j2735_v2x_msgs::msg::NTCIPEssPrecipSituation>::value && has_fixed_size<j2735_v2x_msgs::msg::NTCIPEssPrecipYesNo>::value && has_fixed_size<j2735_v2x_msgs::msg::NTCIPEssSolarRadiation>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::WeatherReport>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::CoefficientOfFriction>::value && has_bounded_size<j2735_v2x_msgs::msg::NTCIPEssMobileFriction>::value && has_bounded_size<j2735_v2x_msgs::msg::NTCIPEssPrecipRate>::value && has_bounded_size<j2735_v2x_msgs::msg::NTCIPEssPrecipSituation>::value && has_bounded_size<j2735_v2x_msgs::msg::NTCIPEssPrecipYesNo>::value && has_bounded_size<j2735_v2x_msgs::msg::NTCIPEssSolarRadiation>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::WeatherReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__WEATHER_REPORT__TRAITS_HPP_
