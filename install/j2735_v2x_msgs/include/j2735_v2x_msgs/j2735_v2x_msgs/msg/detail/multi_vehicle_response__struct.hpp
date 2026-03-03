// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/MultiVehicleResponse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/multi_vehicle_response.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__MULTI_VEHICLE_RESPONSE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__MULTI_VEHICLE_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__MultiVehicleResponse __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__MultiVehicleResponse __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MultiVehicleResponse_
{
  using Type = MultiVehicleResponse_<ContainerAllocator>;

  explicit MultiVehicleResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->multi_vehicle_response = 0;
    }
  }

  explicit MultiVehicleResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->multi_vehicle_response = 0;
    }
  }

  // field types and members
  using _multi_vehicle_response_type =
    uint8_t;
  _multi_vehicle_response_type multi_vehicle_response;

  // setters for named parameter idiom
  Type & set__multi_vehicle_response(
    const uint8_t & _arg)
  {
    this->multi_vehicle_response = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNAVAILABLE =
    0u;
  static constexpr uint8_t SINGLE_VEHICLE =
    1u;
  static constexpr uint8_t MULTI_VEHICLE =
    2u;
  static constexpr uint8_t RESERVED =
    3u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::MultiVehicleResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::MultiVehicleResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::MultiVehicleResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::MultiVehicleResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::MultiVehicleResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::MultiVehicleResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::MultiVehicleResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::MultiVehicleResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::MultiVehicleResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::MultiVehicleResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__MultiVehicleResponse
    std::shared_ptr<j2735_v2x_msgs::msg::MultiVehicleResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__MultiVehicleResponse
    std::shared_ptr<j2735_v2x_msgs::msg::MultiVehicleResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiVehicleResponse_ & other) const
  {
    if (this->multi_vehicle_response != other.multi_vehicle_response) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiVehicleResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiVehicleResponse_

// alias to use template instance with default allocator
using MultiVehicleResponse =
  j2735_v2x_msgs::msg::MultiVehicleResponse_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MultiVehicleResponse_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MultiVehicleResponse_<ContainerAllocator>::SINGLE_VEHICLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MultiVehicleResponse_<ContainerAllocator>::MULTI_VEHICLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MultiVehicleResponse_<ContainerAllocator>::RESERVED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MULTI_VEHICLE_RESPONSE__STRUCT_HPP_
