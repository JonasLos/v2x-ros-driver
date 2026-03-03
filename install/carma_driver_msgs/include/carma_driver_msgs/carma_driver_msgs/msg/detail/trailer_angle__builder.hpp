// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_driver_msgs:msg/TrailerAngle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/msg/trailer_angle.hpp"


#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__TRAILER_ANGLE__BUILDER_HPP_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__TRAILER_ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "carma_driver_msgs/msg/detail/trailer_angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace carma_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_TrailerAngle_angle
{
public:
  explicit Init_TrailerAngle_angle(::carma_driver_msgs::msg::TrailerAngle & msg)
  : msg_(msg)
  {}
  ::carma_driver_msgs::msg::TrailerAngle angle(::carma_driver_msgs::msg::TrailerAngle::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::msg::TrailerAngle msg_;
};

class Init_TrailerAngle_header
{
public:
  Init_TrailerAngle_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrailerAngle_angle header(::carma_driver_msgs::msg::TrailerAngle::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrailerAngle_angle(msg_);
  }

private:
  ::carma_driver_msgs::msg::TrailerAngle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::msg::TrailerAngle>()
{
  return carma_driver_msgs::msg::builder::Init_TrailerAngle_header();
}

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__TRAILER_ANGLE__BUILDER_HPP_
