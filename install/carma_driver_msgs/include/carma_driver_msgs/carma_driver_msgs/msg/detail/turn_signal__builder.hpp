// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_driver_msgs:msg/TurnSignal.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/msg/turn_signal.hpp"


#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__TURN_SIGNAL__BUILDER_HPP_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__TURN_SIGNAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "carma_driver_msgs/msg/detail/turn_signal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace carma_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_TurnSignal_state
{
public:
  Init_TurnSignal_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_driver_msgs::msg::TurnSignal state(::carma_driver_msgs::msg::TurnSignal::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::msg::TurnSignal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::msg::TurnSignal>()
{
  return carma_driver_msgs::msg::builder::Init_TurnSignal_state();
}

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__TURN_SIGNAL__BUILDER_HPP_
