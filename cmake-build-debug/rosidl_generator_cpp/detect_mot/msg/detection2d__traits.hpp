// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from detect_mot:msg/Detection2d.idl
// generated code does not contain a copyright notice

#ifndef DETECT_MOT__MSG__DETECTION2D__TRAITS_HPP_
#define DETECT_MOT__MSG__DETECTION2D__TRAITS_HPP_

#include "detect_mot/msg/detection2d__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<detect_mot::msg::Detection2d>()
{
  return "detect_mot::msg::Detection2d";
}

template<>
struct has_fixed_size<detect_mot::msg::Detection2d>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<detect_mot::msg::Detection2d>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // DETECT_MOT__MSG__DETECTION2D__TRAITS_HPP_
