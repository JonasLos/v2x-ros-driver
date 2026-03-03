// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/MultiVehicleResponse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/multi_vehicle_response.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__MULTI_VEHICLE_RESPONSE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__MULTI_VEHICLE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/multi_vehicle_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_MultiVehicleResponse_multi_vehicle_response
{
public:
  Init_MultiVehicleResponse_multi_vehicle_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::MultiVehicleResponse multi_vehicle_response(::j2735_v2x_msgs::msg::MultiVehicleResponse::_multi_vehicle_response_type arg)
  {
    msg_.multi_vehicle_response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MultiVehicleResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::MultiVehicleResponse>()
{
  return j2735_v2x_msgs::msg::builder::Init_MultiVehicleResponse_multi_vehicle_response();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MULTI_VEHICLE_RESPONSE__BUILDER_HPP_
