// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/LaneTypeAttributes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_type_attributes.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_TYPE_ATTRIBUTES__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_TYPE_ATTRIBUTES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'vehicle'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_vehicle__struct.hpp"
// Member 'crosswalk'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_crosswalk__struct.hpp"
// Member 'bike_lane'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_bike__struct.hpp"
// Member 'sidewalk'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_sidewalk__struct.hpp"
// Member 'median'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_barrier__struct.hpp"
// Member 'striping'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_striping__struct.hpp"
// Member 'tracked_vehicle'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_tracked_vehicle__struct.hpp"
// Member 'parking'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_parking__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__LaneTypeAttributes __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__LaneTypeAttributes __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneTypeAttributes_
{
  using Type = LaneTypeAttributes_<ContainerAllocator>;

  explicit LaneTypeAttributes_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vehicle(_init),
    crosswalk(_init),
    bike_lane(_init),
    sidewalk(_init),
    median(_init),
    striping(_init),
    tracked_vehicle(_init),
    parking(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
    }
  }

  explicit LaneTypeAttributes_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vehicle(_alloc, _init),
    crosswalk(_alloc, _init),
    bike_lane(_alloc, _init),
    sidewalk(_alloc, _init),
    median(_alloc, _init),
    striping(_alloc, _init),
    tracked_vehicle(_alloc, _init),
    parking(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
    }
  }

  // field types and members
  using _choice_type =
    uint8_t;
  _choice_type choice;
  using _vehicle_type =
    j2735_v2x_msgs::msg::LaneAttributesVehicle_<ContainerAllocator>;
  _vehicle_type vehicle;
  using _crosswalk_type =
    j2735_v2x_msgs::msg::LaneAttributesCrosswalk_<ContainerAllocator>;
  _crosswalk_type crosswalk;
  using _bike_lane_type =
    j2735_v2x_msgs::msg::LaneAttributesBike_<ContainerAllocator>;
  _bike_lane_type bike_lane;
  using _sidewalk_type =
    j2735_v2x_msgs::msg::LaneAttributesSidewalk_<ContainerAllocator>;
  _sidewalk_type sidewalk;
  using _median_type =
    j2735_v2x_msgs::msg::LaneAttributesBarrier_<ContainerAllocator>;
  _median_type median;
  using _striping_type =
    j2735_v2x_msgs::msg::LaneAttributesStriping_<ContainerAllocator>;
  _striping_type striping;
  using _tracked_vehicle_type =
    j2735_v2x_msgs::msg::LaneAttributesTrackedVehicle_<ContainerAllocator>;
  _tracked_vehicle_type tracked_vehicle;
  using _parking_type =
    j2735_v2x_msgs::msg::LaneAttributesParking_<ContainerAllocator>;
  _parking_type parking;

  // setters for named parameter idiom
  Type & set__choice(
    const uint8_t & _arg)
  {
    this->choice = _arg;
    return *this;
  }
  Type & set__vehicle(
    const j2735_v2x_msgs::msg::LaneAttributesVehicle_<ContainerAllocator> & _arg)
  {
    this->vehicle = _arg;
    return *this;
  }
  Type & set__crosswalk(
    const j2735_v2x_msgs::msg::LaneAttributesCrosswalk_<ContainerAllocator> & _arg)
  {
    this->crosswalk = _arg;
    return *this;
  }
  Type & set__bike_lane(
    const j2735_v2x_msgs::msg::LaneAttributesBike_<ContainerAllocator> & _arg)
  {
    this->bike_lane = _arg;
    return *this;
  }
  Type & set__sidewalk(
    const j2735_v2x_msgs::msg::LaneAttributesSidewalk_<ContainerAllocator> & _arg)
  {
    this->sidewalk = _arg;
    return *this;
  }
  Type & set__median(
    const j2735_v2x_msgs::msg::LaneAttributesBarrier_<ContainerAllocator> & _arg)
  {
    this->median = _arg;
    return *this;
  }
  Type & set__striping(
    const j2735_v2x_msgs::msg::LaneAttributesStriping_<ContainerAllocator> & _arg)
  {
    this->striping = _arg;
    return *this;
  }
  Type & set__tracked_vehicle(
    const j2735_v2x_msgs::msg::LaneAttributesTrackedVehicle_<ContainerAllocator> & _arg)
  {
    this->tracked_vehicle = _arg;
    return *this;
  }
  Type & set__parking(
    const j2735_v2x_msgs::msg::LaneAttributesParking_<ContainerAllocator> & _arg)
  {
    this->parking = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t VEHICLE =
    0u;
  static constexpr uint8_t CROSSWALK =
    1u;
  static constexpr uint8_t BIKE_LANE =
    2u;
  static constexpr uint8_t SIDEWALK =
    3u;
  static constexpr uint8_t MEDIAN =
    4u;
  static constexpr uint8_t STRIPING =
    5u;
  static constexpr uint8_t TRACKED_VEHICLE =
    6u;
  static constexpr uint8_t PARKING =
    7u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::LaneTypeAttributes_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::LaneTypeAttributes_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::LaneTypeAttributes_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::LaneTypeAttributes_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::LaneTypeAttributes_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::LaneTypeAttributes_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::LaneTypeAttributes_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::LaneTypeAttributes_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::LaneTypeAttributes_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::LaneTypeAttributes_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__LaneTypeAttributes
    std::shared_ptr<j2735_v2x_msgs::msg::LaneTypeAttributes_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__LaneTypeAttributes
    std::shared_ptr<j2735_v2x_msgs::msg::LaneTypeAttributes_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneTypeAttributes_ & other) const
  {
    if (this->choice != other.choice) {
      return false;
    }
    if (this->vehicle != other.vehicle) {
      return false;
    }
    if (this->crosswalk != other.crosswalk) {
      return false;
    }
    if (this->bike_lane != other.bike_lane) {
      return false;
    }
    if (this->sidewalk != other.sidewalk) {
      return false;
    }
    if (this->median != other.median) {
      return false;
    }
    if (this->striping != other.striping) {
      return false;
    }
    if (this->tracked_vehicle != other.tracked_vehicle) {
      return false;
    }
    if (this->parking != other.parking) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneTypeAttributes_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneTypeAttributes_

// alias to use template instance with default allocator
using LaneTypeAttributes =
  j2735_v2x_msgs::msg::LaneTypeAttributes_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneTypeAttributes_<ContainerAllocator>::VEHICLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneTypeAttributes_<ContainerAllocator>::CROSSWALK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneTypeAttributes_<ContainerAllocator>::BIKE_LANE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneTypeAttributes_<ContainerAllocator>::SIDEWALK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneTypeAttributes_<ContainerAllocator>::MEDIAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneTypeAttributes_<ContainerAllocator>::STRIPING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneTypeAttributes_<ContainerAllocator>::TRACKED_VEHICLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneTypeAttributes_<ContainerAllocator>::PARKING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_TYPE_ATTRIBUTES__STRUCT_HPP_
