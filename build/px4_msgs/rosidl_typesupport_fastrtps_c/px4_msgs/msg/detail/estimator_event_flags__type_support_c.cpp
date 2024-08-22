// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/EstimatorEventFlags.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_event_flags__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/estimator_event_flags__struct.h"
#include "px4_msgs/msg/detail/estimator_event_flags__functions.h"
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


using _EstimatorEventFlags__ros_msg_type = px4_msgs__msg__EstimatorEventFlags;

static bool _EstimatorEventFlags__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EstimatorEventFlags__ros_msg_type * ros_message = static_cast<const _EstimatorEventFlags__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr << ros_message->timestamp_sample;
  }

  // Field name: information_event_changes
  {
    cdr << ros_message->information_event_changes;
  }

  // Field name: gps_checks_passed
  {
    cdr << (ros_message->gps_checks_passed ? true : false);
  }

  // Field name: reset_vel_to_gps
  {
    cdr << (ros_message->reset_vel_to_gps ? true : false);
  }

  // Field name: reset_vel_to_flow
  {
    cdr << (ros_message->reset_vel_to_flow ? true : false);
  }

  // Field name: reset_vel_to_vision
  {
    cdr << (ros_message->reset_vel_to_vision ? true : false);
  }

  // Field name: reset_vel_to_zero
  {
    cdr << (ros_message->reset_vel_to_zero ? true : false);
  }

  // Field name: reset_pos_to_last_known
  {
    cdr << (ros_message->reset_pos_to_last_known ? true : false);
  }

  // Field name: reset_pos_to_gps
  {
    cdr << (ros_message->reset_pos_to_gps ? true : false);
  }

  // Field name: reset_pos_to_vision
  {
    cdr << (ros_message->reset_pos_to_vision ? true : false);
  }

  // Field name: starting_gps_fusion
  {
    cdr << (ros_message->starting_gps_fusion ? true : false);
  }

  // Field name: starting_vision_pos_fusion
  {
    cdr << (ros_message->starting_vision_pos_fusion ? true : false);
  }

  // Field name: starting_vision_vel_fusion
  {
    cdr << (ros_message->starting_vision_vel_fusion ? true : false);
  }

  // Field name: starting_vision_yaw_fusion
  {
    cdr << (ros_message->starting_vision_yaw_fusion ? true : false);
  }

  // Field name: yaw_aligned_to_imu_gps
  {
    cdr << (ros_message->yaw_aligned_to_imu_gps ? true : false);
  }

  // Field name: reset_hgt_to_baro
  {
    cdr << (ros_message->reset_hgt_to_baro ? true : false);
  }

  // Field name: reset_hgt_to_gps
  {
    cdr << (ros_message->reset_hgt_to_gps ? true : false);
  }

  // Field name: reset_hgt_to_rng
  {
    cdr << (ros_message->reset_hgt_to_rng ? true : false);
  }

  // Field name: reset_hgt_to_ev
  {
    cdr << (ros_message->reset_hgt_to_ev ? true : false);
  }

  return true;
}

