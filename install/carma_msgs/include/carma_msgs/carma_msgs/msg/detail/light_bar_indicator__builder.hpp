// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_msgs:msg/LightBarIndicator.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/msg/light_bar_indicator.hpp"


#ifndef CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR__BUILDER_HPP_
#define CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "carma_msgs/msg/detail/light_bar_indicator__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace carma_msgs
{

namespace msg
{

namespace builder
{

class Init_LightBarIndicator_indicator
{
public:
  Init_LightBarIndicator_indicator()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_msgs::msg::LightBarIndicator indicator(::carma_msgs::msg::LightBarIndicator::_indicator_type arg)
  {
    msg_.indicator = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_msgs::msg::LightBarIndicator msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_msgs::msg::LightBarIndicator>()
{
  return carma_msgs::msg::builder::Init_LightBarIndicator_indicator();
}

}  // namespace carma_msgs

#endif  // CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR__BUILDER_HPP_
