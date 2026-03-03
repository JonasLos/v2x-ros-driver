// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/VehicleEventFlags.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vehicle_event_flags.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_EVENT_FLAGS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_EVENT_FLAGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__VehicleEventFlags __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__VehicleEventFlags __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleEventFlags_
{
  using Type = VehicleEventFlags_<ContainerAllocator>;

  explicit VehicleEventFlags_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_event_flag = 0;
    }
  }

  explicit VehicleEventFlags_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_event_flag = 0;
    }
  }

  // field types and members
  using _vehicle_event_flag_type =
    uint16_t;
  _vehicle_event_flag_type vehicle_event_flag;

  // setters for named parameter idiom
  Type & set__vehicle_event_flag(
    const uint16_t & _arg)
  {
    this->vehicle_event_flag = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t EVENT_HAZARD_LIGHTS =
    0u;
  static constexpr uint16_t EVENT_STOP_LINE_VIOLATION =
    1u;
  static constexpr uint16_t EVENT_ABS_ACTIVATED =
    2u;
  static constexpr uint16_t EVENT_TRACTION_CONTROL_LOSS =
    4u;
  static constexpr uint16_t EVENT_STABILITY_CONTROL_ACTIVATED =
    8u;
  static constexpr uint16_t EVENT_HAZARDOUS_MATERIALS =
    16u;
  static constexpr uint16_t EVENT_RESERVED1 =
    32u;
  static constexpr uint16_t EVENT_HARD_BRAKING =
    64u;
  static constexpr uint16_t EVENT_LIGHTS_CHANGED =
    128u;
  static constexpr uint16_t EVENT_WIPERS_CHANGED =
    256u;
  static constexpr uint16_t EVENT_FLAT_TIRE =
    512u;
  static constexpr uint16_t EVENT_DISABLED_VEHICLE =
    1024u;
  static constexpr uint16_t EVENT_AIR_BAG_DEPLOYMENT =
    2048u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::VehicleEventFlags_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::VehicleEventFlags_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::VehicleEventFlags_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::VehicleEventFlags_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::VehicleEventFlags_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::VehicleEventFlags_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::VehicleEventFlags_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::VehicleEventFlags_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::VehicleEventFlags_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::VehicleEventFlags_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__VehicleEventFlags
    std::shared_ptr<j2735_v2x_msgs::msg::VehicleEventFlags_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__VehicleEventFlags
    std::shared_ptr<j2735_v2x_msgs::msg::VehicleEventFlags_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleEventFlags_ & other) const
  {
    if (this->vehicle_event_flag != other.vehicle_event_flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleEventFlags_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleEventFlags_

// alias to use template instance with default allocator
using VehicleEventFlags =
  j2735_v2x_msgs::msg::VehicleEventFlags_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleEventFlags_<ContainerAllocator>::EVENT_HAZARD_LIGHTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleEventFlags_<ContainerAllocator>::EVENT_STOP_LINE_VIOLATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleEventFlags_<ContainerAllocator>::EVENT_ABS_ACTIVATED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleEventFlags_<ContainerAllocator>::EVENT_TRACTION_CONTROL_LOSS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleEventFlags_<ContainerAllocator>::EVENT_STABILITY_CONTROL_ACTIVATED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleEventFlags_<ContainerAllocator>::EVENT_HAZARDOUS_MATERIALS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleEventFlags_<ContainerAllocator>::EVENT_RESERVED1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleEventFlags_<ContainerAllocator>::EVENT_HARD_BRAKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleEventFlags_<ContainerAllocator>::EVENT_LIGHTS_CHANGED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleEventFlags_<ContainerAllocator>::EVENT_WIPERS_CHANGED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleEventFlags_<ContainerAllocator>::EVENT_FLAT_TIRE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleEventFlags_<ContainerAllocator>::EVENT_DISABLED_VEHICLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleEventFlags_<ContainerAllocator>::EVENT_AIR_BAG_DEPLOYMENT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_EVENT_FLAGS__STRUCT_HPP_
