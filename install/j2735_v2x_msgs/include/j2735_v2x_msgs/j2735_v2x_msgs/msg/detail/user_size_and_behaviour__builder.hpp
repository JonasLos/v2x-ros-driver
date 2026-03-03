// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/UserSizeAndBehaviour.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/user_size_and_behaviour.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__USER_SIZE_AND_BEHAVIOUR__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__USER_SIZE_AND_BEHAVIOUR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/user_size_and_behaviour__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_UserSizeAndBehaviour_sizes_and_behaviors
{
public:
  Init_UserSizeAndBehaviour_sizes_and_behaviors()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::UserSizeAndBehaviour sizes_and_behaviors(::j2735_v2x_msgs::msg::UserSizeAndBehaviour::_sizes_and_behaviors_type arg)
  {
    msg_.sizes_and_behaviors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::UserSizeAndBehaviour msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::UserSizeAndBehaviour>()
{
  return j2735_v2x_msgs::msg::builder::Init_UserSizeAndBehaviour_sizes_and_behaviors();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__USER_SIZE_AND_BEHAVIOUR__BUILDER_HPP_
