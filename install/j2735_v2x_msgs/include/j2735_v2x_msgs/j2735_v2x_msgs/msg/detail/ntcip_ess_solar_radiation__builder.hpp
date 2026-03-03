// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/NTCIPEssSolarRadiation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/ntcip_ess_solar_radiation.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_SOLAR_RADIATION__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_SOLAR_RADIATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/ntcip_ess_solar_radiation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_NTCIPEssSolarRadiation_ess_solar_radiation
{
public:
  Init_NTCIPEssSolarRadiation_ess_solar_radiation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::NTCIPEssSolarRadiation ess_solar_radiation(::j2735_v2x_msgs::msg::NTCIPEssSolarRadiation::_ess_solar_radiation_type arg)
  {
    msg_.ess_solar_radiation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NTCIPEssSolarRadiation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::NTCIPEssSolarRadiation>()
{
  return j2735_v2x_msgs::msg::builder::Init_NTCIPEssSolarRadiation_ess_solar_radiation();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_SOLAR_RADIATION__BUILDER_HPP_
