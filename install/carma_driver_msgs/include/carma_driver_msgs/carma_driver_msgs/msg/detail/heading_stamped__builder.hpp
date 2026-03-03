// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_driver_msgs:msg/HeadingStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/msg/heading_stamped.hpp"


#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__HEADING_STAMPED__BUILDER_HPP_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__HEADING_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "carma_driver_msgs/msg/detail/heading_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace carma_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_HeadingStamped_heading
{
public:
  explicit Init_HeadingStamped_heading(::carma_driver_msgs::msg::HeadingStamped & msg)
  : msg_(msg)
  {}
  ::carma_driver_msgs::msg::HeadingStamped heading(::carma_driver_msgs::msg::HeadingStamped::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::msg::HeadingStamped msg_;
};

class Init_HeadingStamped_header
{
public:
  Init_HeadingStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HeadingStamped_heading header(::carma_driver_msgs::msg::HeadingStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HeadingStamped_heading(msg_);
  }

private:
  ::carma_driver_msgs::msg::HeadingStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::msg::HeadingStamped>()
{
  return carma_driver_msgs::msg::builder::Init_HeadingStamped_header();
}

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__HEADING_STAMPED__BUILDER_HPP_
