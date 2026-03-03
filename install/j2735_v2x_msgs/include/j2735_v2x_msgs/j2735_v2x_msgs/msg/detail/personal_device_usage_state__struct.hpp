// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/PersonalDeviceUsageState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/personal_device_usage_state.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_DEVICE_USAGE_STATE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_DEVICE_USAGE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__PersonalDeviceUsageState __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__PersonalDeviceUsageState __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PersonalDeviceUsageState_
{
  using Type = PersonalDeviceUsageState_<ContainerAllocator>;

  explicit PersonalDeviceUsageState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->states = 0;
    }
  }

  explicit PersonalDeviceUsageState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->states = 0;
    }
  }

  // field types and members
  using _states_type =
    uint16_t;
  _states_type states;

  // setters for named parameter idiom
  Type & set__states(
    const uint16_t & _arg)
  {
    this->states = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t UNAVAILABLE =
    0u;
  static constexpr uint16_t OTHER =
    1u;
  static constexpr uint16_t IDLE =
    2u;
  static constexpr uint16_t LISTENING_TO_AUDIO =
    4u;
  static constexpr uint16_t TYPING =
    8u;
  static constexpr uint16_t CALLING =
    16u;
  static constexpr uint16_t PLAYING_GAMES =
    32u;
  static constexpr uint16_t READING =
    64u;
  static constexpr uint16_t VIEWING =
    128u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::PersonalDeviceUsageState_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::PersonalDeviceUsageState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PersonalDeviceUsageState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PersonalDeviceUsageState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PersonalDeviceUsageState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PersonalDeviceUsageState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PersonalDeviceUsageState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PersonalDeviceUsageState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PersonalDeviceUsageState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PersonalDeviceUsageState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__PersonalDeviceUsageState
    std::shared_ptr<j2735_v2x_msgs::msg::PersonalDeviceUsageState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__PersonalDeviceUsageState
    std::shared_ptr<j2735_v2x_msgs::msg::PersonalDeviceUsageState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PersonalDeviceUsageState_ & other) const
  {
    if (this->states != other.states) {
      return false;
    }
    return true;
  }
  bool operator!=(const PersonalDeviceUsageState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PersonalDeviceUsageState_

// alias to use template instance with default allocator
using PersonalDeviceUsageState =
  j2735_v2x_msgs::msg::PersonalDeviceUsageState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PersonalDeviceUsageState_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PersonalDeviceUsageState_<ContainerAllocator>::OTHER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PersonalDeviceUsageState_<ContainerAllocator>::IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PersonalDeviceUsageState_<ContainerAllocator>::LISTENING_TO_AUDIO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PersonalDeviceUsageState_<ContainerAllocator>::TYPING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PersonalDeviceUsageState_<ContainerAllocator>::CALLING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PersonalDeviceUsageState_<ContainerAllocator>::PLAYING_GAMES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PersonalDeviceUsageState_<ContainerAllocator>::READING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PersonalDeviceUsageState_<ContainerAllocator>::VIEWING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_DEVICE_USAGE_STATE__STRUCT_HPP_
