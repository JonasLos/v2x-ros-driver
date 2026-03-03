// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/VehicleEventFlags.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vehicle_event_flags.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_EVENT_FLAGS__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_EVENT_FLAGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/vehicle_event_flags__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleEventFlags_vehicle_event_flag
{
public:
  Init_VehicleEventFlags_vehicle_event_flag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::VehicleEventFlags vehicle_event_flag(::j2735_v2x_msgs::msg::VehicleEventFlags::_vehicle_event_flag_type arg)
  {
    msg_.vehicle_event_flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VehicleEventFlags msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::VehicleEventFlags>()
{
  return j2735_v2x_msgs::msg::builder::Init_VehicleEventFlags_vehicle_event_flag();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_EVENT_FLAGS__BUILDER_HPP_
