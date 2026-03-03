// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/ITISResponderGroupAffected.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/itis_responder_group_affected.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ITIS_RESPONDER_GROUP_AFFECTED__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ITIS_RESPONDER_GROUP_AFFECTED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/itis_responder_group_affected__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_ITISResponderGroupAffected_responder_group_affected
{
public:
  Init_ITISResponderGroupAffected_responder_group_affected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::ITISResponderGroupAffected responder_group_affected(::j2735_v2x_msgs::msg::ITISResponderGroupAffected::_responder_group_affected_type arg)
  {
    msg_.responder_group_affected = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ITISResponderGroupAffected msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::ITISResponderGroupAffected>()
{
  return j2735_v2x_msgs::msg::builder::Init_ITISResponderGroupAffected_responder_group_affected();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ITIS_RESPONDER_GROUP_AFFECTED__BUILDER_HPP_
