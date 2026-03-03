// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/AccelerationConfidence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/acceleration_confidence.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ACCELERATION_CONFIDENCE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ACCELERATION_CONFIDENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/acceleration_confidence__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_AccelerationConfidence_acceleration_confidence
{
public:
  Init_AccelerationConfidence_acceleration_confidence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::AccelerationConfidence acceleration_confidence(::j2735_v2x_msgs::msg::AccelerationConfidence::_acceleration_confidence_type arg)
  {
    msg_.acceleration_confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::AccelerationConfidence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::AccelerationConfidence>()
{
  return j2735_v2x_msgs::msg::builder::Init_AccelerationConfidence_acceleration_confidence();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ACCELERATION_CONFIDENCE__BUILDER_HPP_
