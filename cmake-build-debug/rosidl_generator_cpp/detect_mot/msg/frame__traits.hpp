// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from detect_mot:msg/Frame.idl
// generated code does not contain a copyright notice

#ifndef DETECT_MOT__MSG__FRAME__TRAITS_HPP_
#define DETECT_MOT__MSG__FRAME__TRAITS_HPP_

#include "detect_mot/msg/frame__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"
// Member 'robot_pose'
#include "geometry_msgs/msg/pose2_d__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<detect_mot::msg::Frame>()
{
  return "detect_mot::msg::Frame";
}

template<>
struct has_fixed_size<detect_mot::msg::Frame>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<detect_mot::msg::Frame>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // DETECT_MOT__MSG__FRAME__TRAITS_HPP_
