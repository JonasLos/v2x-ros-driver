// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/PersonalCrossingInProgress.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/personal_crossing_in_progress.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_CROSSING_IN_PROGRESS__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_CROSSING_IN_PROGRESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/personal_crossing_in_progress__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PersonalCrossingInProgress_cross_state
{
public:
  Init_PersonalCrossingInProgress_cross_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::PersonalCrossingInProgress cross_state(::j2735_v2x_msgs::msg::PersonalCrossingInProgress::_cross_state_type arg)
  {
    msg_.cross_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PersonalCrossingInProgress msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::PersonalCrossingInProgress>()
{
  return j2735_v2x_msgs::msg::builder::Init_PersonalCrossingInProgress_cross_state();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_CROSSING_IN_PROGRESS__BUILDER_HPP_
