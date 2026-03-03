// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlRequestV01.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_request_v01.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_V01__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_V01__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/traffic_control_request_v01__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficControlRequestV01_bounds
{
public:
  explicit Init_TrafficControlRequestV01_bounds(::j2735_v2x_msgs::msg::TrafficControlRequestV01 & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::TrafficControlRequestV01 bounds(::j2735_v2x_msgs::msg::TrafficControlRequestV01::_bounds_type arg)
  {
    msg_.bounds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlRequestV01 msg_;
};

class Init_TrafficControlRequestV01_scale
{
public:
  explicit Init_TrafficControlRequestV01_scale(::j2735_v2x_msgs::msg::TrafficControlRequestV01 & msg)
  : msg_(msg)
  {}
  Init_TrafficControlRequestV01_bounds scale(::j2735_v2x_msgs::msg::TrafficControlRequestV01::_scale_type arg)
  {
    msg_.scale = std::move(arg);
    return Init_TrafficControlRequestV01_bounds(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlRequestV01 msg_;
};

class Init_TrafficControlRequestV01_reqseq
{
public:
  explicit Init_TrafficControlRequestV01_reqseq(::j2735_v2x_msgs::msg::TrafficControlRequestV01 & msg)
  : msg_(msg)
  {}
  Init_TrafficControlRequestV01_scale reqseq(::j2735_v2x_msgs::msg::TrafficControlRequestV01::_reqseq_type arg)
  {
    msg_.reqseq = std::move(arg);
    return Init_TrafficControlRequestV01_scale(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlRequestV01 msg_;
};

class Init_TrafficControlRequestV01_reqid
{
public:
  Init_TrafficControlRequestV01_reqid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficControlRequestV01_reqseq reqid(::j2735_v2x_msgs::msg::TrafficControlRequestV01::_reqid_type arg)
  {
    msg_.reqid = std::move(arg);
    return Init_TrafficControlRequestV01_reqseq(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlRequestV01 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::TrafficControlRequestV01>()
{
  return j2735_v2x_msgs::msg::builder::Init_TrafficControlRequestV01_reqid();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_V01__BUILDER_HPP_
