// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/NTCIPEssMobileFriction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/ntcip_ess_mobile_friction.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_MOBILE_FRICTION__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_MOBILE_FRICTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/ntcip_ess_mobile_friction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_NTCIPEssMobileFriction_ess_mobile_friction
{
public:
  Init_NTCIPEssMobileFriction_ess_mobile_friction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::NTCIPEssMobileFriction ess_mobile_friction(::j2735_v2x_msgs::msg::NTCIPEssMobileFriction::_ess_mobile_friction_type arg)
  {
    msg_.ess_mobile_friction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NTCIPEssMobileFriction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::NTCIPEssMobileFriction>()
{
  return j2735_v2x_msgs::msg::builder::Init_NTCIPEssMobileFriction_ess_mobile_friction();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_MOBILE_FRICTION__BUILDER_HPP_
