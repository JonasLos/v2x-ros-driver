// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/PersonalCrossingRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/personal_crossing_request.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_CROSSING_REQUEST__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_CROSSING_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__PersonalCrossingRequest __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__PersonalCrossingRequest __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PersonalCrossingRequest_
{
  using Type = PersonalCrossingRequest_<ContainerAllocator>;

  explicit PersonalCrossingRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cross_request = false;
    }
  }

  explicit PersonalCrossingRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cross_request = false;
    }
  }

  // field types and members
  using _cross_request_type =
    bool;
  _cross_request_type cross_request;

  // setters for named parameter idiom
  Type & set__cross_request(
    const bool & _arg)
  {
    this->cross_request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::PersonalCrossingRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::PersonalCrossingRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PersonalCrossingRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PersonalCrossingRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PersonalCrossingRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PersonalCrossingRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PersonalCrossingRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PersonalCrossingRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PersonalCrossingRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PersonalCrossingRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__PersonalCrossingRequest
    std::shared_ptr<j2735_v2x_msgs::msg::PersonalCrossingRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__PersonalCrossingRequest
    std::shared_ptr<j2735_v2x_msgs::msg::PersonalCrossingRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PersonalCrossingRequest_ & other) const
  {
    if (this->cross_request != other.cross_request) {
      return false;
    }
    return true;
  }
  bool operator!=(const PersonalCrossingRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PersonalCrossingRequest_

// alias to use template instance with default allocator
using PersonalCrossingRequest =
  j2735_v2x_msgs::msg::PersonalCrossingRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_CROSSING_REQUEST__STRUCT_HPP_
