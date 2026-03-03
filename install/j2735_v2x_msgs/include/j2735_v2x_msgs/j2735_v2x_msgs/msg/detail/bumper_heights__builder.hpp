// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/BumperHeights.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/bumper_heights.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHTS__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/bumper_heights__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_BumperHeights_rear
{
public:
  explicit Init_BumperHeights_rear(::j2735_v2x_msgs::msg::BumperHeights & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::BumperHeights rear(::j2735_v2x_msgs::msg::BumperHeights::_rear_type arg)
  {
    msg_.rear = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BumperHeights msg_;
};

class Init_BumperHeights_front
{
public:
  Init_BumperHeights_front()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BumperHeights_rear front(::j2735_v2x_msgs::msg::BumperHeights::_front_type arg)
  {
    msg_.front = std::move(arg);
    return Init_BumperHeights_rear(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BumperHeights msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::BumperHeights>()
{
  return j2735_v2x_msgs::msg::builder::Init_BumperHeights_front();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHTS__BUILDER_HPP_
