// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/NumberOfParticipantsInCluster.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/number_of_participants_in_cluster.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NUMBER_OF_PARTICIPANTS_IN_CLUSTER__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NUMBER_OF_PARTICIPANTS_IN_CLUSTER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__NumberOfParticipantsInCluster __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__NumberOfParticipantsInCluster __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NumberOfParticipantsInCluster_
{
  using Type = NumberOfParticipantsInCluster_<ContainerAllocator>;

  explicit NumberOfParticipantsInCluster_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cluster_size = 0;
    }
  }

  explicit NumberOfParticipantsInCluster_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cluster_size = 0;
    }
  }

  // field types and members
  using _cluster_size_type =
    uint8_t;
  _cluster_size_type cluster_size;

  // setters for named parameter idiom
  Type & set__cluster_size(
    const uint8_t & _arg)
  {
    this->cluster_size = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNAVAILABLE =
    0u;
  static constexpr uint8_t SMALL =
    1u;
  static constexpr uint8_t MEDIUM =
    2u;
  static constexpr uint8_t LARGE =
    3u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::NumberOfParticipantsInCluster_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::NumberOfParticipantsInCluster_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::NumberOfParticipantsInCluster_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::NumberOfParticipantsInCluster_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::NumberOfParticipantsInCluster_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::NumberOfParticipantsInCluster_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::NumberOfParticipantsInCluster_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::NumberOfParticipantsInCluster_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::NumberOfParticipantsInCluster_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::NumberOfParticipantsInCluster_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__NumberOfParticipantsInCluster
    std::shared_ptr<j2735_v2x_msgs::msg::NumberOfParticipantsInCluster_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__NumberOfParticipantsInCluster
    std::shared_ptr<j2735_v2x_msgs::msg::NumberOfParticipantsInCluster_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NumberOfParticipantsInCluster_ & other) const
  {
    if (this->cluster_size != other.cluster_size) {
      return false;
    }
    return true;
  }
  bool operator!=(const NumberOfParticipantsInCluster_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NumberOfParticipantsInCluster_

// alias to use template instance with default allocator
using NumberOfParticipantsInCluster =
  j2735_v2x_msgs::msg::NumberOfParticipantsInCluster_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NumberOfParticipantsInCluster_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NumberOfParticipantsInCluster_<ContainerAllocator>::SMALL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NumberOfParticipantsInCluster_<ContainerAllocator>::MEDIUM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NumberOfParticipantsInCluster_<ContainerAllocator>::LARGE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NUMBER_OF_PARTICIPANTS_IN_CLUSTER__STRUCT_HPP_
