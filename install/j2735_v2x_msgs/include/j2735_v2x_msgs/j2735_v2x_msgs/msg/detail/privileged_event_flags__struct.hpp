// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/PrivilegedEventFlags.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/privileged_event_flags.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PRIVILEGED_EVENT_FLAGS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PRIVILEGED_EVENT_FLAGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__PrivilegedEventFlags __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__PrivilegedEventFlags __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PrivilegedEventFlags_
{
  using Type = PrivilegedEventFlags_<ContainerAllocator>;

  explicit PrivilegedEventFlags_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->privileged_event_flags = 0;
    }
  }

  explicit PrivilegedEventFlags_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->privileged_event_flags = 0;
    }
  }

  // field types and members
  using _privileged_event_flags_type =
    uint16_t;
  _privileged_event_flags_type privileged_event_flags;

  // setters for named parameter idiom
  Type & set__privileged_event_flags(
    const uint16_t & _arg)
  {
    this->privileged_event_flags = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t PE_UNAVAILABLE =
    1u;
  static constexpr uint16_t PE_EMERGENCY_RESPONSE =
    2u;
  static constexpr uint16_t PE_EMERGENCY_LIGHTS_ACTIVE =
    4u;
  static constexpr uint16_t PE_EMERGENCY_SOUND_ACTIVE =
    8u;
  static constexpr uint16_t PE_NON_EMERGENCY_LIGHTS_ACTIVE =
    16u;
  static constexpr uint16_t PE_NON_EMERGENCY_SOUND_ACTIVE =
    32u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::PrivilegedEventFlags_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::PrivilegedEventFlags_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PrivilegedEventFlags_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PrivilegedEventFlags_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PrivilegedEventFlags_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PrivilegedEventFlags_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PrivilegedEventFlags_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PrivilegedEventFlags_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PrivilegedEventFlags_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PrivilegedEventFlags_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__PrivilegedEventFlags
    std::shared_ptr<j2735_v2x_msgs::msg::PrivilegedEventFlags_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__PrivilegedEventFlags
    std::shared_ptr<j2735_v2x_msgs::msg::PrivilegedEventFlags_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PrivilegedEventFlags_ & other) const
  {
    if (this->privileged_event_flags != other.privileged_event_flags) {
      return false;
    }
    return true;
  }
  bool operator!=(const PrivilegedEventFlags_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PrivilegedEventFlags_

// alias to use template instance with default allocator
using PrivilegedEventFlags =
  j2735_v2x_msgs::msg::PrivilegedEventFlags_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PrivilegedEventFlags_<ContainerAllocator>::PE_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PrivilegedEventFlags_<ContainerAllocator>::PE_EMERGENCY_RESPONSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PrivilegedEventFlags_<ContainerAllocator>::PE_EMERGENCY_LIGHTS_ACTIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PrivilegedEventFlags_<ContainerAllocator>::PE_EMERGENCY_SOUND_ACTIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PrivilegedEventFlags_<ContainerAllocator>::PE_NON_EMERGENCY_LIGHTS_ACTIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PrivilegedEventFlags_<ContainerAllocator>::PE_NON_EMERGENCY_SOUND_ACTIVE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PRIVILEGED_EVENT_FLAGS__STRUCT_HPP_
