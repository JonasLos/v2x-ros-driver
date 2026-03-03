// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/PublicSafetyAndRoadWorkerActivity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/public_safety_and_road_worker_activity.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_AND_ROAD_WORKER_ACTIVITY__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_AND_ROAD_WORKER_ACTIVITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/public_safety_and_road_worker_activity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PublicSafetyAndRoadWorkerActivity_activities
{
public:
  Init_PublicSafetyAndRoadWorkerActivity_activities()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::PublicSafetyAndRoadWorkerActivity activities(::j2735_v2x_msgs::msg::PublicSafetyAndRoadWorkerActivity::_activities_type arg)
  {
    msg_.activities = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PublicSafetyAndRoadWorkerActivity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::PublicSafetyAndRoadWorkerActivity>()
{
  return j2735_v2x_msgs::msg::builder::Init_PublicSafetyAndRoadWorkerActivity_activities();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_AND_ROAD_WORKER_ACTIVITY__BUILDER_HPP_
