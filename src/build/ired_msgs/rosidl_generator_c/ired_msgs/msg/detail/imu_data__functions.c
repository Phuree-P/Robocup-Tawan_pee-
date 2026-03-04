// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ired_msgs:msg/IMUData.idl
// generated code does not contain a copyright notice
#include "ired_msgs/msg/detail/imu_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ired_msgs__msg__IMUData__init(ired_msgs__msg__IMUData * msg)
{
  if (!msg) {
    return false;
  }
  // roll
  // pitch
  // yaw
  return true;
}

void
ired_msgs__msg__IMUData__fini(ired_msgs__msg__IMUData * msg)
{
  if (!msg) {
    return;
  }
  // roll
  // pitch
  // yaw
}

bool
ired_msgs__msg__IMUData__are_equal(const ired_msgs__msg__IMUData * lhs, const ired_msgs__msg__IMUData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  return true;
}

bool
ired_msgs__msg__IMUData__copy(
  const ired_msgs__msg__IMUData * input,
  ired_msgs__msg__IMUData * output)
{
  if (!input || !output) {
    return false;
  }
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  return true;
}

ired_msgs__msg__IMUData *
ired_msgs__msg__IMUData__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ired_msgs__msg__IMUData * msg = (ired_msgs__msg__IMUData *)allocator.allocate(sizeof(ired_msgs__msg__IMUData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ired_msgs__msg__IMUData));
  bool success = ired_msgs__msg__IMUData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ired_msgs__msg__IMUData__destroy(ired_msgs__msg__IMUData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ired_msgs__msg__IMUData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ired_msgs__msg__IMUData__Sequence__init(ired_msgs__msg__IMUData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ired_msgs__msg__IMUData * data = NULL;

  if (size) {
    data = (ired_msgs__msg__IMUData *)allocator.zero_allocate(size, sizeof(ired_msgs__msg__IMUData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ired_msgs__msg__IMUData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ired_msgs__msg__IMUData__fini(&data[i - 1]);
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
ired_msgs__msg__IMUData__Sequence__fini(ired_msgs__msg__IMUData__Sequence * array)
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
      ired_msgs__msg__IMUData__fini(&array->data[i]);
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

ired_msgs__msg__IMUData__Sequence *
ired_msgs__msg__IMUData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ired_msgs__msg__IMUData__Sequence * array = (ired_msgs__msg__IMUData__Sequence *)allocator.allocate(sizeof(ired_msgs__msg__IMUData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ired_msgs__msg__IMUData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ired_msgs__msg__IMUData__Sequence__destroy(ired_msgs__msg__IMUData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ired_msgs__msg__IMUData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ired_msgs__msg__IMUData__Sequence__are_equal(const ired_msgs__msg__IMUData__Sequence * lhs, const ired_msgs__msg__IMUData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ired_msgs__msg__IMUData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ired_msgs__msg__IMUData__Sequence__copy(
  const ired_msgs__msg__IMUData__Sequence * input,
  ired_msgs__msg__IMUData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ired_msgs__msg__IMUData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ired_msgs__msg__IMUData * data =
      (ired_msgs__msg__IMUData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ired_msgs__msg__IMUData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ired_msgs__msg__IMUData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ired_msgs__msg__IMUData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
