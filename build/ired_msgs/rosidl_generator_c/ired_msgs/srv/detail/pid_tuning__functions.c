// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ired_msgs:srv/PIDTuning.idl
// generated code does not contain a copyright notice
#include "ired_msgs/srv/detail/pid_tuning__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `motor`
#include "rosidl_runtime_c/string_functions.h"

bool
ired_msgs__srv__PIDTuning_Request__init(ired_msgs__srv__PIDTuning_Request * msg)
{
  if (!msg) {
    return false;
  }
  // motor
  if (!rosidl_runtime_c__String__init(&msg->motor)) {
    ired_msgs__srv__PIDTuning_Request__fini(msg);
    return false;
  }
  // kp
  // ki
  // kd
  return true;
}

void
ired_msgs__srv__PIDTuning_Request__fini(ired_msgs__srv__PIDTuning_Request * msg)
{
  if (!msg) {
    return;
  }
  // motor
  rosidl_runtime_c__String__fini(&msg->motor);
  // kp
  // ki
  // kd
}

bool
ired_msgs__srv__PIDTuning_Request__are_equal(const ired_msgs__srv__PIDTuning_Request * lhs, const ired_msgs__srv__PIDTuning_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->motor), &(rhs->motor)))
  {
    return false;
  }
  // kp
  if (lhs->kp != rhs->kp) {
    return false;
  }
  // ki
  if (lhs->ki != rhs->ki) {
    return false;
  }
  // kd
  if (lhs->kd != rhs->kd) {
    return false;
  }
  return true;
}

bool
ired_msgs__srv__PIDTuning_Request__copy(
  const ired_msgs__srv__PIDTuning_Request * input,
  ired_msgs__srv__PIDTuning_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // motor
  if (!rosidl_runtime_c__String__copy(
      &(input->motor), &(output->motor)))
  {
    return false;
  }
  // kp
  output->kp = input->kp;
  // ki
  output->ki = input->ki;
  // kd
  output->kd = input->kd;
  return true;
}

