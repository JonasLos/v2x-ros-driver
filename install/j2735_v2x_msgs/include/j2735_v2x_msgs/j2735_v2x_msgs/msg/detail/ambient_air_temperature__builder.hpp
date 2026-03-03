// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/AmbientAirTemperature.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/ambient_air_temperature.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_TEMPERATURE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_TEMPERATURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/ambient_air_temperature__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_AmbientAirTemperature_temperature
{
public:
  Init_AmbientAirTemperature_temperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::AmbientAirTemperature temperature(::j2735_v2x_msgs::msg::AmbientAirTemperature::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::AmbientAirTemperature msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::AmbientAirTemperature>()
{
  return j2735_v2x_msgs::msg::builder::Init_AmbientAirTemperature_temperature();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_TEMPERATURE__BUILDER_HPP_
