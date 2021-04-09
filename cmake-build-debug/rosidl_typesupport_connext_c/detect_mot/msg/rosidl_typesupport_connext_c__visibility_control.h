// generated from
// rosidl_typesupport_connext_c/resource/rosidl_typesupport_connext_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef DETECT_MOT__MSG__ROSIDL_TYPESUPPORT_CONNEXT_C__VISIBILITY_CONTROL_H_
#define DETECT_MOT__MSG__ROSIDL_TYPESUPPORT_CONNEXT_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_CONNEXT_C_EXPORT_detect_mot __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_detect_mot __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_CONNEXT_C_EXPORT_detect_mot __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_detect_mot __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_CONNEXT_C_BUILDING_DLL_detect_mot
    #define ROSIDL_TYPESUPPORT_CONNEXT_C_PUBLIC_detect_mot ROSIDL_TYPESUPPORT_CONNEXT_C_EXPORT_detect_mot
  #else
    #define ROSIDL_TYPESUPPORT_CONNEXT_C_PUBLIC_detect_mot ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_detect_mot
  #endif
#else
  #define ROSIDL_TYPESUPPORT_CONNEXT_C_EXPORT_detect_mot __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_detect_mot
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_CONNEXT_C_PUBLIC_detect_mot __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_CONNEXT_C_PUBLIC_detect_mot
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // DETECT_MOT__MSG__ROSIDL_TYPESUPPORT_CONNEXT_C__VISIBILITY_CONTROL_H_
