// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/LaneAttributes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_attributes.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/lane_attributes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneAttributes_lane_type
{
public:
  explicit Init_LaneAttributes_lane_type(::j2735_v2x_msgs::msg::LaneAttributes & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::LaneAttributes lane_type(::j2735_v2x_msgs::msg::LaneAttributes::_lane_type_type arg)
  {
    msg_.lane_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::LaneAttributes msg_;
};

class Init_LaneAttributes_shared_with
{
public:
  explicit Init_LaneAttributes_shared_with(::j2735_v2x_msgs::msg::LaneAttributes & msg)
  : msg_(msg)
  {}
  Init_LaneAttributes_lane_type shared_with(::j2735_v2x_msgs::msg::LaneAttributes::_shared_with_type arg)
  {
    msg_.shared_with = std::move(arg);
    return Init_LaneAttributes_lane_type(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::LaneAttributes msg_;
};

class Init_LaneAttributes_directional_use
{
public:
  Init_LaneAttributes_directional_use()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneAttributes_shared_with directional_use(::j2735_v2x_msgs::msg::LaneAttributes::_directional_use_type arg)
  {
    msg_.directional_use = std::move(arg);
    return Init_LaneAttributes_shared_with(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::LaneAttributes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::LaneAttributes>()
{
  return j2735_v2x_msgs::msg::builder::Init_LaneAttributes_directional_use();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES__BUILDER_HPP_
