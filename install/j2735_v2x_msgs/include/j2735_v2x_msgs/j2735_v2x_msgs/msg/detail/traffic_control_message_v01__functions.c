// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/TrafficControlMessageV01.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/traffic_control_message_v01__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `reqid`
#include "j2735_v2x_msgs/msg/detail/id64b__functions.h"
// Member `id`
#include "j2735_v2x_msgs/msg/detail/id128b__functions.h"
// Member `package`
#include "j2735_v2x_msgs/msg/detail/traffic_control_package__functions.h"
// Member `params`
#include "j2735_v2x_msgs/msg/detail/traffic_control_params__functions.h"
// Member `geometry`
#include "j2735_v2x_msgs/msg/detail/traffic_control_geometry__functions.h"

bool
j2735_v2x_msgs__msg__TrafficControlMessageV01__init(j2735_v2x_msgs__msg__TrafficControlMessageV01 * msg)
{
  if (!msg) {
    return false;
  }
  // reqid
  if (!j2735_v2x_msgs__msg__Id64b__init(&msg->reqid)) {
    j2735_v2x_msgs__msg__TrafficControlMessageV01__fini(msg);
    return false;
  }
  // reqseq
  // msgtot
  // msgnum
  // id
  if (!j2735_v2x_msgs__msg__Id128b__init(&msg->id)) {
    j2735_v2x_msgs__msg__TrafficControlMessageV01__fini(msg);
    return false;
  }
  // updated
  // package
  if (!j2735_v2x_msgs__msg__TrafficControlPackage__init(&msg->package)) {
    j2735_v2x_msgs__msg__TrafficControlMessageV01__fini(msg);
    return false;
  }
  // package_exists
  // params
  if (!j2735_v2x_msgs__msg__TrafficControlParams__init(&msg->params)) {
    j2735_v2x_msgs__msg__TrafficControlMessageV01__fini(msg);
    return false;
  }
  // params_exists
  // geometry
  if (!j2735_v2x_msgs__msg__TrafficControlGeometry__init(&msg->geometry)) {
    j2735_v2x_msgs__msg__TrafficControlMessageV01__fini(msg);
    return false;
  }
  // geometry_exists
  return true;
}

void
j2735_v2x_msgs__msg__TrafficControlMessageV01__fini(j2735_v2x_msgs__msg__TrafficControlMessageV01 * msg)
{
  if (!msg) {
    return;
  }
  // reqid
  j2735_v2x_msgs__msg__Id64b__fini(&msg->reqid);
  // reqseq
  // msgtot
  // msgnum
  // id
  j2735_v2x_msgs__msg__Id128b__fini(&msg->id);
  // updated
  // package
  j2735_v2x_msgs__msg__TrafficControlPackage__fini(&msg->package);
  // package_exists
  // params
  j2735_v2x_msgs__msg__TrafficControlParams__fini(&msg->params);
  // params_exists
  // geometry
  j2735_v2x_msgs__msg__TrafficControlGeometry__fini(&msg->geometry);
  // geometry_exists
}

