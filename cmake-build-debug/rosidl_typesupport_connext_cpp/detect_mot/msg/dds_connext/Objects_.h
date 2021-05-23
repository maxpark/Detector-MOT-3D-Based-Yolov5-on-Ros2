

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Objects_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Objects__222506689_h
#define Objects__222506689_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "detect_mot/msg/dds_connext/Detection2d_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace detect_mot {
    namespace msg {
        namespace dds_ {

            extern const char *Objects_TYPENAME;

            struct Objects_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Objects_TypeSupport;
            class Objects_DataWriter;
            class Objects_DataReader;
            #endif

            class Objects_ 
            {
              public:
                typedef struct Objects_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Objects_TypeSupport TypeSupport;
                typedef Objects_DataWriter DataWriter;
                typedef Objects_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   front_header_ ;
                std_msgs::msg::dds_::Header_   back_header_ ;
                detect_mot::msg::dds_::Detection2d_Seq  objects_front_ ;
                detect_mot::msg::dds_::Detection2d_Seq  objects_back_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Objects__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Objects_Seq, Objects_);

            NDDSUSERDllExport
            RTIBool Objects__initialize(
                Objects_* self);

            NDDSUSERDllExport
            RTIBool Objects__initialize_ex(
                Objects_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Objects__initialize_w_params(
                Objects_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Objects__finalize(
                Objects_* self);

            NDDSUSERDllExport
            void Objects__finalize_ex(
                Objects_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Objects__finalize_w_params(
                Objects_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Objects__finalize_optional_members(
                Objects_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Objects__copy(
                Objects_* dst,
                const Objects_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace detect_mot  */

#endif /* Objects_ */

