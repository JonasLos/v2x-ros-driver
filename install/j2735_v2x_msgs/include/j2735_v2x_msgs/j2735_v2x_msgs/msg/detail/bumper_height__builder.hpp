// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/BumperHeight.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/bumper_height.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHT__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/bumper_height__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_BumperHeight_bumper_height
{
public:
  Init_BumperHeight_bumper_height()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::BumperHeight bumper_height(::j2735_v2x_msgs::msg::BumperHeight::_bumper_height_type arg)
  {
    msg_.bumper_height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BumperHeight msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::BumperHeight>()
{
  return j2735_v2x_msgs::msg::builder::Init_BumperHeight_bumper_height();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHT__BUILDER_HPP_
