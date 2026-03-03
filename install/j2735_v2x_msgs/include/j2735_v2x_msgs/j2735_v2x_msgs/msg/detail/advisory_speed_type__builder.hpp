// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/AdvisorySpeedType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/advisory_speed_type.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED_TYPE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/advisory_speed_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_AdvisorySpeedType_advisory_speed_type
{
public:
  Init_AdvisorySpeedType_advisory_speed_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::AdvisorySpeedType advisory_speed_type(::j2735_v2x_msgs::msg::AdvisorySpeedType::_advisory_speed_type_type arg)
  {
    msg_.advisory_speed_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::AdvisorySpeedType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::AdvisorySpeedType>()
{
  return j2735_v2x_msgs::msg::builder::Init_AdvisorySpeedType_advisory_speed_type();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED_TYPE__BUILDER_HPP_
