// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/SpeedLimitList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/speed_limit_list.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_LIST__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/speed_limit_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_SpeedLimitList_speed_limits
{
public:
  Init_SpeedLimitList_speed_limits()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::SpeedLimitList speed_limits(::j2735_v2x_msgs::msg::SpeedLimitList::_speed_limits_type arg)
  {
    msg_.speed_limits = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SpeedLimitList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::SpeedLimitList>()
{
  return j2735_v2x_msgs::msg::builder::Init_SpeedLimitList_speed_limits();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_LIST__BUILDER_HPP_
