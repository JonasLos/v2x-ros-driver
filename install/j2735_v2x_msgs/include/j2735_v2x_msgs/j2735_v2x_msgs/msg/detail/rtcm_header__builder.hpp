// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/RTCMHeader.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/rtcm_header.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__RTCM_HEADER__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__RTCM_HEADER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/rtcm_header__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_RTCMHeader_ant_offset_z
{
public:
  explicit Init_RTCMHeader_ant_offset_z(::j2735_v2x_msgs::msg::RTCMHeader & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::RTCMHeader ant_offset_z(::j2735_v2x_msgs::msg::RTCMHeader::_ant_offset_z_type arg)
  {
    msg_.ant_offset_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::RTCMHeader msg_;
};

class Init_RTCMHeader_ant_offset_y
{
public:
  explicit Init_RTCMHeader_ant_offset_y(::j2735_v2x_msgs::msg::RTCMHeader & msg)
  : msg_(msg)
  {}
  Init_RTCMHeader_ant_offset_z ant_offset_y(::j2735_v2x_msgs::msg::RTCMHeader::_ant_offset_y_type arg)
  {
    msg_.ant_offset_y = std::move(arg);
    return Init_RTCMHeader_ant_offset_z(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::RTCMHeader msg_;
};

class Init_RTCMHeader_ant_offset_x
{
public:
  explicit Init_RTCMHeader_ant_offset_x(::j2735_v2x_msgs::msg::RTCMHeader & msg)
  : msg_(msg)
  {}
  Init_RTCMHeader_ant_offset_y ant_offset_x(::j2735_v2x_msgs::msg::RTCMHeader::_ant_offset_x_type arg)
  {
    msg_.ant_offset_x = std::move(arg);
    return Init_RTCMHeader_ant_offset_y(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::RTCMHeader msg_;
};

class Init_RTCMHeader_status
{
public:
  Init_RTCMHeader_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RTCMHeader_ant_offset_x status(::j2735_v2x_msgs::msg::RTCMHeader::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RTCMHeader_ant_offset_x(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::RTCMHeader msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::RTCMHeader>()
{
  return j2735_v2x_msgs::msg::builder::Init_RTCMHeader_status();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__RTCM_HEADER__BUILDER_HPP_
