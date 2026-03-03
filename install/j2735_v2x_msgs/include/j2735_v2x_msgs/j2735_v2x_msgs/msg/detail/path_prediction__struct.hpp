// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/PathPrediction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/path_prediction.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PATH_PREDICTION__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PATH_PREDICTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__PathPrediction __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__PathPrediction __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathPrediction_
{
  using Type = PathPrediction_<ContainerAllocator>;

  explicit PathPrediction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radius_of_curvature = 0;
      this->confidence = 0;
    }
  }

  explicit PathPrediction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radius_of_curvature = 0;
      this->confidence = 0;
    }
  }

  // field types and members
  using _radius_of_curvature_type =
    int16_t;
  _radius_of_curvature_type radius_of_curvature;
  using _confidence_type =
    uint8_t;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__radius_of_curvature(
    const int16_t & _arg)
  {
    this->radius_of_curvature = _arg;
    return *this;
  }
  Type & set__confidence(
    const uint8_t & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::PathPrediction_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::PathPrediction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PathPrediction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PathPrediction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PathPrediction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PathPrediction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PathPrediction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PathPrediction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PathPrediction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PathPrediction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__PathPrediction
    std::shared_ptr<j2735_v2x_msgs::msg::PathPrediction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__PathPrediction
    std::shared_ptr<j2735_v2x_msgs::msg::PathPrediction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathPrediction_ & other) const
  {
    if (this->radius_of_curvature != other.radius_of_curvature) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathPrediction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathPrediction_

// alias to use template instance with default allocator
using PathPrediction =
  j2735_v2x_msgs::msg::PathPrediction_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PATH_PREDICTION__STRUCT_HPP_