bool
j2735_v2x_msgs__msg__TrafficControlMessageV01__are_equal(const j2735_v2x_msgs__msg__TrafficControlMessageV01 * lhs, const j2735_v2x_msgs__msg__TrafficControlMessageV01 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reqid
  if (!j2735_v2x_msgs__msg__Id64b__are_equal(
      &(lhs->reqid), &(rhs->reqid)))
  {
    return false;
  }
  // reqseq
  if (lhs->reqseq != rhs->reqseq) {
    return false;
  }
  // msgtot
  if (lhs->msgtot != rhs->msgtot) {
    return false;
  }
  // msgnum
  if (lhs->msgnum != rhs->msgnum) {
    return false;
  }
  // id
  if (!j2735_v2x_msgs__msg__Id128b__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // updated
  if (lhs->updated != rhs->updated) {
    return false;
  }
  // package
  if (!j2735_v2x_msgs__msg__TrafficControlPackage__are_equal(
      &(lhs->package), &(rhs->package)))
  {
    return false;
  }
  // package_exists
  if (lhs->package_exists != rhs->package_exists) {
    return false;
  }
  // params
  if (!j2735_v2x_msgs__msg__TrafficControlParams__are_equal(
      &(lhs->params), &(rhs->params)))
  {
    return false;
  }
  // params_exists
  if (lhs->params_exists != rhs->params_exists) {
    return false;
  }
  // geometry
  if (!j2735_v2x_msgs__msg__TrafficControlGeometry__are_equal(
      &(lhs->geometry), &(rhs->geometry)))
  {
    return false;
  }
  // geometry_exists
  if (lhs->geometry_exists != rhs->geometry_exists) {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__TrafficControlMessageV01__copy(
  const j2735_v2x_msgs__msg__TrafficControlMessageV01 * input,
  j2735_v2x_msgs__msg__TrafficControlMessageV01 * output)
{
  if (!input || !output) {
    return false;
  }
  // reqid
  if (!j2735_v2x_msgs__msg__Id64b__copy(
      &(input->reqid), &(output->reqid)))
  {
    return false;
  }
  // reqseq
  output->reqseq = input->reqseq;
  // msgtot
  output->msgtot = input->msgtot;
  // msgnum
  output->msgnum = input->msgnum;
  // id
  if (!j2735_v2x_msgs__msg__Id128b__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // updated
  output->updated = input->updated;
  // package
  if (!j2735_v2x_msgs__msg__TrafficControlPackage__copy(
      &(input->package), &(output->package)))
  {
    return false;
  }
  // package_exists
  output->package_exists = input->package_exists;
  // params
  if (!j2735_v2x_msgs__msg__TrafficControlParams__copy(
      &(input->params), &(output->params)))
  {
    return false;
  }
  // params_exists
  output->params_exists = input->params_exists;
  // geometry
  if (!j2735_v2x_msgs__msg__TrafficControlGeometry__copy(
      &(input->geometry), &(output->geometry)))
  {
    return false;
  }
  // geometry_exists
  output->geometry_exists = input->geometry_exists;
  return true;
}

j2735_v2x_msgs__msg__TrafficControlMessageV01 *
j2735_v2x_msgs__msg__TrafficControlMessageV01__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TrafficControlMessageV01 * msg = (j2735_v2x_msgs__msg__TrafficControlMessageV01 *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__TrafficControlMessageV01), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__TrafficControlMessageV01));
  bool success = j2735_v2x_msgs__msg__TrafficControlMessageV01__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__TrafficControlMessageV01__destroy(j2735_v2x_msgs__msg__TrafficControlMessageV01 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__TrafficControlMessageV01__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__TrafficControlMessageV01__Sequence__init(j2735_v2x_msgs__msg__TrafficControlMessageV01__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TrafficControlMessageV01 * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__TrafficControlMessageV01 *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__TrafficControlMessageV01), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__TrafficControlMessageV01__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__TrafficControlMessageV01__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__TrafficControlMessageV01__Sequence__fini(j2735_v2x_msgs__msg__TrafficControlMessageV01__Sequence * array)
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
      j2735_v2x_msgs__msg__TrafficControlMessageV01__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__TrafficControlMessageV01__Sequence *
j2735_v2x_msgs__msg__TrafficControlMessageV01__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TrafficControlMessageV01__Sequence * array = (j2735_v2x_msgs__msg__TrafficControlMessageV01__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__TrafficControlMessageV01__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__TrafficControlMessageV01__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__TrafficControlMessageV01__Sequence__destroy(j2735_v2x_msgs__msg__TrafficControlMessageV01__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__TrafficControlMessageV01__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__TrafficControlMessageV01__Sequence__are_equal(const j2735_v2x_msgs__msg__TrafficControlMessageV01__Sequence * lhs, const j2735_v2x_msgs__msg__TrafficControlMessageV01__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__TrafficControlMessageV01__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__TrafficControlMessageV01__Sequence__copy(
  const j2735_v2x_msgs__msg__TrafficControlMessageV01__Sequence * input,
  j2735_v2x_msgs__msg__TrafficControlMessageV01__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__TrafficControlMessageV01);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__TrafficControlMessageV01 * data =
      (j2735_v2x_msgs__msg__TrafficControlMessageV01 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__TrafficControlMessageV01__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__TrafficControlMessageV01__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__TrafficControlMessageV01__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
