// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_msgs:msg/UIInstructions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/msg/ui_instructions.hpp"


#ifndef CARMA_MSGS__MSG__DETAIL__UI_INSTRUCTIONS__BUILDER_HPP_
#define CARMA_MSGS__MSG__DETAIL__UI_INSTRUCTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "carma_msgs/msg/detail/ui_instructions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace carma_msgs
{

namespace msg
{

namespace builder
{

class Init_UIInstructions_response_service
{
public:
  explicit Init_UIInstructions_response_service(::carma_msgs::msg::UIInstructions & msg)
  : msg_(msg)
  {}
  ::carma_msgs::msg::UIInstructions response_service(::carma_msgs::msg::UIInstructions::_response_service_type arg)
  {
    msg_.response_service = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_msgs::msg::UIInstructions msg_;
};

class Init_UIInstructions_type
{
public:
  explicit Init_UIInstructions_type(::carma_msgs::msg::UIInstructions & msg)
  : msg_(msg)
  {}
  Init_UIInstructions_response_service type(::carma_msgs::msg::UIInstructions::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_UIInstructions_response_service(msg_);
  }

private:
  ::carma_msgs::msg::UIInstructions msg_;
};

class Init_UIInstructions_msg
{
public:
  explicit Init_UIInstructions_msg(::carma_msgs::msg::UIInstructions & msg)
  : msg_(msg)
  {}
  Init_UIInstructions_type msg(::carma_msgs::msg::UIInstructions::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_UIInstructions_type(msg_);
  }

private:
  ::carma_msgs::msg::UIInstructions msg_;
};

class Init_UIInstructions_stamp
{
public:
  Init_UIInstructions_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UIInstructions_msg stamp(::carma_msgs::msg::UIInstructions::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_UIInstructions_msg(msg_);
  }

private:
  ::carma_msgs::msg::UIInstructions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_msgs::msg::UIInstructions>()
{
  return carma_msgs::msg::builder::Init_UIInstructions_stamp();
}

}  // namespace carma_msgs

#endif  // CARMA_MSGS__MSG__DETAIL__UI_INSTRUCTIONS__BUILDER_HPP_
