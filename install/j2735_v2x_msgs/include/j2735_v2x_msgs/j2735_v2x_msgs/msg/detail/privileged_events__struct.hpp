// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/PrivilegedEvents.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/privileged_events.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PRIVILEGED_EVENTS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PRIVILEGED_EVENTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'event'
#include "j2735_v2x_msgs/msg/detail/privileged_event_flags__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__PrivilegedEvents __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__PrivilegedEvents __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PrivilegedEvents_
{
  using Type = PrivilegedEvents_<ContainerAllocator>;

  explicit PrivilegedEvents_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : event(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ssp_index = 0;
    }
  }

  explicit PrivilegedEvents_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : event(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ssp_index = 0;
    }
  }

  // field types and members
  using _ssp_index_type =
    uint8_t;
  _ssp_index_type ssp_index;
  using _event_type =
    j2735_v2x_msgs::msg::PrivilegedEventFlags_<ContainerAllocator>;
  _event_type event;

  // setters for named parameter idiom
  Type & set__ssp_index(
    const uint8_t & _arg)
  {
    this->ssp_index = _arg;
    return *this;
  }
  Type & set__event(
    const j2735_v2x_msgs::msg::PrivilegedEventFlags_<ContainerAllocator> & _arg)
  {
    this->event = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::PrivilegedEvents_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::PrivilegedEvents_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PrivilegedEvents_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PrivilegedEvents_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PrivilegedEvents_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PrivilegedEvents_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PrivilegedEvents_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PrivilegedEvents_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PrivilegedEvents_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PrivilegedEvents_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__PrivilegedEvents
    std::shared_ptr<j2735_v2x_msgs::msg::PrivilegedEvents_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__PrivilegedEvents
    std::shared_ptr<j2735_v2x_msgs::msg::PrivilegedEvents_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PrivilegedEvents_ & other) const
  {
    if (this->ssp_index != other.ssp_index) {
      return false;
    }
    if (this->event != other.event) {
      return false;
    }
    return true;
  }
  bool operator!=(const PrivilegedEvents_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PrivilegedEvents_

// alias to use template instance with default allocator
using PrivilegedEvents =
  j2735_v2x_msgs::msg::PrivilegedEvents_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PRIVILEGED_EVENTS__STRUCT_HPP_
