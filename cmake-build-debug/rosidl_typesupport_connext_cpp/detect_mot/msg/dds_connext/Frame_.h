

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Frame_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Frame__1720863394_h
#define Frame__1720863394_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "detect_mot/msg/dds_connext/Track_.h"
#include "geometry_msgs/msg/dds_connext/Pose2D_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace detect_mot {
    namespace msg {
        namespace dds_ {

            extern const char *Frame_TYPENAME;

            struct Frame_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Frame_TypeSupport;
            class Frame_DataWriter;
            class Frame_DataReader;
            #endif

            class Frame_ 
            {
              public:
                typedef struct Frame_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Frame_TypeSupport TypeSupport;
                typedef Frame_DataWriter DataWriter;
                typedef Frame_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Long   numof3d_front_ ;
                DDS_Long   numof3d_back_ ;
                geometry_msgs::msg::dds_::Pose2D_   robot_pose_ ;
                detect_mot::msg::dds_::Track_Seq  front_camera_ ;
                detect_mot::msg::dds_::Track_Seq  back_camera_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Frame__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Frame_Seq, Frame_);

            NDDSUSERDllExport
            RTIBool Frame__initialize(
                Frame_* self);

            NDDSUSERDllExport
            RTIBool Frame__initialize_ex(
                Frame_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Frame__initialize_w_params(
                Frame_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Frame__finalize(
                Frame_* self);

            NDDSUSERDllExport
            void Frame__finalize_ex(
                Frame_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Frame__finalize_w_params(
                Frame_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Frame__finalize_optional_members(
                Frame_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Frame__copy(
                Frame_* dst,
                const Frame_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace detect_mot  */

#endif /* Frame_ */

