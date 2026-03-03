// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/PersonalCrossingRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/personal_crossing_request.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_CROSSING_REQUEST__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_CROSSING_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/personal_crossing_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PersonalCrossingRequest_cross_request
{
public:
  Init_PersonalCrossingRequest_cross_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::PersonalCrossingRequest cross_request(::j2735_v2x_msgs::msg::PersonalCrossingRequest::_cross_request_type arg)
  {
    msg_.cross_request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PersonalCrossingRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::PersonalCrossingRequest>()
{
  return j2735_v2x_msgs::msg::builder::Init_PersonalCrossingRequest_cross_request();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_CROSSING_REQUEST__BUILDER_HPP_
