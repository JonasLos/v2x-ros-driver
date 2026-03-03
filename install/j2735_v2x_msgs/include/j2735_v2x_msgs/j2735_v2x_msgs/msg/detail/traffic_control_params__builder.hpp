// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlParams.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_params.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PARAMS__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/traffic_control_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficControlParams_detail
{
public:
  explicit Init_TrafficControlParams_detail(::j2735_v2x_msgs::msg::TrafficControlParams & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::TrafficControlParams detail(::j2735_v2x_msgs::msg::TrafficControlParams::_detail_type arg)
  {
    msg_.detail = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlParams msg_;
};

class Init_TrafficControlParams_regulatory
{
public:
  explicit Init_TrafficControlParams_regulatory(::j2735_v2x_msgs::msg::TrafficControlParams & msg)
  : msg_(msg)
  {}
  Init_TrafficControlParams_detail regulatory(::j2735_v2x_msgs::msg::TrafficControlParams::_regulatory_type arg)
  {
    msg_.regulatory = std::move(arg);
    return Init_TrafficControlParams_detail(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlParams msg_;
};

class Init_TrafficControlParams_schedule
{
public:
  explicit Init_TrafficControlParams_schedule(::j2735_v2x_msgs::msg::TrafficControlParams & msg)
  : msg_(msg)
  {}
  Init_TrafficControlParams_regulatory schedule(::j2735_v2x_msgs::msg::TrafficControlParams::_schedule_type arg)
  {
    msg_.schedule = std::move(arg);
    return Init_TrafficControlParams_regulatory(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlParams msg_;
};

class Init_TrafficControlParams_vclasses
{
public:
  Init_TrafficControlParams_vclasses()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficControlParams_schedule vclasses(::j2735_v2x_msgs::msg::TrafficControlParams::_vclasses_type arg)
  {
    msg_.vclasses = std::move(arg);
    return Init_TrafficControlParams_schedule(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::TrafficControlParams>()
{
  return j2735_v2x_msgs::msg::builder::Init_TrafficControlParams_vclasses();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PARAMS__BUILDER_HPP_
