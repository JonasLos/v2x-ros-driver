// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/AmbientAirPressure.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/ambient_air_pressure.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_PRESSURE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_PRESSURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/ambient_air_pressure__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_AmbientAirPressure_pressure
{
public:
  Init_AmbientAirPressure_pressure()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::AmbientAirPressure pressure(::j2735_v2x_msgs::msg::AmbientAirPressure::_pressure_type arg)
  {
    msg_.pressure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::AmbientAirPressure msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::AmbientAirPressure>()
{
  return j2735_v2x_msgs::msg::builder::Init_AmbientAirPressure_pressure();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_PRESSURE__BUILDER_HPP_
