

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Detection2d_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "Detection2d_.h"

#include <new>

namespace detect_mot {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *Detection2d_TYPENAME = "detect_mot::msg::dds_::Detection2d_";

            DDS_TypeCode* Detection2d__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Detection2d__g_tc_classname__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode Detection2d__g_tc_bbox__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
                static DDS_TypeCode_Member Detection2d__g_tc_members[3]=
                {

                    {
                        (char *)"classid_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"classname_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"bbox_",/* Member name */
                        {
                            2,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode Detection2d__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"detect_mot::msg::dds_::Detection2d_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        Detection2d__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Detection2d_*/

                if (is_initialized) {
                    return &Detection2d__g_tc;
                }

                Detection2d__g_tc_bbox__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_long;

                Detection2d__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Detection2d__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&Detection2d__g_tc_classname__string;

                Detection2d__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& Detection2d__g_tc_bbox__array;

                is_initialized = RTI_TRUE;

                return &Detection2d__g_tc;
            }

            RTIBool Detection2d__initialize(
                Detection2d_* sample) {
                return detect_mot::msg::dds_::Detection2d__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Detection2d__initialize_ex(
                Detection2d_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return detect_mot::msg::dds_::Detection2d__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Detection2d__initialize_w_params(
                Detection2d_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->classid_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->classname_= DDS_String_alloc ((0));
                    if (sample->classname_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->classname_!= NULL) { 
                        sample->classname_[0] = '\0';
                    }
                }

                if (!RTICdrType_initArray(
                    sample->bbox_, (4), RTI_CDR_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void Detection2d__finalize(
                Detection2d_* sample)
            {

                detect_mot::msg::dds_::Detection2d__finalize_ex(sample,RTI_TRUE);
            }

            void Detection2d__finalize_ex(
                Detection2d_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                detect_mot::msg::dds_::Detection2d__finalize_w_params(
                    sample,&deallocParams);
            }

            void Detection2d__finalize_w_params(
                Detection2d_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->classname_ != NULL) {
                    DDS_String_free(sample->classname_);
                    sample->classname_=NULL;

                }

            }

            void Detection2d__finalize_optional_members(
                Detection2d_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

            }

            RTIBool Detection2d__copy(
                Detection2d_* dst,
                const Detection2d_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyLong (
                        &dst->classid_, &src->classid_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->classname_, src->classname_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->bbox_ ,src->bbox_,(4), RTI_CDR_LONG_SIZE)) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'Detection2d_' sequence class.
            */
            #define T Detection2d_
            #define TSeq Detection2d_Seq

            #define T_initialize_w_params detect_mot::msg::dds_::Detection2d__initialize_w_params

            #define T_finalize_w_params   detect_mot::msg::dds_::Detection2d__finalize_w_params
            #define T_copy       detect_mot::msg::dds_::Detection2d__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace detect_mot  */

