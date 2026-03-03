// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/Position3D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/position3_d.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__POSITION3_D__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__POSITION3_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/position3_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_Position3D_elevation_exists
{
public:
  explicit Init_Position3D_elevation_exists(::j2735_v2x_msgs::msg::Position3D & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::Position3D elevation_exists(::j2735_v2x_msgs::msg::Position3D::_elevation_exists_type arg)
  {
    msg_.elevation_exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::Position3D msg_;
};

class Init_Position3D_elevation
{
public:
  explicit Init_Position3D_elevation(::j2735_v2x_msgs::msg::Position3D & msg)
  : msg_(msg)
  {}
  Init_Position3D_elevation_exists elevation(::j2735_v2x_msgs::msg::Position3D::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return Init_Position3D_elevation_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::Position3D msg_;
};

class Init_Position3D_longitude
{
public:
  explicit Init_Position3D_longitude(::j2735_v2x_msgs::msg::Position3D & msg)
  : msg_(msg)
  {}
  Init_Position3D_elevation longitude(::j2735_v2x_msgs::msg::Position3D::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_Position3D_elevation(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::Position3D msg_;
};

class Init_Position3D_latitude
{
public:
  Init_Position3D_latitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Position3D_longitude latitude(::j2735_v2x_msgs::msg::Position3D::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_Position3D_longitude(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::Position3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::Position3D>()
{
  return j2735_v2x_msgs::msg::builder::Init_Position3D_latitude();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__POSITION3_D__BUILDER_HPP_
