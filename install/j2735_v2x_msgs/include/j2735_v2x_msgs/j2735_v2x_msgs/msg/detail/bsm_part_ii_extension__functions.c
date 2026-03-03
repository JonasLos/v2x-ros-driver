// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/BSMPartIIExtension.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/bsm_part_ii_extension__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `vehicle_safety_extensions`
#include "j2735_v2x_msgs/msg/detail/vehicle_safety_extensions__functions.h"
// Member `special_vehicle_extensions`
#include "j2735_v2x_msgs/msg/detail/special_vehicle_extensions__functions.h"
// Member `supplemental_vehicle_extensions`
#include "j2735_v2x_msgs/msg/detail/supplemental_vehicle_extensions__functions.h"

bool
j2735_v2x_msgs__msg__BSMPartIIExtension__init(j2735_v2x_msgs__msg__BSMPartIIExtension * msg)
{
  if (!msg) {
    return false;
  }
  // part_ii_id
  // vehicle_safety_extensions
  if (!j2735_v2x_msgs__msg__VehicleSafetyExtensions__init(&msg->vehicle_safety_extensions)) {
    j2735_v2x_msgs__msg__BSMPartIIExtension__fini(msg);
    return false;
  }
  // special_vehicle_extensions
  if (!j2735_v2x_msgs__msg__SpecialVehicleExtensions__init(&msg->special_vehicle_extensions)) {
    j2735_v2x_msgs__msg__BSMPartIIExtension__fini(msg);
    return false;
  }
  // supplemental_vehicle_extensions
  if (!j2735_v2x_msgs__msg__SupplementalVehicleExtensions__init(&msg->supplemental_vehicle_extensions)) {
    j2735_v2x_msgs__msg__BSMPartIIExtension__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__BSMPartIIExtension__fini(j2735_v2x_msgs__msg__BSMPartIIExtension * msg)
{
  if (!msg) {
    return;
  }
  // part_ii_id
  // vehicle_safety_extensions
  j2735_v2x_msgs__msg__VehicleSafetyExtensions__fini(&msg->vehicle_safety_extensions);
  // special_vehicle_extensions
  j2735_v2x_msgs__msg__SpecialVehicleExtensions__fini(&msg->special_vehicle_extensions);
  // supplemental_vehicle_extensions
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions__fini(&msg->supplemental_vehicle_extensions);
}

bool
j2735_v2x_msgs__msg__BSMPartIIExtension__are_equal(const j2735_v2x_msgs__msg__BSMPartIIExtension * lhs, const j2735_v2x_msgs__msg__BSMPartIIExtension * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // part_ii_id
  if (lhs->part_ii_id != rhs->part_ii_id) {
    return false;
  }
  // vehicle_safety_extensions
  if (!j2735_v2x_msgs__msg__VehicleSafetyExtensions__are_equal(
      &(lhs->vehicle_safety_extensions), &(rhs->vehicle_safety_extensions)))
  {
    return false;
  }
  // special_vehicle_extensions
  if (!j2735_v2x_msgs__msg__SpecialVehicleExtensions__are_equal(
      &(lhs->special_vehicle_extensions), &(rhs->special_vehicle_extensions)))
  {
    return false;
  }
  // supplemental_vehicle_extensions
  if (!j2735_v2x_msgs__msg__SupplementalVehicleExtensions__are_equal(
      &(lhs->supplemental_vehicle_extensions), &(rhs->supplemental_vehicle_extensions)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__BSMPartIIExtension__copy(
  const j2735_v2x_msgs__msg__BSMPartIIExtension * input,
  j2735_v2x_msgs__msg__BSMPartIIExtension * output)
{
  if (!input || !output) {
    return false;
  }
  // part_ii_id
  output->part_ii_id = input->part_ii_id;
  // vehicle_safety_extensions
  if (!j2735_v2x_msgs__msg__VehicleSafetyExtensions__copy(
      &(input->vehicle_safety_extensions), &(output->vehicle_safety_extensions)))
  {
    return false;
  }
  // special_vehicle_extensions
  if (!j2735_v2x_msgs__msg__SpecialVehicleExtensions__copy(
      &(input->special_vehicle_extensions), &(output->special_vehicle_extensions)))
  {
    return false;
  }
  // supplemental_vehicle_extensions
  if (!j2735_v2x_msgs__msg__SupplementalVehicleExtensions__copy(
      &(input->supplemental_vehicle_extensions), &(output->supplemental_vehicle_extensions)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__BSMPartIIExtension *
j2735_v2x_msgs__msg__BSMPartIIExtension__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__BSMPartIIExtension * msg = (j2735_v2x_msgs__msg__BSMPartIIExtension *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__BSMPartIIExtension), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__BSMPartIIExtension));
  bool success = j2735_v2x_msgs__msg__BSMPartIIExtension__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__BSMPartIIExtension__destroy(j2735_v2x_msgs__msg__BSMPartIIExtension * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__BSMPartIIExtension__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence__init(j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__BSMPartIIExtension * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__BSMPartIIExtension *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__BSMPartIIExtension), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__BSMPartIIExtension__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__BSMPartIIExtension__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence__fini(j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence * array)
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
      j2735_v2x_msgs__msg__BSMPartIIExtension__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence *
j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence * array = (j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence__destroy(j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence__are_equal(const j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence * lhs, const j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__BSMPartIIExtension__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence__copy(
  const j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence * input,
  j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__BSMPartIIExtension);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__BSMPartIIExtension * data =
      (j2735_v2x_msgs__msg__BSMPartIIExtension *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__BSMPartIIExtension__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__BSMPartIIExtension__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__BSMPartIIExtension__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
