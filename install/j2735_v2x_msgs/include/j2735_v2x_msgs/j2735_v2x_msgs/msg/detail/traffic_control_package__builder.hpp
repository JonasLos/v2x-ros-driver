// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlPackage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_package.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PACKAGE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PACKAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/traffic_control_package__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficControlPackage_tcids
{
public:
  explicit Init_TrafficControlPackage_tcids(::j2735_v2x_msgs::msg::TrafficControlPackage & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::TrafficControlPackage tcids(::j2735_v2x_msgs::msg::TrafficControlPackage::_tcids_type arg)
  {
    msg_.tcids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlPackage msg_;
};

class Init_TrafficControlPackage_label_exists
{
public:
  explicit Init_TrafficControlPackage_label_exists(::j2735_v2x_msgs::msg::TrafficControlPackage & msg)
  : msg_(msg)
  {}
  Init_TrafficControlPackage_tcids label_exists(::j2735_v2x_msgs::msg::TrafficControlPackage::_label_exists_type arg)
  {
    msg_.label_exists = std::move(arg);
    return Init_TrafficControlPackage_tcids(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlPackage msg_;
};

class Init_TrafficControlPackage_label
{
public:
  Init_TrafficControlPackage_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficControlPackage_label_exists label(::j2735_v2x_msgs::msg::TrafficControlPackage::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_TrafficControlPackage_label_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlPackage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::TrafficControlPackage>()
{
  return j2735_v2x_msgs::msg::builder::Init_TrafficControlPackage_label();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PACKAGE__BUILDER_HPP_
