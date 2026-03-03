// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/SpecialVehicleExtensions.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/special_vehicle_extensions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `vehicle_alerts`
#include "j2735_v2x_msgs/msg/detail/emergency_details__functions.h"
// Member `description`
#include "j2735_v2x_msgs/msg/detail/event_description__functions.h"
// Member `trailers`
#include "j2735_v2x_msgs/msg/detail/trailer_data__functions.h"

bool
j2735_v2x_msgs__msg__SpecialVehicleExtensions__init(j2735_v2x_msgs__msg__SpecialVehicleExtensions * msg)
{
  if (!msg) {
    return false;
  }
  // presence_vector
  // vehicle_alerts
  if (!j2735_v2x_msgs__msg__EmergencyDetails__init(&msg->vehicle_alerts)) {
    j2735_v2x_msgs__msg__SpecialVehicleExtensions__fini(msg);
    return false;
  }
  // description
  if (!j2735_v2x_msgs__msg__EventDescription__init(&msg->description)) {
    j2735_v2x_msgs__msg__SpecialVehicleExtensions__fini(msg);
    return false;
  }
  // trailers
  if (!j2735_v2x_msgs__msg__TrailerData__init(&msg->trailers)) {
    j2735_v2x_msgs__msg__SpecialVehicleExtensions__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__SpecialVehicleExtensions__fini(j2735_v2x_msgs__msg__SpecialVehicleExtensions * msg)
{
  if (!msg) {
    return;
  }
  // presence_vector
  // vehicle_alerts
  j2735_v2x_msgs__msg__EmergencyDetails__fini(&msg->vehicle_alerts);
  // description
  j2735_v2x_msgs__msg__EventDescription__fini(&msg->description);
  // trailers
  j2735_v2x_msgs__msg__TrailerData__fini(&msg->trailers);
}

bool
j2735_v2x_msgs__msg__SpecialVehicleExtensions__are_equal(const j2735_v2x_msgs__msg__SpecialVehicleExtensions * lhs, const j2735_v2x_msgs__msg__SpecialVehicleExtensions * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // vehicle_alerts
  if (!j2735_v2x_msgs__msg__EmergencyDetails__are_equal(
      &(lhs->vehicle_alerts), &(rhs->vehicle_alerts)))
  {
    return false;
  }
  // description
  if (!j2735_v2x_msgs__msg__EventDescription__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  // trailers
  if (!j2735_v2x_msgs__msg__TrailerData__are_equal(
      &(lhs->trailers), &(rhs->trailers)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__SpecialVehicleExtensions__copy(
  const j2735_v2x_msgs__msg__SpecialVehicleExtensions * input,
  j2735_v2x_msgs__msg__SpecialVehicleExtensions * output)
{
  if (!input || !output) {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // vehicle_alerts
  if (!j2735_v2x_msgs__msg__EmergencyDetails__copy(
      &(input->vehicle_alerts), &(output->vehicle_alerts)))
  {
    return false;
  }
  // description
  if (!j2735_v2x_msgs__msg__EventDescription__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  // trailers
  if (!j2735_v2x_msgs__msg__TrailerData__copy(
      &(input->trailers), &(output->trailers)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__SpecialVehicleExtensions *
j2735_v2x_msgs__msg__SpecialVehicleExtensions__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__SpecialVehicleExtensions * msg = (j2735_v2x_msgs__msg__SpecialVehicleExtensions *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__SpecialVehicleExtensions), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__SpecialVehicleExtensions));
  bool success = j2735_v2x_msgs__msg__SpecialVehicleExtensions__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__SpecialVehicleExtensions__destroy(j2735_v2x_msgs__msg__SpecialVehicleExtensions * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__SpecialVehicleExtensions__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__SpecialVehicleExtensions__Sequence__init(j2735_v2x_msgs__msg__SpecialVehicleExtensions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__SpecialVehicleExtensions * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__SpecialVehicleExtensions *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__SpecialVehicleExtensions), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__SpecialVehicleExtensions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__SpecialVehicleExtensions__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__SpecialVehicleExtensions__Sequence__fini(j2735_v2x_msgs__msg__SpecialVehicleExtensions__Sequence * array)
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
      j2735_v2x_msgs__msg__SpecialVehicleExtensions__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__SpecialVehicleExtensions__Sequence *
j2735_v2x_msgs__msg__SpecialVehicleExtensions__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__SpecialVehicleExtensions__Sequence * array = (j2735_v2x_msgs__msg__SpecialVehicleExtensions__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__SpecialVehicleExtensions__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__SpecialVehicleExtensions__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__SpecialVehicleExtensions__Sequence__destroy(j2735_v2x_msgs__msg__SpecialVehicleExtensions__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__SpecialVehicleExtensions__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__SpecialVehicleExtensions__Sequence__are_equal(const j2735_v2x_msgs__msg__SpecialVehicleExtensions__Sequence * lhs, const j2735_v2x_msgs__msg__SpecialVehicleExtensions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__SpecialVehicleExtensions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__SpecialVehicleExtensions__Sequence__copy(
  const j2735_v2x_msgs__msg__SpecialVehicleExtensions__Sequence * input,
  j2735_v2x_msgs__msg__SpecialVehicleExtensions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__SpecialVehicleExtensions);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__SpecialVehicleExtensions * data =
      (j2735_v2x_msgs__msg__SpecialVehicleExtensions *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__SpecialVehicleExtensions__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__SpecialVehicleExtensions__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__SpecialVehicleExtensions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
