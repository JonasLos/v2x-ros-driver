// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/VehicleMass.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vehicle_mass.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_MASS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_MASS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__VehicleMass __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__VehicleMass __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleMass_
{
  using Type = VehicleMass_<ContainerAllocator>;

  explicit VehicleMass_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_mass = 0;
    }
  }

  explicit VehicleMass_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_mass = 0;
    }
  }

  // field types and members
  using _vehicle_mass_type =
    uint8_t;
  _vehicle_mass_type vehicle_mass;

  // setters for named parameter idiom
  Type & set__vehicle_mass(
    const uint8_t & _arg)
  {
    this->vehicle_mass = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MASS_UNAVAILABLE =
    255u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::VehicleMass_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::VehicleMass_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::VehicleMass_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::VehicleMass_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::VehicleMass_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::VehicleMass_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::VehicleMass_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::VehicleMass_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::VehicleMass_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::VehicleMass_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__VehicleMass
    std::shared_ptr<j2735_v2x_msgs::msg::VehicleMass_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__VehicleMass
    std::shared_ptr<j2735_v2x_msgs::msg::VehicleMass_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleMass_ & other) const
  {
    if (this->vehicle_mass != other.vehicle_mass) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleMass_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleMass_

// alias to use template instance with default allocator
using VehicleMass =
  j2735_v2x_msgs::msg::VehicleMass_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleMass_<ContainerAllocator>::MASS_UNAVAILABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_MASS__STRUCT_HPP_
