

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Detection2d_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Detection2d__1699673445_h
#define Detection2d__1699673445_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace detect_mot {
    namespace msg {
        namespace dds_ {

            extern const char *Detection2d_TYPENAME;

            struct Detection2d_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Detection2d_TypeSupport;
            class Detection2d_DataWriter;
            class Detection2d_DataReader;
            #endif

            class Detection2d_ 
            {
              public:
                typedef struct Detection2d_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Detection2d_TypeSupport TypeSupport;
                typedef Detection2d_DataWriter DataWriter;
                typedef Detection2d_DataReader DataReader;
                #endif

                DDS_Long   classid_ ;
                DDS_Char *   classname_ ;
                DDS_Long   bbox_ [4];

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Detection2d__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Detection2d_Seq, Detection2d_);

            NDDSUSERDllExport
            RTIBool Detection2d__initialize(
                Detection2d_* self);

            NDDSUSERDllExport
            RTIBool Detection2d__initialize_ex(
                Detection2d_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Detection2d__initialize_w_params(
                Detection2d_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Detection2d__finalize(
                Detection2d_* self);

            NDDSUSERDllExport
            void Detection2d__finalize_ex(
                Detection2d_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Detection2d__finalize_w_params(
                Detection2d_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Detection2d__finalize_optional_members(
                Detection2d_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Detection2d__copy(
                Detection2d_* dst,
                const Detection2d_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace detect_mot  */

#endif /* Detection2d_ */

