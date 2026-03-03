// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlParams.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_params.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PARAMS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'vclasses'
#include "j2735_v2x_msgs/msg/detail/traffic_control_veh_class__struct.hpp"
// Member 'schedule'
#include "j2735_v2x_msgs/msg/detail/traffic_control_schedule__struct.hpp"
// Member 'detail'
#include "j2735_v2x_msgs/msg/detail/traffic_control_detail__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__TrafficControlParams __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__TrafficControlParams __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficControlParams_
{
  using Type = TrafficControlParams_<ContainerAllocator>;

  explicit TrafficControlParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : schedule(_init),
    detail(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->regulatory = false;
    }
  }

  explicit TrafficControlParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : schedule(_alloc, _init),
    detail(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->regulatory = false;
    }
  }

  // field types and members
  using _vclasses_type =
    std::vector<j2735_v2x_msgs::msg::TrafficControlVehClass_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::TrafficControlVehClass_<ContainerAllocator>>>;
  _vclasses_type vclasses;
  using _schedule_type =
    j2735_v2x_msgs::msg::TrafficControlSchedule_<ContainerAllocator>;
  _schedule_type schedule;
  using _regulatory_type =
    bool;
  _regulatory_type regulatory;
  using _detail_type =
    j2735_v2x_msgs::msg::TrafficControlDetail_<ContainerAllocator>;
  _detail_type detail;

  // setters for named parameter idiom
  Type & set__vclasses(
    const std::vector<j2735_v2x_msgs::msg::TrafficControlVehClass_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::TrafficControlVehClass_<ContainerAllocator>>> & _arg)
  {
    this->vclasses = _arg;
    return *this;
  }
  Type & set__schedule(
    const j2735_v2x_msgs::msg::TrafficControlSchedule_<ContainerAllocator> & _arg)
  {
    this->schedule = _arg;
    return *this;
  }
  Type & set__regulatory(
    const bool & _arg)
  {
    this->regulatory = _arg;
    return *this;
  }
  Type & set__detail(
    const j2735_v2x_msgs::msg::TrafficControlDetail_<ContainerAllocator> & _arg)
  {
    this->detail = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::TrafficControlParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::TrafficControlParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrafficControlParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrafficControlParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrafficControlParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrafficControlParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrafficControlParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrafficControlParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrafficControlParams
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrafficControlParams
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficControlParams_ & other) const
  {
    if (this->vclasses != other.vclasses) {
      return false;
    }
    if (this->schedule != other.schedule) {
      return false;
    }
    if (this->regulatory != other.regulatory) {
      return false;
    }
    if (this->detail != other.detail) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficControlParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficControlParams_

// alias to use template instance with default allocator
using TrafficControlParams =
  j2735_v2x_msgs::msg::TrafficControlParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PARAMS__STRUCT_HPP_
