// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/WeatherProbe.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/weather_probe.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__WEATHER_PROBE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__WEATHER_PROBE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/weather_probe__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_WeatherProbe_rain_rates
{
public:
  explicit Init_WeatherProbe_rain_rates(::j2735_v2x_msgs::msg::WeatherProbe & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::WeatherProbe rain_rates(::j2735_v2x_msgs::msg::WeatherProbe::_rain_rates_type arg)
  {
    msg_.rain_rates = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::WeatherProbe msg_;
};

class Init_WeatherProbe_air_pressure
{
public:
  explicit Init_WeatherProbe_air_pressure(::j2735_v2x_msgs::msg::WeatherProbe & msg)
  : msg_(msg)
  {}
  Init_WeatherProbe_rain_rates air_pressure(::j2735_v2x_msgs::msg::WeatherProbe::_air_pressure_type arg)
  {
    msg_.air_pressure = std::move(arg);
    return Init_WeatherProbe_rain_rates(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::WeatherProbe msg_;
};

class Init_WeatherProbe_air_temp
{
public:
  explicit Init_WeatherProbe_air_temp(::j2735_v2x_msgs::msg::WeatherProbe & msg)
  : msg_(msg)
  {}
  Init_WeatherProbe_air_pressure air_temp(::j2735_v2x_msgs::msg::WeatherProbe::_air_temp_type arg)
  {
    msg_.air_temp = std::move(arg);
    return Init_WeatherProbe_air_pressure(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::WeatherProbe msg_;
};

class Init_WeatherProbe_presence_vector
{
public:
  Init_WeatherProbe_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WeatherProbe_air_temp presence_vector(::j2735_v2x_msgs::msg::WeatherProbe::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_WeatherProbe_air_temp(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::WeatherProbe msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::WeatherProbe>()
{
  return j2735_v2x_msgs::msg::builder::Init_WeatherProbe_presence_vector();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__WEATHER_PROBE__BUILDER_HPP_
