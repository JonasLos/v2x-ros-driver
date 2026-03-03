// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/YawRateConfidence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/yaw_rate_confidence.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__YAW_RATE_CONFIDENCE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__YAW_RATE_CONFIDENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/yaw_rate_confidence__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_YawRateConfidence_yaw_rate_confidence
{
public:
  Init_YawRateConfidence_yaw_rate_confidence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::YawRateConfidence yaw_rate_confidence(::j2735_v2x_msgs::msg::YawRateConfidence::_yaw_rate_confidence_type arg)
  {
    msg_.yaw_rate_confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::YawRateConfidence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::YawRateConfidence>()
{
  return j2735_v2x_msgs::msg::builder::Init_YawRateConfidence_yaw_rate_confidence();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__YAW_RATE_CONFIDENCE__BUILDER_HPP_
