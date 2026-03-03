// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/SpeedandHeadingandThrottleConfidence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/speedand_headingand_throttle_confidence.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/speedand_headingand_throttle_confidence__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_SpeedandHeadingandThrottleConfidence_throttle
{
public:
  explicit Init_SpeedandHeadingandThrottleConfidence_throttle(::j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence throttle(::j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence msg_;
};

class Init_SpeedandHeadingandThrottleConfidence_speed
{
public:
  explicit Init_SpeedandHeadingandThrottleConfidence_speed(::j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence & msg)
  : msg_(msg)
  {}
  Init_SpeedandHeadingandThrottleConfidence_throttle speed(::j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_SpeedandHeadingandThrottleConfidence_throttle(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence msg_;
};

class Init_SpeedandHeadingandThrottleConfidence_heading
{
public:
  Init_SpeedandHeadingandThrottleConfidence_heading()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpeedandHeadingandThrottleConfidence_speed heading(::j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_SpeedandHeadingandThrottleConfidence_speed(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence>()
{
  return j2735_v2x_msgs::msg::builder::Init_SpeedandHeadingandThrottleConfidence_heading();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__BUILDER_HPP_
