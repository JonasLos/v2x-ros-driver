// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/ElevationConfidence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/elevation_confidence.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ELEVATION_CONFIDENCE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ELEVATION_CONFIDENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/elevation_confidence__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_ElevationConfidence_confidence
{
public:
  Init_ElevationConfidence_confidence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::ElevationConfidence confidence(::j2735_v2x_msgs::msg::ElevationConfidence::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ElevationConfidence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::ElevationConfidence>()
{
  return j2735_v2x_msgs::msg::builder::Init_ElevationConfidence_confidence();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ELEVATION_CONFIDENCE__BUILDER_HPP_
