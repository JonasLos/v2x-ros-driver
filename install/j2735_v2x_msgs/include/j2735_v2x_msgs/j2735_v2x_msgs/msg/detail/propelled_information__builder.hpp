// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/PropelledInformation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/propelled_information.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PROPELLED_INFORMATION__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PROPELLED_INFORMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/propelled_information__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PropelledInformation_motor
{
public:
  explicit Init_PropelledInformation_motor(::j2735_v2x_msgs::msg::PropelledInformation & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::PropelledInformation motor(::j2735_v2x_msgs::msg::PropelledInformation::_motor_type arg)
  {
    msg_.motor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PropelledInformation msg_;
};

class Init_PropelledInformation_animal
{
public:
  explicit Init_PropelledInformation_animal(::j2735_v2x_msgs::msg::PropelledInformation & msg)
  : msg_(msg)
  {}
  Init_PropelledInformation_motor animal(::j2735_v2x_msgs::msg::PropelledInformation::_animal_type arg)
  {
    msg_.animal = std::move(arg);
    return Init_PropelledInformation_motor(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PropelledInformation msg_;
};

class Init_PropelledInformation_human
{
public:
  explicit Init_PropelledInformation_human(::j2735_v2x_msgs::msg::PropelledInformation & msg)
  : msg_(msg)
  {}
  Init_PropelledInformation_animal human(::j2735_v2x_msgs::msg::PropelledInformation::_human_type arg)
  {
    msg_.human = std::move(arg);
    return Init_PropelledInformation_animal(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PropelledInformation msg_;
};

class Init_PropelledInformation_choice
{
public:
  Init_PropelledInformation_choice()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PropelledInformation_human choice(::j2735_v2x_msgs::msg::PropelledInformation::_choice_type arg)
  {
    msg_.choice = std::move(arg);
    return Init_PropelledInformation_human(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PropelledInformation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::PropelledInformation>()
{
  return j2735_v2x_msgs::msg::builder::Init_PropelledInformation_choice();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PROPELLED_INFORMATION__BUILDER_HPP_
