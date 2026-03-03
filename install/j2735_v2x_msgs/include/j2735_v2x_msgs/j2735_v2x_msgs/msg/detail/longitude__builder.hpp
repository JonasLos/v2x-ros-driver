// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/Longitude.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/longitude.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LONGITUDE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__LONGITUDE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/longitude__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_Longitude_longitude
{
public:
  Init_Longitude_longitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::Longitude longitude(::j2735_v2x_msgs::msg::Longitude::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::Longitude msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::Longitude>()
{
  return j2735_v2x_msgs::msg::builder::Init_Longitude_longitude();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LONGITUDE__BUILDER_HPP_
