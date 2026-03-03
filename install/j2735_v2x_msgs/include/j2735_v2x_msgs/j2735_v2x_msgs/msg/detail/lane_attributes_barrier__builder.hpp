// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/LaneAttributesBarrier.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_attributes_barrier.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_BARRIER__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_BARRIER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/lane_attributes_barrier__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneAttributesBarrier_lane_attributes_barrier
{
public:
  Init_LaneAttributesBarrier_lane_attributes_barrier()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::LaneAttributesBarrier lane_attributes_barrier(::j2735_v2x_msgs::msg::LaneAttributesBarrier::_lane_attributes_barrier_type arg)
  {
    msg_.lane_attributes_barrier = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::LaneAttributesBarrier msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::LaneAttributesBarrier>()
{
  return j2735_v2x_msgs::msg::builder::Init_LaneAttributesBarrier_lane_attributes_barrier();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_BARRIER__BUILDER_HPP_
