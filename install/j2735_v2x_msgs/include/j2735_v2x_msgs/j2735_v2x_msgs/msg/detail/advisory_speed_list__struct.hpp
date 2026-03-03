// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/AdvisorySpeedList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/advisory_speed_list.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED_LIST__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'advisory_speed_list'
#include "j2735_v2x_msgs/msg/detail/advisory_speed__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__AdvisorySpeedList __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__AdvisorySpeedList __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AdvisorySpeedList_
{
  using Type = AdvisorySpeedList_<ContainerAllocator>;

  explicit AdvisorySpeedList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AdvisorySpeedList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _advisory_speed_list_type =
    std::vector<j2735_v2x_msgs::msg::AdvisorySpeed_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::AdvisorySpeed_<ContainerAllocator>>>;
  _advisory_speed_list_type advisory_speed_list;

  // setters for named parameter idiom
  Type & set__advisory_speed_list(
    const std::vector<j2735_v2x_msgs::msg::AdvisorySpeed_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::AdvisorySpeed_<ContainerAllocator>>> & _arg)
  {
    this->advisory_speed_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::AdvisorySpeedList_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::AdvisorySpeedList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::AdvisorySpeedList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::AdvisorySpeedList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::AdvisorySpeedList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::AdvisorySpeedList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::AdvisorySpeedList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::AdvisorySpeedList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::AdvisorySpeedList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::AdvisorySpeedList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__AdvisorySpeedList
    std::shared_ptr<j2735_v2x_msgs::msg::AdvisorySpeedList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__AdvisorySpeedList
    std::shared_ptr<j2735_v2x_msgs::msg::AdvisorySpeedList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AdvisorySpeedList_ & other) const
  {
    if (this->advisory_speed_list != other.advisory_speed_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const AdvisorySpeedList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AdvisorySpeedList_

// alias to use template instance with default allocator
using AdvisorySpeedList =
  j2735_v2x_msgs::msg::AdvisorySpeedList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED_LIST__STRUCT_HPP_
