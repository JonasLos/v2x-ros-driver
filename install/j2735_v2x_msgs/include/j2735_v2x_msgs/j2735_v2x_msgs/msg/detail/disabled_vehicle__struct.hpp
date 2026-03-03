// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/DisabledVehicle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/disabled_vehicle.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__DISABLED_VEHICLE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__DISABLED_VEHICLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'status_details'
#include "j2735_v2x_msgs/msg/detail/iti_scodes__struct.hpp"
// Member 'location_details'
#include "j2735_v2x_msgs/msg/detail/itis_generic_locations__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__DisabledVehicle __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__DisabledVehicle __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DisabledVehicle_
{
  using Type = DisabledVehicle_<ContainerAllocator>;

  explicit DisabledVehicle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status_details(_init),
    location_details(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  explicit DisabledVehicle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status_details(_alloc, _init),
    location_details(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  // field types and members
  using _presence_vector_type =
    uint16_t;
  _presence_vector_type presence_vector;
  using _status_details_type =
    j2735_v2x_msgs::msg::ITIScodes_<ContainerAllocator>;
  _status_details_type status_details;
  using _location_details_type =
    j2735_v2x_msgs::msg::ITISGenericLocations_<ContainerAllocator>;
  _location_details_type location_details;

  // setters for named parameter idiom
  Type & set__presence_vector(
    const uint16_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__status_details(
    const j2735_v2x_msgs::msg::ITIScodes_<ContainerAllocator> & _arg)
  {
    this->status_details = _arg;
    return *this;
  }
  Type & set__location_details(
    const j2735_v2x_msgs::msg::ITISGenericLocations_<ContainerAllocator> & _arg)
  {
    this->location_details = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t HAS_LOCATION_DETAILS =
    1u;
  static constexpr uint16_t STATUS_DETAILS_MIN =
    532u;
  static constexpr uint16_t STATUS_DETAILS_MAX =
    541u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::DisabledVehicle_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::DisabledVehicle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::DisabledVehicle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::DisabledVehicle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::DisabledVehicle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::DisabledVehicle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::DisabledVehicle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::DisabledVehicle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::DisabledVehicle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::DisabledVehicle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__DisabledVehicle
    std::shared_ptr<j2735_v2x_msgs::msg::DisabledVehicle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__DisabledVehicle
    std::shared_ptr<j2735_v2x_msgs::msg::DisabledVehicle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DisabledVehicle_ & other) const
  {
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->status_details != other.status_details) {
      return false;
    }
    if (this->location_details != other.location_details) {
      return false;
    }
    return true;
  }
  bool operator!=(const DisabledVehicle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DisabledVehicle_

// alias to use template instance with default allocator
using DisabledVehicle =
  j2735_v2x_msgs::msg::DisabledVehicle_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t DisabledVehicle_<ContainerAllocator>::HAS_LOCATION_DETAILS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t DisabledVehicle_<ContainerAllocator>::STATUS_DETAILS_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t DisabledVehicle_<ContainerAllocator>::STATUS_DETAILS_MAX;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__DISABLED_VEHICLE__STRUCT_HPP_
