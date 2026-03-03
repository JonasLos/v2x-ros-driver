// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/PublicSafetyAndRoadWorkerActivity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/public_safety_and_road_worker_activity.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_AND_ROAD_WORKER_ACTIVITY__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_AND_ROAD_WORKER_ACTIVITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PublicSafetyAndRoadWorkerActivity_
{
  using Type = PublicSafetyAndRoadWorkerActivity_<ContainerAllocator>;

  explicit PublicSafetyAndRoadWorkerActivity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->activities = 0;
    }
  }

  explicit PublicSafetyAndRoadWorkerActivity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->activities = 0;
    }
  }

  // field types and members
  using _activities_type =
    uint8_t;
  _activities_type activities;

  // setters for named parameter idiom
  Type & set__activities(
    const uint8_t & _arg)
  {
    this->activities = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNAVAILABLE =
    0u;
  static constexpr uint8_t WORKING_ON_ROAD =
    1u;
  static constexpr uint8_t SETTING_UP_CLOSURES =
    2u;
  static constexpr uint8_t RESPONDING_TO_EVENTS =
    4u;
  static constexpr uint8_t DIRECTING_TRAFFIC =
    8u;
  static constexpr uint8_t OTHER_ACTIVITIES =
    16u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::PublicSafetyAndRoadWorkerActivity_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::PublicSafetyAndRoadWorkerActivity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PublicSafetyAndRoadWorkerActivity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PublicSafetyAndRoadWorkerActivity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PublicSafetyAndRoadWorkerActivity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PublicSafetyAndRoadWorkerActivity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PublicSafetyAndRoadWorkerActivity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PublicSafetyAndRoadWorkerActivity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PublicSafetyAndRoadWorkerActivity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PublicSafetyAndRoadWorkerActivity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity
    std::shared_ptr<j2735_v2x_msgs::msg::PublicSafetyAndRoadWorkerActivity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity
    std::shared_ptr<j2735_v2x_msgs::msg::PublicSafetyAndRoadWorkerActivity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PublicSafetyAndRoadWorkerActivity_ & other) const
  {
    if (this->activities != other.activities) {
      return false;
    }
    return true;
  }
  bool operator!=(const PublicSafetyAndRoadWorkerActivity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PublicSafetyAndRoadWorkerActivity_

// alias to use template instance with default allocator
using PublicSafetyAndRoadWorkerActivity =
  j2735_v2x_msgs::msg::PublicSafetyAndRoadWorkerActivity_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PublicSafetyAndRoadWorkerActivity_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PublicSafetyAndRoadWorkerActivity_<ContainerAllocator>::WORKING_ON_ROAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PublicSafetyAndRoadWorkerActivity_<ContainerAllocator>::SETTING_UP_CLOSURES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PublicSafetyAndRoadWorkerActivity_<ContainerAllocator>::RESPONDING_TO_EVENTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PublicSafetyAndRoadWorkerActivity_<ContainerAllocator>::DIRECTING_TRAFFIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PublicSafetyAndRoadWorkerActivity_<ContainerAllocator>::OTHER_ACTIVITIES;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_AND_ROAD_WORKER_ACTIVITY__STRUCT_HPP_
