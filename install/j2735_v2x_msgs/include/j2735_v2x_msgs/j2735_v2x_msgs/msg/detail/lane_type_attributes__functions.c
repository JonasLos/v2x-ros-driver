// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/LaneTypeAttributes.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/lane_type_attributes__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `vehicle`
#include "j2735_v2x_msgs/msg/detail/lane_attributes_vehicle__functions.h"
// Member `crosswalk`
#include "j2735_v2x_msgs/msg/detail/lane_attributes_crosswalk__functions.h"
// Member `bike_lane`
#include "j2735_v2x_msgs/msg/detail/lane_attributes_bike__functions.h"
// Member `sidewalk`
#include "j2735_v2x_msgs/msg/detail/lane_attributes_sidewalk__functions.h"
// Member `median`
#include "j2735_v2x_msgs/msg/detail/lane_attributes_barrier__functions.h"
// Member `striping`
#include "j2735_v2x_msgs/msg/detail/lane_attributes_striping__functions.h"
// Member `tracked_vehicle`
#include "j2735_v2x_msgs/msg/detail/lane_attributes_tracked_vehicle__functions.h"
// Member `parking`
#include "j2735_v2x_msgs/msg/detail/lane_attributes_parking__functions.h"

bool
j2735_v2x_msgs__msg__LaneTypeAttributes__init(j2735_v2x_msgs__msg__LaneTypeAttributes * msg)
{
  if (!msg) {
    return false;
  }
  // choice
  // vehicle
  if (!j2735_v2x_msgs__msg__LaneAttributesVehicle__init(&msg->vehicle)) {
    j2735_v2x_msgs__msg__LaneTypeAttributes__fini(msg);
    return false;
  }
  // crosswalk
  if (!j2735_v2x_msgs__msg__LaneAttributesCrosswalk__init(&msg->crosswalk)) {
    j2735_v2x_msgs__msg__LaneTypeAttributes__fini(msg);
    return false;
  }
  // bike_lane
  if (!j2735_v2x_msgs__msg__LaneAttributesBike__init(&msg->bike_lane)) {
    j2735_v2x_msgs__msg__LaneTypeAttributes__fini(msg);
    return false;
  }
  // sidewalk
  if (!j2735_v2x_msgs__msg__LaneAttributesSidewalk__init(&msg->sidewalk)) {
    j2735_v2x_msgs__msg__LaneTypeAttributes__fini(msg);
    return false;
  }
  // median
  if (!j2735_v2x_msgs__msg__LaneAttributesBarrier__init(&msg->median)) {
    j2735_v2x_msgs__msg__LaneTypeAttributes__fini(msg);
    return false;
  }
  // striping
  if (!j2735_v2x_msgs__msg__LaneAttributesStriping__init(&msg->striping)) {
    j2735_v2x_msgs__msg__LaneTypeAttributes__fini(msg);
    return false;
  }
  // tracked_vehicle
  if (!j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__init(&msg->tracked_vehicle)) {
    j2735_v2x_msgs__msg__LaneTypeAttributes__fini(msg);
    return false;
  }
  // parking
  if (!j2735_v2x_msgs__msg__LaneAttributesParking__init(&msg->parking)) {
    j2735_v2x_msgs__msg__LaneTypeAttributes__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__LaneTypeAttributes__fini(j2735_v2x_msgs__msg__LaneTypeAttributes * msg)
{
  if (!msg) {
    return;
  }
  // choice
  // vehicle
  j2735_v2x_msgs__msg__LaneAttributesVehicle__fini(&msg->vehicle);
  // crosswalk
  j2735_v2x_msgs__msg__LaneAttributesCrosswalk__fini(&msg->crosswalk);
  // bike_lane
  j2735_v2x_msgs__msg__LaneAttributesBike__fini(&msg->bike_lane);
  // sidewalk
  j2735_v2x_msgs__msg__LaneAttributesSidewalk__fini(&msg->sidewalk);
  // median
  j2735_v2x_msgs__msg__LaneAttributesBarrier__fini(&msg->median);
  // striping
  j2735_v2x_msgs__msg__LaneAttributesStriping__fini(&msg->striping);
  // tracked_vehicle
  j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__fini(&msg->tracked_vehicle);
  // parking
  j2735_v2x_msgs__msg__LaneAttributesParking__fini(&msg->parking);
}

bool
j2735_v2x_msgs__msg__LaneTypeAttributes__are_equal(const j2735_v2x_msgs__msg__LaneTypeAttributes * lhs, const j2735_v2x_msgs__msg__LaneTypeAttributes * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // choice
  if (lhs->choice != rhs->choice) {
    return false;
  }
  // vehicle
  if (!j2735_v2x_msgs__msg__LaneAttributesVehicle__are_equal(
      &(lhs->vehicle), &(rhs->vehicle)))
  {
    return false;
  }
  // crosswalk
  if (!j2735_v2x_msgs__msg__LaneAttributesCrosswalk__are_equal(
      &(lhs->crosswalk), &(rhs->crosswalk)))
  {
    return false;
  }
  // bike_lane
  if (!j2735_v2x_msgs__msg__LaneAttributesBike__are_equal(
      &(lhs->bike_lane), &(rhs->bike_lane)))
  {
    return false;
  }
  // sidewalk
  if (!j2735_v2x_msgs__msg__LaneAttributesSidewalk__are_equal(
      &(lhs->sidewalk), &(rhs->sidewalk)))
  {
    return false;
  }
  // median
  if (!j2735_v2x_msgs__msg__LaneAttributesBarrier__are_equal(
      &(lhs->median), &(rhs->median)))
  {
    return false;
  }
  // striping
  if (!j2735_v2x_msgs__msg__LaneAttributesStriping__are_equal(
      &(lhs->striping), &(rhs->striping)))
  {
    return false;
  }
  // tracked_vehicle
  if (!j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__are_equal(
      &(lhs->tracked_vehicle), &(rhs->tracked_vehicle)))
  {
    return false;
  }
  // parking
  if (!j2735_v2x_msgs__msg__LaneAttributesParking__are_equal(
      &(lhs->parking), &(rhs->parking)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__LaneTypeAttributes__copy(
  const j2735_v2x_msgs__msg__LaneTypeAttributes * input,
  j2735_v2x_msgs__msg__LaneTypeAttributes * output)
{
  if (!input || !output) {
    return false;
  }
  // choice
  output->choice = input->choice;
  // vehicle
  if (!j2735_v2x_msgs__msg__LaneAttributesVehicle__copy(
      &(input->vehicle), &(output->vehicle)))
  {
    return false;
  }
  // crosswalk
  if (!j2735_v2x_msgs__msg__LaneAttributesCrosswalk__copy(
      &(input->crosswalk), &(output->crosswalk)))
  {
    return false;
  }
  // bike_lane
  if (!j2735_v2x_msgs__msg__LaneAttributesBike__copy(
      &(input->bike_lane), &(output->bike_lane)))
  {
    return false;
  }
  // sidewalk
  if (!j2735_v2x_msgs__msg__LaneAttributesSidewalk__copy(
      &(input->sidewalk), &(output->sidewalk)))
  {
    return false;
  }
  // median
  if (!j2735_v2x_msgs__msg__LaneAttributesBarrier__copy(
      &(input->median), &(output->median)))
  {
    return false;
  }
  // striping
  if (!j2735_v2x_msgs__msg__LaneAttributesStriping__copy(
      &(input->striping), &(output->striping)))
  {
    return false;
  }
  // tracked_vehicle
  if (!j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__copy(
      &(input->tracked_vehicle), &(output->tracked_vehicle)))
  {
    return false;
  }
  // parking
  if (!j2735_v2x_msgs__msg__LaneAttributesParking__copy(
      &(input->parking), &(output->parking)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__LaneTypeAttributes *
j2735_v2x_msgs__msg__LaneTypeAttributes__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__LaneTypeAttributes * msg = (j2735_v2x_msgs__msg__LaneTypeAttributes *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__LaneTypeAttributes), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__LaneTypeAttributes));
  bool success = j2735_v2x_msgs__msg__LaneTypeAttributes__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__LaneTypeAttributes__destroy(j2735_v2x_msgs__msg__LaneTypeAttributes * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__LaneTypeAttributes__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__LaneTypeAttributes__Sequence__init(j2735_v2x_msgs__msg__LaneTypeAttributes__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__LaneTypeAttributes * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__LaneTypeAttributes *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__LaneTypeAttributes), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__LaneTypeAttributes__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__LaneTypeAttributes__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
j2735_v2x_msgs__msg__LaneTypeAttributes__Sequence__fini(j2735_v2x_msgs__msg__LaneTypeAttributes__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      j2735_v2x_msgs__msg__LaneTypeAttributes__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

j2735_v2x_msgs__msg__LaneTypeAttributes__Sequence *
j2735_v2x_msgs__msg__LaneTypeAttributes__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__LaneTypeAttributes__Sequence * array = (j2735_v2x_msgs__msg__LaneTypeAttributes__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__LaneTypeAttributes__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__LaneTypeAttributes__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__LaneTypeAttributes__Sequence__destroy(j2735_v2x_msgs__msg__LaneTypeAttributes__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__LaneTypeAttributes__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__LaneTypeAttributes__Sequence__are_equal(const j2735_v2x_msgs__msg__LaneTypeAttributes__Sequence * lhs, const j2735_v2x_msgs__msg__LaneTypeAttributes__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__LaneTypeAttributes__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__LaneTypeAttributes__Sequence__copy(
  const j2735_v2x_msgs__msg__LaneTypeAttributes__Sequence * input,
  j2735_v2x_msgs__msg__LaneTypeAttributes__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__LaneTypeAttributes);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__LaneTypeAttributes * data =
      (j2735_v2x_msgs__msg__LaneTypeAttributes *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__LaneTypeAttributes__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__LaneTypeAttributes__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__LaneTypeAttributes__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