ired_msgs__srv__PIDTuning_Request *
ired_msgs__srv__PIDTuning_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ired_msgs__srv__PIDTuning_Request * msg = (ired_msgs__srv__PIDTuning_Request *)allocator.allocate(sizeof(ired_msgs__srv__PIDTuning_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ired_msgs__srv__PIDTuning_Request));
  bool success = ired_msgs__srv__PIDTuning_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ired_msgs__srv__PIDTuning_Request__destroy(ired_msgs__srv__PIDTuning_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ired_msgs__srv__PIDTuning_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ired_msgs__srv__PIDTuning_Request__Sequence__init(ired_msgs__srv__PIDTuning_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ired_msgs__srv__PIDTuning_Request * data = NULL;

  if (size) {
    data = (ired_msgs__srv__PIDTuning_Request *)allocator.zero_allocate(size, sizeof(ired_msgs__srv__PIDTuning_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ired_msgs__srv__PIDTuning_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ired_msgs__srv__PIDTuning_Request__fini(&data[i - 1]);
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
ired_msgs__srv__PIDTuning_Request__Sequence__fini(ired_msgs__srv__PIDTuning_Request__Sequence * array)
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
      ired_msgs__srv__PIDTuning_Request__fini(&array->data[i]);
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

ired_msgs__srv__PIDTuning_Request__Sequence *
ired_msgs__srv__PIDTuning_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ired_msgs__srv__PIDTuning_Request__Sequence * array = (ired_msgs__srv__PIDTuning_Request__Sequence *)allocator.allocate(sizeof(ired_msgs__srv__PIDTuning_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ired_msgs__srv__PIDTuning_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ired_msgs__srv__PIDTuning_Request__Sequence__destroy(ired_msgs__srv__PIDTuning_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ired_msgs__srv__PIDTuning_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ired_msgs__srv__PIDTuning_Request__Sequence__are_equal(const ired_msgs__srv__PIDTuning_Request__Sequence * lhs, const ired_msgs__srv__PIDTuning_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ired_msgs__srv__PIDTuning_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ired_msgs__srv__PIDTuning_Request__Sequence__copy(
  const ired_msgs__srv__PIDTuning_Request__Sequence * input,
  ired_msgs__srv__PIDTuning_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ired_msgs__srv__PIDTuning_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ired_msgs__srv__PIDTuning_Request * data =
      (ired_msgs__srv__PIDTuning_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ired_msgs__srv__PIDTuning_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ired_msgs__srv__PIDTuning_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ired_msgs__srv__PIDTuning_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
ired_msgs__srv__PIDTuning_Response__init(ired_msgs__srv__PIDTuning_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
ired_msgs__srv__PIDTuning_Response__fini(ired_msgs__srv__PIDTuning_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
}

bool
ired_msgs__srv__PIDTuning_Response__are_equal(const ired_msgs__srv__PIDTuning_Response * lhs, const ired_msgs__srv__PIDTuning_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
ired_msgs__srv__PIDTuning_Response__copy(
  const ired_msgs__srv__PIDTuning_Response * input,
  ired_msgs__srv__PIDTuning_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

ired_msgs__srv__PIDTuning_Response *
ired_msgs__srv__PIDTuning_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ired_msgs__srv__PIDTuning_Response * msg = (ired_msgs__srv__PIDTuning_Response *)allocator.allocate(sizeof(ired_msgs__srv__PIDTuning_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ired_msgs__srv__PIDTuning_Response));
  bool success = ired_msgs__srv__PIDTuning_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ired_msgs__srv__PIDTuning_Response__destroy(ired_msgs__srv__PIDTuning_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ired_msgs__srv__PIDTuning_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ired_msgs__srv__PIDTuning_Response__Sequence__init(ired_msgs__srv__PIDTuning_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ired_msgs__srv__PIDTuning_Response * data = NULL;

  if (size) {
    data = (ired_msgs__srv__PIDTuning_Response *)allocator.zero_allocate(size, sizeof(ired_msgs__srv__PIDTuning_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ired_msgs__srv__PIDTuning_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ired_msgs__srv__PIDTuning_Response__fini(&data[i - 1]);
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
ired_msgs__srv__PIDTuning_Response__Sequence__fini(ired_msgs__srv__PIDTuning_Response__Sequence * array)
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
      ired_msgs__srv__PIDTuning_Response__fini(&array->data[i]);
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

ired_msgs__srv__PIDTuning_Response__Sequence *
ired_msgs__srv__PIDTuning_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ired_msgs__srv__PIDTuning_Response__Sequence * array = (ired_msgs__srv__PIDTuning_Response__Sequence *)allocator.allocate(sizeof(ired_msgs__srv__PIDTuning_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ired_msgs__srv__PIDTuning_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ired_msgs__srv__PIDTuning_Response__Sequence__destroy(ired_msgs__srv__PIDTuning_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ired_msgs__srv__PIDTuning_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ired_msgs__srv__PIDTuning_Response__Sequence__are_equal(const ired_msgs__srv__PIDTuning_Response__Sequence * lhs, const ired_msgs__srv__PIDTuning_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ired_msgs__srv__PIDTuning_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ired_msgs__srv__PIDTuning_Response__Sequence__copy(
  const ired_msgs__srv__PIDTuning_Response__Sequence * input,
  ired_msgs__srv__PIDTuning_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ired_msgs__srv__PIDTuning_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ired_msgs__srv__PIDTuning_Response * data =
      (ired_msgs__srv__PIDTuning_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ired_msgs__srv__PIDTuning_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ired_msgs__srv__PIDTuning_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ired_msgs__srv__PIDTuning_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "ired_msgs/srv/detail/pid_tuning__functions.h"

bool
ired_msgs__srv__PIDTuning_Event__init(ired_msgs__srv__PIDTuning_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    ired_msgs__srv__PIDTuning_Event__fini(msg);
    return false;
  }
  // request
  if (!ired_msgs__srv__PIDTuning_Request__Sequence__init(&msg->request, 0)) {
    ired_msgs__srv__PIDTuning_Event__fini(msg);
    return false;
  }
  // response
  if (!ired_msgs__srv__PIDTuning_Response__Sequence__init(&msg->response, 0)) {
    ired_msgs__srv__PIDTuning_Event__fini(msg);
    return false;
  }
  return true;
}

void
ired_msgs__srv__PIDTuning_Event__fini(ired_msgs__srv__PIDTuning_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  ired_msgs__srv__PIDTuning_Request__Sequence__fini(&msg->request);
  // response
  ired_msgs__srv__PIDTuning_Response__Sequence__fini(&msg->response);
}

bool
ired_msgs__srv__PIDTuning_Event__are_equal(const ired_msgs__srv__PIDTuning_Event * lhs, const ired_msgs__srv__PIDTuning_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!ired_msgs__srv__PIDTuning_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!ired_msgs__srv__PIDTuning_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
ired_msgs__srv__PIDTuning_Event__copy(
  const ired_msgs__srv__PIDTuning_Event * input,
  ired_msgs__srv__PIDTuning_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!ired_msgs__srv__PIDTuning_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!ired_msgs__srv__PIDTuning_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

ired_msgs__srv__PIDTuning_Event *
ired_msgs__srv__PIDTuning_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ired_msgs__srv__PIDTuning_Event * msg = (ired_msgs__srv__PIDTuning_Event *)allocator.allocate(sizeof(ired_msgs__srv__PIDTuning_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ired_msgs__srv__PIDTuning_Event));
  bool success = ired_msgs__srv__PIDTuning_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ired_msgs__srv__PIDTuning_Event__destroy(ired_msgs__srv__PIDTuning_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ired_msgs__srv__PIDTuning_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ired_msgs__srv__PIDTuning_Event__Sequence__init(ired_msgs__srv__PIDTuning_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ired_msgs__srv__PIDTuning_Event * data = NULL;

  if (size) {
    data = (ired_msgs__srv__PIDTuning_Event *)allocator.zero_allocate(size, sizeof(ired_msgs__srv__PIDTuning_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ired_msgs__srv__PIDTuning_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ired_msgs__srv__PIDTuning_Event__fini(&data[i - 1]);
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
ired_msgs__srv__PIDTuning_Event__Sequence__fini(ired_msgs__srv__PIDTuning_Event__Sequence * array)
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
      ired_msgs__srv__PIDTuning_Event__fini(&array->data[i]);
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

ired_msgs__srv__PIDTuning_Event__Sequence *
ired_msgs__srv__PIDTuning_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ired_msgs__srv__PIDTuning_Event__Sequence * array = (ired_msgs__srv__PIDTuning_Event__Sequence *)allocator.allocate(sizeof(ired_msgs__srv__PIDTuning_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ired_msgs__srv__PIDTuning_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ired_msgs__srv__PIDTuning_Event__Sequence__destroy(ired_msgs__srv__PIDTuning_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ired_msgs__srv__PIDTuning_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ired_msgs__srv__PIDTuning_Event__Sequence__are_equal(const ired_msgs__srv__PIDTuning_Event__Sequence * lhs, const ired_msgs__srv__PIDTuning_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ired_msgs__srv__PIDTuning_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ired_msgs__srv__PIDTuning_Event__Sequence__copy(
  const ired_msgs__srv__PIDTuning_Event__Sequence * input,
  ired_msgs__srv__PIDTuning_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ired_msgs__srv__PIDTuning_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ired_msgs__srv__PIDTuning_Event * data =
      (ired_msgs__srv__PIDTuning_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ired_msgs__srv__PIDTuning_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ired_msgs__srv__PIDTuning_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ired_msgs__srv__PIDTuning_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