static bool _EstimatorEventFlags__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EstimatorEventFlags__ros_msg_type * ros_message = static_cast<_EstimatorEventFlags__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr >> ros_message->timestamp_sample;
  }

  // Field name: information_event_changes
  {
    cdr >> ros_message->information_event_changes;
  }

  // Field name: gps_checks_passed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps_checks_passed = tmp ? true : false;
  }

  // Field name: reset_vel_to_gps
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reset_vel_to_gps = tmp ? true : false;
  }

  // Field name: reset_vel_to_flow
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reset_vel_to_flow = tmp ? true : false;
  }

  // Field name: reset_vel_to_vision
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reset_vel_to_vision = tmp ? true : false;
  }

  // Field name: reset_vel_to_zero
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reset_vel_to_zero = tmp ? true : false;
  }

  // Field name: reset_pos_to_last_known
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reset_pos_to_last_known = tmp ? true : false;
  }

  // Field name: reset_pos_to_gps
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reset_pos_to_gps = tmp ? true : false;
  }

  // Field name: reset_pos_to_vision
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reset_pos_to_vision = tmp ? true : false;
  }

  // Field name: starting_gps_fusion
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->starting_gps_fusion = tmp ? true : false;
  }

  // Field name: starting_vision_pos_fusion
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->starting_vision_pos_fusion = tmp ? true : false;
  }

  // Field name: starting_vision_vel_fusion
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->starting_vision_vel_fusion = tmp ? true : false;
  }

  // Field name: starting_vision_yaw_fusion
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->starting_vision_yaw_fusion = tmp ? true : false;
  }

  // Field name: yaw_aligned_to_imu_gps
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->yaw_aligned_to_imu_gps = tmp ? true : false;
  }

  // Field name: reset_hgt_to_baro
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reset_hgt_to_baro = tmp ? true : false;
  }

  // Field name: reset_hgt_to_gps
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reset_hgt_to_gps = tmp ? true : false;
  }

  // Field name: reset_hgt_to_rng
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reset_hgt_to_rng = tmp ? true : false;
  }

  // Field name: reset_hgt_to_ev
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reset_hgt_to_ev = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__EstimatorEventFlags(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EstimatorEventFlags__ros_msg_type * ros_message = static_cast<const _EstimatorEventFlags__ros_msg_type *>(untyped_ros_message);
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
  // field.name timestamp_sample
  {
    size_t item_size = sizeof(ros_message->timestamp_sample);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name information_event_changes
  {
    size_t item_size = sizeof(ros_message->information_event_changes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_checks_passed
  {
    size_t item_size = sizeof(ros_message->gps_checks_passed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset_vel_to_gps
  {
    size_t item_size = sizeof(ros_message->reset_vel_to_gps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset_vel_to_flow
  {
    size_t item_size = sizeof(ros_message->reset_vel_to_flow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset_vel_to_vision
  {
    size_t item_size = sizeof(ros_message->reset_vel_to_vision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset_vel_to_zero
  {
    size_t item_size = sizeof(ros_message->reset_vel_to_zero);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset_pos_to_last_known
  {
    size_t item_size = sizeof(ros_message->reset_pos_to_last_known);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset_pos_to_gps
  {
    size_t item_size = sizeof(ros_message->reset_pos_to_gps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset_pos_to_vision
  {
    size_t item_size = sizeof(ros_message->reset_pos_to_vision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name starting_gps_fusion
  {
    size_t item_size = sizeof(ros_message->starting_gps_fusion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name starting_vision_pos_fusion
  {
    size_t item_size = sizeof(ros_message->starting_vision_pos_fusion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name starting_vision_vel_fusion
  {
    size_t item_size = sizeof(ros_message->starting_vision_vel_fusion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name starting_vision_yaw_fusion
  {
    size_t item_size = sizeof(ros_message->starting_vision_yaw_fusion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_aligned_to_imu_gps
  {
    size_t item_size = sizeof(ros_message->yaw_aligned_to_imu_gps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset_hgt_to_baro
  {
    size_t item_size = sizeof(ros_message->reset_hgt_to_baro);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset_hgt_to_gps
  {
    size_t item_size = sizeof(ros_message->reset_hgt_to_gps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset_hgt_to_rng
  {
    size_t item_size = sizeof(ros_message->reset_hgt_to_rng);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset_hgt_to_ev
  {
    size_t item_size = sizeof(ros_message->reset_hgt_to_ev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EstimatorEventFlags__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__EstimatorEventFlags(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__EstimatorEventFlags(
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
  // member: timestamp_sample
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: information_event_changes
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gps_checks_passed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reset_vel_to_gps
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reset_vel_to_flow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reset_vel_to_vision
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reset_vel_to_zero
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reset_pos_to_last_known
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reset_pos_to_gps
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reset_pos_to_vision
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: starting_gps_fusion
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: starting_vision_pos_fusion
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: starting_vision_vel_fusion
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: starting_vision_yaw_fusion
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: yaw_aligned_to_imu_gps
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reset_hgt_to_baro
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reset_hgt_to_gps
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reset_hgt_to_rng
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reset_hgt_to_ev
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _EstimatorEventFlags__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__EstimatorEventFlags(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EstimatorEventFlags = {
  "px4_msgs::msg",
  "EstimatorEventFlags",
  _EstimatorEventFlags__cdr_serialize,
  _EstimatorEventFlags__cdr_deserialize,
  _EstimatorEventFlags__get_serialized_size,
  _EstimatorEventFlags__max_serialized_size
};

static rosidl_message_type_support_t _EstimatorEventFlags__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EstimatorEventFlags,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, EstimatorEventFlags)() {
  return &_EstimatorEventFlags__type_support;
}

#if defined(__cplusplus)
}
#endif
