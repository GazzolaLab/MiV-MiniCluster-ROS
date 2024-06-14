// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from miv_cluster_interfaces:srv/MeaJob.idl
// generated code does not contain a copyright notice

#ifndef MIV_CLUSTER_INTERFACES__SRV__DETAIL__MEA_JOB__FUNCTIONS_H_
#define MIV_CLUSTER_INTERFACES__SRV__DETAIL__MEA_JOB__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "miv_cluster_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "miv_cluster_interfaces/srv/detail/mea_job__struct.h"

/// Initialize srv/MeaJob message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * miv_cluster_interfaces__srv__MeaJob_Request
 * )) before or use
 * miv_cluster_interfaces__srv__MeaJob_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_miv_cluster_interfaces
bool
miv_cluster_interfaces__srv__MeaJob_Request__init(miv_cluster_interfaces__srv__MeaJob_Request * msg);

/// Finalize srv/MeaJob message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_miv_cluster_interfaces
void
miv_cluster_interfaces__srv__MeaJob_Request__fini(miv_cluster_interfaces__srv__MeaJob_Request * msg);

/// Create srv/MeaJob message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * miv_cluster_interfaces__srv__MeaJob_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_miv_cluster_interfaces
miv_cluster_interfaces__srv__MeaJob_Request *
miv_cluster_interfaces__srv__MeaJob_Request__create();

