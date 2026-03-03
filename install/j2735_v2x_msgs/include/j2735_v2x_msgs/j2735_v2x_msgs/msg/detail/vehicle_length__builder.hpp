// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/VehicleLength.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vehicle_length.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_LENGTH__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_LENGTH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/vehicle_length__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleLength_vehicle_length
{
public:
  Init_VehicleLength_vehicle_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::VehicleLength vehicle_length(::j2735_v2x_msgs::msg::VehicleLength::_vehicle_length_type arg)
  {
    msg_.vehicle_length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VehicleLength msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::VehicleLength>()
{
  return j2735_v2x_msgs::msg::builder::Init_VehicleLength_vehicle_length();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_LENGTH__BUILDER_HPP_
