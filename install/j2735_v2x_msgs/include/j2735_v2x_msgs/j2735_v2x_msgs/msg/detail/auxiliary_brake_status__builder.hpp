// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/AuxiliaryBrakeStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/auxiliary_brake_status.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__AUXILIARY_BRAKE_STATUS__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__AUXILIARY_BRAKE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/auxiliary_brake_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_AuxiliaryBrakeStatus_auxiliary_brake_status
{
public:
  Init_AuxiliaryBrakeStatus_auxiliary_brake_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::AuxiliaryBrakeStatus auxiliary_brake_status(::j2735_v2x_msgs::msg::AuxiliaryBrakeStatus::_auxiliary_brake_status_type arg)
  {
    msg_.auxiliary_brake_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::AuxiliaryBrakeStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::AuxiliaryBrakeStatus>()
{
  return j2735_v2x_msgs::msg::builder::Init_AuxiliaryBrakeStatus_auxiliary_brake_status();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__AUXILIARY_BRAKE_STATUS__BUILDER_HPP_