/// Destroy srv/MeaJob message.
/**
 * It calls
 * miv_cluster_interfaces__srv__MeaJob_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_miv_cluster_interfaces
void
miv_cluster_interfaces__srv__MeaJob_Request__destroy(miv_cluster_interfaces__srv__MeaJob_Request * msg);

/// Check for srv/MeaJob message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_miv_cluster_interfaces
bool
miv_cluster_interfaces__srv__MeaJob_Request__are_equal(const miv_cluster_interfaces__srv__MeaJob_Request * lhs, const miv_cluster_interfaces__srv__MeaJob_Request * rhs);

/// Copy a srv/MeaJob message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_miv_cluster_interfaces
bool
miv_cluster_interfaces__srv__MeaJob_Request__copy(
  const miv_cluster_interfaces__srv__MeaJob_Request * input,
  miv_cluster_interfaces__srv__MeaJob_Request * output);

/// Initialize array of srv/MeaJob messages.
/**
 * It allocates the memory for the number of elements and calls
 * miv_cluster_interfaces__srv__MeaJob_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_miv_cluster_interfaces
bool
miv_cluster_interfaces__srv__MeaJob_Request__Sequence__init(miv_cluster_interfaces__srv__MeaJob_Request__Sequence * array, size_t size);

/// Finalize array of srv/MeaJob messages.
/**
 * It calls
 * miv_cluster_interfaces__srv__MeaJob_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_miv_cluster_interfaces
void
miv_cluster_interfaces__srv__MeaJob_Request__Sequence__fini(miv_cluster_interfaces__srv__MeaJob_Request__Sequence * array);

/// Create array of srv/MeaJob messages.
/**
 * It allocates the memory for the array and calls
 * miv_cluster_interfaces__srv__MeaJob_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_miv_cluster_interfaces
miv_cluster_interfaces__srv__MeaJob_Request__Sequence *
miv_cluster_interfaces__srv__MeaJob_Request__Sequence__create(size_t size);

/// Destroy array of srv/MeaJob messages.
/**
 * It calls
 * miv_cluster_interfaces__srv__MeaJob_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_miv_cluster_interfaces
void
miv_cluster_interfaces__srv__MeaJob_Request__Sequence__destroy(miv_cluster_interfaces__srv__MeaJob_Request__Sequence * array);

/// Check for srv/MeaJob message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_miv_cluster_interfaces
bool
miv_cluster_interfaces__srv__MeaJob_Request__Sequence__are_equal(const miv_cluster_interfaces__srv__MeaJob_Request__Sequence * lhs, const miv_cluster_interfaces__srv__MeaJob_Request__Sequence * rhs);

/// Copy an array of srv/MeaJob messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_miv_cluster_interfaces
bool
miv_cluster_interfaces__srv__MeaJob_Request__Sequence__copy(
  const miv_cluster_interfaces__srv__MeaJob_Request__Sequence * input,
  miv_cluster_interfaces__srv__MeaJob_Request__Sequence * output);

/// Initialize srv/MeaJob message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * miv_cluster_interfaces__srv__MeaJob_Response
 * )) before or use
 * miv_cluster_interfaces__srv__MeaJob_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_miv_cluster_interfaces
bool
miv_cluster_interfaces__srv__MeaJob_Response__init(miv_cluster_interfaces__srv__MeaJob_Response * msg);

/// Finalize srv/MeaJob message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_miv_cluster_interfaces
void
miv_cluster_interfaces__srv__MeaJob_Response__fini(miv_cluster_interfaces__srv__MeaJob_Response * msg);

/// Create srv/MeaJob message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * miv_cluster_interfaces__srv__MeaJob_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_miv_cluster_interfaces
miv_cluster_interfaces__srv__MeaJob_Response *
miv_cluster_interfaces__srv__MeaJob_Response__create();

/// Destroy srv/MeaJob message.
/**
 * It calls
 * miv_cluster_interfaces__srv__MeaJob_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_miv_cluster_interfaces
void
miv_cluster_interfaces__srv__MeaJob_Response__destroy(miv_cluster_interfaces__srv__MeaJob_Response * msg);

/// Check for srv/MeaJob message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_miv_cluster_interfaces
bool
miv_cluster_interfaces__srv__MeaJob_Response__are_equal(const miv_cluster_interfaces__srv__MeaJob_Response * lhs, const miv_cluster_interfaces__srv__MeaJob_Response * rhs);

/// Copy a srv/MeaJob message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_miv_cluster_interfaces
bool
miv_cluster_interfaces__srv__MeaJob_Response__copy(
  const miv_cluster_interfaces__srv__MeaJob_Response * input,
  miv_cluster_interfaces__srv__MeaJob_Response * output);

/// Initialize array of srv/MeaJob messages.
/**
 * It allocates the memory for the number of elements and calls
 * miv_cluster_interfaces__srv__MeaJob_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_miv_cluster_interfaces
bool
miv_cluster_interfaces__srv__MeaJob_Response__Sequence__init(miv_cluster_interfaces__srv__MeaJob_Response__Sequence * array, size_t size);

/// Finalize array of srv/MeaJob messages.
/**
 * It calls
 * miv_cluster_interfaces__srv__MeaJob_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_miv_cluster_interfaces
void
miv_cluster_interfaces__srv__MeaJob_Response__Sequence__fini(miv_cluster_interfaces__srv__MeaJob_Response__Sequence * array);

/// Create array of srv/MeaJob messages.
/**
 * It allocates the memory for the array and calls
 * miv_cluster_interfaces__srv__MeaJob_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_miv_cluster_interfaces
miv_cluster_interfaces__srv__MeaJob_Response__Sequence *
miv_cluster_interfaces__srv__MeaJob_Response__Sequence__create(size_t size);

/// Destroy array of srv/MeaJob messages.
/**
 * It calls
 * miv_cluster_interfaces__srv__MeaJob_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_miv_cluster_interfaces
void
miv_cluster_interfaces__srv__MeaJob_Response__Sequence__destroy(miv_cluster_interfaces__srv__MeaJob_Response__Sequence * array);

/// Check for srv/MeaJob message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_miv_cluster_interfaces
bool
miv_cluster_interfaces__srv__MeaJob_Response__Sequence__are_equal(const miv_cluster_interfaces__srv__MeaJob_Response__Sequence * lhs, const miv_cluster_interfaces__srv__MeaJob_Response__Sequence * rhs);

/// Copy an array of srv/MeaJob messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_miv_cluster_interfaces
bool
miv_cluster_interfaces__srv__MeaJob_Response__Sequence__copy(
  const miv_cluster_interfaces__srv__MeaJob_Response__Sequence * input,
  miv_cluster_interfaces__srv__MeaJob_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MIV_CLUSTER_INTERFACES__SRV__DETAIL__MEA_JOB__FUNCTIONS_H_
