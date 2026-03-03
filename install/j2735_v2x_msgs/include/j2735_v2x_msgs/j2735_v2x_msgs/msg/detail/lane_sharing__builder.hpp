// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/LaneSharing.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_sharing.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_SHARING__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_SHARING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/lane_sharing__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneSharing_lane_sharing
{
public:
  Init_LaneSharing_lane_sharing()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::LaneSharing lane_sharing(::j2735_v2x_msgs::msg::LaneSharing::_lane_sharing_type arg)
  {
    msg_.lane_sharing = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::LaneSharing msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::LaneSharing>()
{
  return j2735_v2x_msgs::msg::builder::Init_LaneSharing_lane_sharing();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_SHARING__BUILDER_HPP_
