// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/ITISVehicleGroupAffected.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/itis_vehicle_group_affected.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ITIS_VEHICLE_GROUP_AFFECTED__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ITIS_VEHICLE_GROUP_AFFECTED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__ITISVehicleGroupAffected __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__ITISVehicleGroupAffected __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ITISVehicleGroupAffected_
{
  using Type = ITISVehicleGroupAffected_<ContainerAllocator>;

  explicit ITISVehicleGroupAffected_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_group_affected = 0;
    }
  }

  explicit ITISVehicleGroupAffected_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_group_affected = 0;
    }
  }

  // field types and members
  using _vehicle_group_affected_type =
    uint16_t;
  _vehicle_group_affected_type vehicle_group_affected;

  // setters for named parameter idiom
  Type & set__vehicle_group_affected(
    const uint16_t & _arg)
  {
    this->vehicle_group_affected = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t ALL_VEHICLES =
    9217u;
  static constexpr uint16_t BICYCLES =
    9218u;
  static constexpr uint16_t MOTORCYCLES =
    9219u;
  static constexpr uint16_t CARS =
    9220u;
  static constexpr uint16_t LIGHT_VEHICLES =
    9221u;
  static constexpr uint16_t CARS_AND_LIGHT_VEHICLES =
    9222u;
  static constexpr uint16_t CARS_WITH_TRAILERS =
    9223u;
  static constexpr uint16_t CARS_WITH_RECREATIONAL_TRAILERS =
    9224u;
  static constexpr uint16_t VEHICLES_WITH_TRAILERS =
    9225u;
  static constexpr uint16_t HEAVY_VEHICLES =
    9226u;
  static constexpr uint16_t TRUCKS =
    9227u;
  static constexpr uint16_t BUSES =
    9228u;
  static constexpr uint16_t ARTICULATED_BUSES =
    9229u;
  static constexpr uint16_t SCHOOL_BUSES =
    9230u;
  static constexpr uint16_t VEHICLES_WITH_SEMI_TRAILERS =
    9231u;
  static constexpr uint16_t VEHICLES_WITH_DOUBLE_TRAILERS =
    9232u;
  static constexpr uint16_t HIGH_PROFILE_VEHICLES =
    9233u;
  static constexpr uint16_t WIDE_VEHICLES =
    9234u;
  static constexpr uint16_t LONG_VEHICLES =
    9235u;
  static constexpr uint16_t HAZARDOUS_LOADS =
    9236u;
  static constexpr uint16_t EXCEPTIONAL_LOADS =
    9237u;
  static constexpr uint16_t ABNORMAL_LOADS =
    9238u;
  static constexpr uint16_t CONVOYS =
    9239u;
  static constexpr uint16_t MAINTENANCE_VEHICLES =
    9240u;
  static constexpr uint16_t DELIVERY_VEHICLES =
    9241u;
  static constexpr uint16_t VEHICLES_WITH_EVEN_NUMBERED_LICENSE_PLATES =
    9242u;
  static constexpr uint16_t VEHICLES_WITH_ODD_NUMBERED_LICENSE_PLATES =
    9243u;
  static constexpr uint16_t VEHICLES_WITH_PARKING_PERMITS =
    9244u;
  static constexpr uint16_t VEHICLES_WITH_CATALYTIC_CONVERTERS =
    9245u;
  static constexpr uint16_t VEHICLES_WITHOUT_CATALYTIC_CONVERTERS =
    9246u;
  static constexpr uint16_t GAS_POWERED_VEHICLES =
    9248u;
  static constexpr uint16_t LPG_VEHICLES =
    9249u;
  static constexpr uint16_t MILITARY_CONVOYS =
    9250u;
  static constexpr uint16_t MILITARY_VEHICLES =
    9251u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::ITISVehicleGroupAffected_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::ITISVehicleGroupAffected_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ITISVehicleGroupAffected_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ITISVehicleGroupAffected_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ITISVehicleGroupAffected_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ITISVehicleGroupAffected_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ITISVehicleGroupAffected_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ITISVehicleGroupAffected_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ITISVehicleGroupAffected_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ITISVehicleGroupAffected_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__ITISVehicleGroupAffected
    std::shared_ptr<j2735_v2x_msgs::msg::ITISVehicleGroupAffected_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__ITISVehicleGroupAffected
    std::shared_ptr<j2735_v2x_msgs::msg::ITISVehicleGroupAffected_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ITISVehicleGroupAffected_ & other) const
  {
    if (this->vehicle_group_affected != other.vehicle_group_affected) {
      return false;
    }
    return true;
  }
  bool operator!=(const ITISVehicleGroupAffected_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ITISVehicleGroupAffected_

// alias to use template instance with default allocator
using ITISVehicleGroupAffected =
  j2735_v2x_msgs::msg::ITISVehicleGroupAffected_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::ALL_VEHICLES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::BICYCLES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::MOTORCYCLES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::CARS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::LIGHT_VEHICLES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::CARS_AND_LIGHT_VEHICLES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::CARS_WITH_TRAILERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::CARS_WITH_RECREATIONAL_TRAILERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::VEHICLES_WITH_TRAILERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::HEAVY_VEHICLES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::TRUCKS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::BUSES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::ARTICULATED_BUSES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::SCHOOL_BUSES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::VEHICLES_WITH_SEMI_TRAILERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::VEHICLES_WITH_DOUBLE_TRAILERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::HIGH_PROFILE_VEHICLES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::WIDE_VEHICLES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::LONG_VEHICLES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::HAZARDOUS_LOADS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::EXCEPTIONAL_LOADS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::ABNORMAL_LOADS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::CONVOYS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::MAINTENANCE_VEHICLES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::DELIVERY_VEHICLES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::VEHICLES_WITH_EVEN_NUMBERED_LICENSE_PLATES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::VEHICLES_WITH_ODD_NUMBERED_LICENSE_PLATES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::VEHICLES_WITH_PARKING_PERMITS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::VEHICLES_WITH_CATALYTIC_CONVERTERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::VEHICLES_WITHOUT_CATALYTIC_CONVERTERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::GAS_POWERED_VEHICLES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::LPG_VEHICLES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::MILITARY_CONVOYS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ITISVehicleGroupAffected_<ContainerAllocator>::MILITARY_VEHICLES;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ITIS_VEHICLE_GROUP_AFFECTED__STRUCT_HPP_
