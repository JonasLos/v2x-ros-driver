// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_msgs:msg/SystemAlert.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/msg/system_alert.hpp"


#ifndef CARMA_MSGS__MSG__DETAIL__SYSTEM_ALERT__BUILDER_HPP_
#define CARMA_MSGS__MSG__DETAIL__SYSTEM_ALERT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "carma_msgs/msg/detail/system_alert__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace carma_msgs
{

namespace msg
{

namespace builder
{

class Init_SystemAlert_source_node
{
public:
  explicit Init_SystemAlert_source_node(::carma_msgs::msg::SystemAlert & msg)
  : msg_(msg)
  {}
  ::carma_msgs::msg::SystemAlert source_node(::carma_msgs::msg::SystemAlert::_source_node_type arg)
  {
    msg_.source_node = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_msgs::msg::SystemAlert msg_;
};

class Init_SystemAlert_description
{
public:
  explicit Init_SystemAlert_description(::carma_msgs::msg::SystemAlert & msg)
  : msg_(msg)
  {}
  Init_SystemAlert_source_node description(::carma_msgs::msg::SystemAlert::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_SystemAlert_source_node(msg_);
  }

private:
  ::carma_msgs::msg::SystemAlert msg_;
};

class Init_SystemAlert_type
{
public:
  Init_SystemAlert_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemAlert_description type(::carma_msgs::msg::SystemAlert::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SystemAlert_description(msg_);
  }

private:
  ::carma_msgs::msg::SystemAlert msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_msgs::msg::SystemAlert>()
{
  return carma_msgs::msg::builder::Init_SystemAlert_type();
}

}  // namespace carma_msgs

#endif  // CARMA_MSGS__MSG__DETAIL__SYSTEM_ALERT__BUILDER_HPP_
