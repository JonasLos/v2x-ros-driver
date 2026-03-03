// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/PositionConfidenceSet.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/position_confidence_set.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_SET__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_SET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/position_confidence_set__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PositionConfidenceSet_elevation
{
public:
  explicit Init_PositionConfidenceSet_elevation(::j2735_v2x_msgs::msg::PositionConfidenceSet & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::PositionConfidenceSet elevation(::j2735_v2x_msgs::msg::PositionConfidenceSet::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PositionConfidenceSet msg_;
};

class Init_PositionConfidenceSet_pos
{
public:
  Init_PositionConfidenceSet_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionConfidenceSet_elevation pos(::j2735_v2x_msgs::msg::PositionConfidenceSet::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_PositionConfidenceSet_elevation(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PositionConfidenceSet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::PositionConfidenceSet>()
{
  return j2735_v2x_msgs::msg::builder::Init_PositionConfidenceSet_pos();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_SET__BUILDER_HPP_
