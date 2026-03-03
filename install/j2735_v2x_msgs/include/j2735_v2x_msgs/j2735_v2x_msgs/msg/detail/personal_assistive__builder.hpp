// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/PersonalAssistive.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/personal_assistive.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_ASSISTIVE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_ASSISTIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/personal_assistive__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PersonalAssistive_types
{
public:
  Init_PersonalAssistive_types()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::PersonalAssistive types(::j2735_v2x_msgs::msg::PersonalAssistive::_types_type arg)
  {
    msg_.types = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PersonalAssistive msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::PersonalAssistive>()
{
  return j2735_v2x_msgs::msg::builder::Init_PersonalAssistive_types();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_ASSISTIVE__BUILDER_HPP_
