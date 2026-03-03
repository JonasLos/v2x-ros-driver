// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/RestrictionAppliesTo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/restriction_applies_to.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_APPLIES_TO__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_APPLIES_TO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/restriction_applies_to__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_RestrictionAppliesTo_restriction_applies_to
{
public:
  Init_RestrictionAppliesTo_restriction_applies_to()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::RestrictionAppliesTo restriction_applies_to(::j2735_v2x_msgs::msg::RestrictionAppliesTo::_restriction_applies_to_type arg)
  {
    msg_.restriction_applies_to = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::RestrictionAppliesTo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::RestrictionAppliesTo>()
{
  return j2735_v2x_msgs::msg::builder::Init_RestrictionAppliesTo_restriction_applies_to();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_APPLIES_TO__BUILDER_HPP_
