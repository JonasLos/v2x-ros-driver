// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/RestrictionUserType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/restriction_user_type.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_USER_TYPE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_USER_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/restriction_user_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_RestrictionUserType_basic_type
{
public:
  explicit Init_RestrictionUserType_basic_type(::j2735_v2x_msgs::msg::RestrictionUserType & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::RestrictionUserType basic_type(::j2735_v2x_msgs::msg::RestrictionUserType::_basic_type_type arg)
  {
    msg_.basic_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::RestrictionUserType msg_;
};

class Init_RestrictionUserType_choice
{
public:
  Init_RestrictionUserType_choice()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RestrictionUserType_basic_type choice(::j2735_v2x_msgs::msg::RestrictionUserType::_choice_type arg)
  {
    msg_.choice = std::move(arg);
    return Init_RestrictionUserType_basic_type(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::RestrictionUserType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::RestrictionUserType>()
{
  return j2735_v2x_msgs::msg::builder::Init_RestrictionUserType_choice();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_USER_TYPE__BUILDER_HPP_
