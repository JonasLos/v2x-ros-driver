// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/NumberOfParticipantsInCluster.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/number_of_participants_in_cluster.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NUMBER_OF_PARTICIPANTS_IN_CLUSTER__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NUMBER_OF_PARTICIPANTS_IN_CLUSTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/number_of_participants_in_cluster__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_NumberOfParticipantsInCluster_cluster_size
{
public:
  Init_NumberOfParticipantsInCluster_cluster_size()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::NumberOfParticipantsInCluster cluster_size(::j2735_v2x_msgs::msg::NumberOfParticipantsInCluster::_cluster_size_type arg)
  {
    msg_.cluster_size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NumberOfParticipantsInCluster msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::NumberOfParticipantsInCluster>()
{
  return j2735_v2x_msgs::msg::builder::Init_NumberOfParticipantsInCluster_cluster_size();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NUMBER_OF_PARTICIPANTS_IN_CLUSTER__BUILDER_HPP_
