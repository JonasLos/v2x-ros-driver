// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/NTCIPEssPrecipSituation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/ntcip_ess_precip_situation.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_SITUATION__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_SITUATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_situation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_NTCIPEssPrecipSituation_ess_precip_situation
{
public:
  Init_NTCIPEssPrecipSituation_ess_precip_situation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::NTCIPEssPrecipSituation ess_precip_situation(::j2735_v2x_msgs::msg::NTCIPEssPrecipSituation::_ess_precip_situation_type arg)
  {
    msg_.ess_precip_situation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NTCIPEssPrecipSituation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::NTCIPEssPrecipSituation>()
{
  return j2735_v2x_msgs::msg::builder::Init_NTCIPEssPrecipSituation_ess_precip_situation();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_SITUATION__BUILDER_HPP_
