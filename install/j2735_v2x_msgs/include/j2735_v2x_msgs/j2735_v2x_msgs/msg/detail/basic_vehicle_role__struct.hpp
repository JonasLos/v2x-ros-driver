// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/BasicVehicleRole.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/basic_vehicle_role.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_ROLE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_ROLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__BasicVehicleRole __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__BasicVehicleRole __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BasicVehicleRole_
{
  using Type = BasicVehicleRole_<ContainerAllocator>;

  explicit BasicVehicleRole_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->basic_vehicle_role = 0;
    }
  }

  explicit BasicVehicleRole_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->basic_vehicle_role = 0;
    }
  }

  // field types and members
  using _basic_vehicle_role_type =
    uint8_t;
  _basic_vehicle_role_type basic_vehicle_role;

  // setters for named parameter idiom
  Type & set__basic_vehicle_role(
    const uint8_t & _arg)
  {
    this->basic_vehicle_role = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BASIC_VEHICLE =
    0u;
  static constexpr uint8_t PUBLIC_TRANSPORT =
    1u;
  static constexpr uint8_t SPECIAL_TRANSPORT =
    2u;
  static constexpr uint8_t DANGEROUS_GOODS =
    3u;
  static constexpr uint8_t ROAD_WORK =
    4u;
  static constexpr uint8_t ROAD_RESCUE =
    5u;
  static constexpr uint8_t EMERGENCY =
    6u;
  static constexpr uint8_t SAFETY_CAR =
    7u;
  static constexpr uint8_t NONE_UNKNOWN =
    8u;
  static constexpr uint8_t TRUCK =
    9u;
  static constexpr uint8_t MOTORCYCLE =
    10u;
  static constexpr uint8_t ROAD_SIDE_SOURCE =
    11u;
  static constexpr uint8_t POLICE =
    12u;
  static constexpr uint8_t FIRE =
    13u;
  static constexpr uint8_t AMBULANCE =
    14u;
  static constexpr uint8_t DOT =
    15u;
  static constexpr uint8_t TRANSIT =
    16u;
  static constexpr uint8_t SLOW_MOVING =
    17u;
  static constexpr uint8_t STOP_N_GO =
    18u;
  static constexpr uint8_t CYCLIST =
    19u;
  static constexpr uint8_t PEDESTRIAN =
    20u;
  static constexpr uint8_t NON_MOTORIZED =
    21u;
  static constexpr uint8_t MILITARY =
    22u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::BasicVehicleRole_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::BasicVehicleRole_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::BasicVehicleRole_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::BasicVehicleRole_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::BasicVehicleRole_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::BasicVehicleRole_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::BasicVehicleRole_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::BasicVehicleRole_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::BasicVehicleRole_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::BasicVehicleRole_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__BasicVehicleRole
    std::shared_ptr<j2735_v2x_msgs::msg::BasicVehicleRole_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__BasicVehicleRole
    std::shared_ptr<j2735_v2x_msgs::msg::BasicVehicleRole_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BasicVehicleRole_ & other) const
  {
    if (this->basic_vehicle_role != other.basic_vehicle_role) {
      return false;
    }
    return true;
  }
  bool operator!=(const BasicVehicleRole_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BasicVehicleRole_

// alias to use template instance with default allocator
using BasicVehicleRole =
  j2735_v2x_msgs::msg::BasicVehicleRole_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleRole_<ContainerAllocator>::BASIC_VEHICLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleRole_<ContainerAllocator>::PUBLIC_TRANSPORT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleRole_<ContainerAllocator>::SPECIAL_TRANSPORT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleRole_<ContainerAllocator>::DANGEROUS_GOODS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleRole_<ContainerAllocator>::ROAD_WORK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleRole_<ContainerAllocator>::ROAD_RESCUE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleRole_<ContainerAllocator>::EMERGENCY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleRole_<ContainerAllocator>::SAFETY_CAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleRole_<ContainerAllocator>::NONE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleRole_<ContainerAllocator>::TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleRole_<ContainerAllocator>::MOTORCYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleRole_<ContainerAllocator>::ROAD_SIDE_SOURCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleRole_<ContainerAllocator>::POLICE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleRole_<ContainerAllocator>::FIRE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleRole_<ContainerAllocator>::AMBULANCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleRole_<ContainerAllocator>::DOT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleRole_<ContainerAllocator>::TRANSIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleRole_<ContainerAllocator>::SLOW_MOVING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleRole_<ContainerAllocator>::STOP_N_GO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleRole_<ContainerAllocator>::CYCLIST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleRole_<ContainerAllocator>::PEDESTRIAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleRole_<ContainerAllocator>::NON_MOTORIZED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BasicVehicleRole_<ContainerAllocator>::MILITARY;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_ROLE__STRUCT_HPP_
