// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/WeatherReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/weather_report.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__WEATHER_REPORT__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__WEATHER_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/weather_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_WeatherReport_road_friction
{
public:
  explicit Init_WeatherReport_road_friction(::j2735_v2x_msgs::msg::WeatherReport & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::WeatherReport road_friction(::j2735_v2x_msgs::msg::WeatherReport::_road_friction_type arg)
  {
    msg_.road_friction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::WeatherReport msg_;
};

class Init_WeatherReport_friction
{
public:
  explicit Init_WeatherReport_friction(::j2735_v2x_msgs::msg::WeatherReport & msg)
  : msg_(msg)
  {}
  Init_WeatherReport_road_friction friction(::j2735_v2x_msgs::msg::WeatherReport::_friction_type arg)
  {
    msg_.friction = std::move(arg);
    return Init_WeatherReport_road_friction(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::WeatherReport msg_;
};

class Init_WeatherReport_solar_radiation
{
public:
  explicit Init_WeatherReport_solar_radiation(::j2735_v2x_msgs::msg::WeatherReport & msg)
  : msg_(msg)
  {}
  Init_WeatherReport_friction solar_radiation(::j2735_v2x_msgs::msg::WeatherReport::_solar_radiation_type arg)
  {
    msg_.solar_radiation = std::move(arg);
    return Init_WeatherReport_friction(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::WeatherReport msg_;
};

class Init_WeatherReport_precip_situation
{
public:
  explicit Init_WeatherReport_precip_situation(::j2735_v2x_msgs::msg::WeatherReport & msg)
  : msg_(msg)
  {}
  Init_WeatherReport_solar_radiation precip_situation(::j2735_v2x_msgs::msg::WeatherReport::_precip_situation_type arg)
  {
    msg_.precip_situation = std::move(arg);
    return Init_WeatherReport_solar_radiation(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::WeatherReport msg_;
};

class Init_WeatherReport_rain_rate
{
public:
  explicit Init_WeatherReport_rain_rate(::j2735_v2x_msgs::msg::WeatherReport & msg)
  : msg_(msg)
  {}
  Init_WeatherReport_precip_situation rain_rate(::j2735_v2x_msgs::msg::WeatherReport::_rain_rate_type arg)
  {
    msg_.rain_rate = std::move(arg);
    return Init_WeatherReport_precip_situation(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::WeatherReport msg_;
};

class Init_WeatherReport_is_raining
{
public:
  explicit Init_WeatherReport_is_raining(::j2735_v2x_msgs::msg::WeatherReport & msg)
  : msg_(msg)
  {}
  Init_WeatherReport_rain_rate is_raining(::j2735_v2x_msgs::msg::WeatherReport::_is_raining_type arg)
  {
    msg_.is_raining = std::move(arg);
    return Init_WeatherReport_rain_rate(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::WeatherReport msg_;
};

class Init_WeatherReport_presence_vector
{
public:
  Init_WeatherReport_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WeatherReport_is_raining presence_vector(::j2735_v2x_msgs::msg::WeatherReport::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_WeatherReport_is_raining(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::WeatherReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::WeatherReport>()
{
  return j2735_v2x_msgs::msg::builder::Init_WeatherReport_presence_vector();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__WEATHER_REPORT__BUILDER_HPP_
