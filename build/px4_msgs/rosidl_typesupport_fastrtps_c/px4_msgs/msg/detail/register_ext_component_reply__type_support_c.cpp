// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/RegisterExtComponentReply.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/register_ext_component_reply__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/register_ext_component_reply__struct.h"
#include "px4_msgs/msg/detail/register_ext_component_reply__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RegisterExtComponentReply__ros_msg_type = px4_msgs__msg__RegisterExtComponentReply;

static bool _RegisterExtComponentReply__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RegisterExtComponentReply__ros_msg_type * ros_message = static_cast<const _RegisterExtComponentReply__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: request_id
  {
    cdr << ros_message->request_id;
  }

  // Field name: name
  {
    size_t size = 25;
    auto array_ptr = ros_message->name;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: px4_ros2_api_version
  {
    cdr << ros_message->px4_ros2_api_version;
  }

  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: arming_check_id
  {
    cdr << ros_message->arming_check_id;
  }

  // Field name: mode_id
  {
    cdr << ros_message->mode_id;
  }

  // Field name: mode_executor_id
  {
    cdr << ros_message->mode_executor_id;
  }

  return true;
}

static bool _RegisterExtComponentReply__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RegisterExtComponentReply__ros_msg_type * ros_message = static_cast<_RegisterExtComponentReply__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: request_id
  {
    cdr >> ros_message->request_id;
  }

  // Field name: name
  {
    size_t size = 25;
    auto array_ptr = ros_message->name;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: px4_ros2_api_version
  {
    cdr >> ros_message->px4_ros2_api_version;
  }

  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: arming_check_id
  {
    cdr >> ros_message->arming_check_id;
  }

  // Field name: mode_id
  {
    cdr >> ros_message->mode_id;
  }

  // Field name: mode_executor_id
  {
    cdr >> ros_message->mode_executor_id;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__RegisterExtComponentReply(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RegisterExtComponentReply__ros_msg_type * ros_message = static_cast<const _RegisterExtComponentReply__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name request_id
  {
    size_t item_size = sizeof(ros_message->request_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name name
  {
    size_t array_size = 25;
    auto array_ptr = ros_message->name;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name px4_ros2_api_version
  {
    size_t item_size = sizeof(ros_message->px4_ros2_api_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arming_check_id
  {
    size_t item_size = sizeof(ros_message->arming_check_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_id
  {
    size_t item_size = sizeof(ros_message->mode_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_executor_id
  {
    size_t item_size = sizeof(ros_message->mode_executor_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RegisterExtComponentReply__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__RegisterExtComponentReply(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__RegisterExtComponentReply(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: request_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: name
  {
    size_t array_size = 25;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: px4_ros2_api_version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arming_check_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mode_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mode_executor_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _RegisterExtComponentReply__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__RegisterExtComponentReply(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RegisterExtComponentReply = {
  "px4_msgs::msg",
  "RegisterExtComponentReply",
  _RegisterExtComponentReply__cdr_serialize,
  _RegisterExtComponentReply__cdr_deserialize,
  _RegisterExtComponentReply__get_serialized_size,
  _RegisterExtComponentReply__max_serialized_size
};

static rosidl_message_type_support_t _RegisterExtComponentReply__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RegisterExtComponentReply,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, RegisterExtComponentReply)() {
  return &_RegisterExtComponentReply__type_support;
}

#if defined(__cplusplus)
}
#endif
