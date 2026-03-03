// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/VehicleSize.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vehicle_size.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_SIZE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_SIZE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/vehicle_size__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleSize_vehicle_length
{
public:
  explicit Init_VehicleSize_vehicle_length(::j2735_v2x_msgs::msg::VehicleSize & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::VehicleSize vehicle_length(::j2735_v2x_msgs::msg::VehicleSize::_vehicle_length_type arg)
  {
    msg_.vehicle_length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VehicleSize msg_;
};

class Init_VehicleSize_vehicle_width
{
public:
  Init_VehicleSize_vehicle_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleSize_vehicle_length vehicle_width(::j2735_v2x_msgs::msg::VehicleSize::_vehicle_width_type arg)
  {
    msg_.vehicle_width = std::move(arg);
    return Init_VehicleSize_vehicle_length(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VehicleSize msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::VehicleSize>()
{
  return j2735_v2x_msgs::msg::builder::Init_VehicleSize_vehicle_width();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_SIZE__BUILDER_HPP_
