// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/PreemptPriorityList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/preempt_priority_list.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PREEMPT_PRIORITY_LIST__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PREEMPT_PRIORITY_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'preempt_priority_list'
#include "j2735_v2x_msgs/msg/detail/signal_control_zone__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__PreemptPriorityList __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__PreemptPriorityList __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PreemptPriorityList_
{
  using Type = PreemptPriorityList_<ContainerAllocator>;

  explicit PreemptPriorityList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PreemptPriorityList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _preempt_priority_list_type =
    std::vector<j2735_v2x_msgs::msg::SignalControlZone_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::SignalControlZone_<ContainerAllocator>>>;
  _preempt_priority_list_type preempt_priority_list;

  // setters for named parameter idiom
  Type & set__preempt_priority_list(
    const std::vector<j2735_v2x_msgs::msg::SignalControlZone_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::SignalControlZone_<ContainerAllocator>>> & _arg)
  {
    this->preempt_priority_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::PreemptPriorityList_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::PreemptPriorityList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PreemptPriorityList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PreemptPriorityList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PreemptPriorityList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PreemptPriorityList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PreemptPriorityList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PreemptPriorityList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PreemptPriorityList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PreemptPriorityList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__PreemptPriorityList
    std::shared_ptr<j2735_v2x_msgs::msg::PreemptPriorityList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__PreemptPriorityList
    std::shared_ptr<j2735_v2x_msgs::msg::PreemptPriorityList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PreemptPriorityList_ & other) const
  {
    if (this->preempt_priority_list != other.preempt_priority_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const PreemptPriorityList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PreemptPriorityList_

// alias to use template instance with default allocator
using PreemptPriorityList =
  j2735_v2x_msgs::msg::PreemptPriorityList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PREEMPT_PRIORITY_LIST__STRUCT_HPP_
