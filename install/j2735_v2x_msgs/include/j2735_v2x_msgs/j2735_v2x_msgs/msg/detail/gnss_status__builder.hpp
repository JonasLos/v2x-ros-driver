// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/GNSSStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/gnss_status.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__GNSS_STATUS__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__GNSS_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/gnss_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_GNSSStatus_statuses
{
public:
  Init_GNSSStatus_statuses()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::GNSSStatus statuses(::j2735_v2x_msgs::msg::GNSSStatus::_statuses_type arg)
  {
    msg_.statuses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::GNSSStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::GNSSStatus>()
{
  return j2735_v2x_msgs::msg::builder::Init_GNSSStatus_statuses();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__GNSS_STATUS__BUILDER_HPP_
