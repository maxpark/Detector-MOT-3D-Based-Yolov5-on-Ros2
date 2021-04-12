

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Track_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Track__1143654719_h
#define Track__1143654719_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Point32_.h"
namespace detect_mot {
    namespace msg {
        namespace dds_ {

            extern const char *Track_TYPENAME;

            struct Track_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Track_TypeSupport;
            class Track_DataWriter;
            class Track_DataReader;
            #endif

            class Track_ 
            {
              public:
                typedef struct Track_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Track_TypeSupport TypeSupport;
                typedef Track_DataWriter DataWriter;
                typedef Track_DataReader DataReader;
                #endif

                DDS_Long   id_ ;
                DDS_Long   classid_ ;
                DDS_Char *   classname_ ;
                DDS_Long   age_ ;
                DDS_Boolean   information3d_ ;
                DDS_Long   bbox_ [4];
                geometry_msgs::msg::dds_::Point32_   position_ ;
                geometry_msgs::msg::dds_::Point32_   velocity_ ;
                geometry_msgs::msg::dds_::Point32_   size_ ;
                geometry_msgs::msg::dds_::Point32_   position_e_ ;
                geometry_msgs::msg::dds_::Point32_   velocity_e_ ;
                geometry_msgs::msg::dds_::Point32_Seq  pointcloud_ ;
                geometry_msgs::msg::dds_::Point32_Seq  trace_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Track__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Track_Seq, Track_);

            NDDSUSERDllExport
            RTIBool Track__initialize(
                Track_* self);

            NDDSUSERDllExport
            RTIBool Track__initialize_ex(
                Track_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Track__initialize_w_params(
                Track_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Track__finalize(
                Track_* self);

            NDDSUSERDllExport
            void Track__finalize_ex(
                Track_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Track__finalize_w_params(
                Track_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Track__finalize_optional_members(
                Track_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Track__copy(
                Track_* dst,
                const Track_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace detect_mot  */

#endif /* Track_ */

