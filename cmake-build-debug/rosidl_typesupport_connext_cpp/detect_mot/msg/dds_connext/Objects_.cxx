

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Objects_.idl using "rtiddsgen".
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

#include "Objects_.h"

#include <new>

namespace detect_mot {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *Objects_TYPENAME = "detect_mot::msg::dds_::Objects_";

            DDS_TypeCode* Objects__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Objects__g_tc_objects_front__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode Objects__g_tc_objects_back__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member Objects__g_tc_members[3]=
                {

                    {
                        (char *)"header_",/* Member name */
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
                        (char *)"objects_front_",/* Member name */
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
                        (char *)"objects_back_",/* Member name */
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

                static DDS_TypeCode Objects__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"detect_mot::msg::dds_::Objects_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        Objects__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Objects_*/

                if (is_initialized) {
                    return &Objects__g_tc;
                }

                Objects__g_tc_objects_front__sequence._data._typeCode = (RTICdrTypeCode *)detect_mot::msg::dds_::Detection2d__get_typecode();

                Objects__g_tc_objects_back__sequence._data._typeCode = (RTICdrTypeCode *)detect_mot::msg::dds_::Detection2d__get_typecode();

                Objects__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                Objects__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& Objects__g_tc_objects_front__sequence;
                Objects__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& Objects__g_tc_objects_back__sequence;

                is_initialized = RTI_TRUE;

                return &Objects__g_tc;
            }

            RTIBool Objects__initialize(
                Objects_* sample) {
                return detect_mot::msg::dds_::Objects__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Objects__initialize_ex(
                Objects_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return detect_mot::msg::dds_::Objects__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Objects__initialize_w_params(
                Objects_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!std_msgs::msg::dds_::Header__initialize_w_params(&sample->header_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory) {
                    detect_mot::msg::dds_::Detection2d_Seq_initialize(&sample->objects_front_ );
                    detect_mot::msg::dds_::Detection2d_Seq_set_element_allocation_params(&sample->objects_front_ ,allocParams);
                    detect_mot::msg::dds_::Detection2d_Seq_set_absolute_maximum(&sample->objects_front_ , RTI_INT32_MAX);
                    if (!detect_mot::msg::dds_::Detection2d_Seq_set_maximum(&sample->objects_front_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    detect_mot::msg::dds_::Detection2d_Seq_set_length(&sample->objects_front_, 0);
                }
                if (allocParams->allocate_memory) {
                    detect_mot::msg::dds_::Detection2d_Seq_initialize(&sample->objects_back_ );
                    detect_mot::msg::dds_::Detection2d_Seq_set_element_allocation_params(&sample->objects_back_ ,allocParams);
                    detect_mot::msg::dds_::Detection2d_Seq_set_absolute_maximum(&sample->objects_back_ , RTI_INT32_MAX);
                    if (!detect_mot::msg::dds_::Detection2d_Seq_set_maximum(&sample->objects_back_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    detect_mot::msg::dds_::Detection2d_Seq_set_length(&sample->objects_back_, 0);
                }
                return RTI_TRUE;
            }

            void Objects__finalize(
                Objects_* sample)
            {

                detect_mot::msg::dds_::Objects__finalize_ex(sample,RTI_TRUE);
            }

            void Objects__finalize_ex(
                Objects_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                detect_mot::msg::dds_::Objects__finalize_w_params(
                    sample,&deallocParams);
            }

            void Objects__finalize_w_params(
                Objects_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                detect_mot::msg::dds_::Detection2d_Seq_set_element_deallocation_params(
                    &sample->objects_front_,deallocParams);
                detect_mot::msg::dds_::Detection2d_Seq_finalize(&sample->objects_front_);

                detect_mot::msg::dds_::Detection2d_Seq_set_element_deallocation_params(
                    &sample->objects_back_,deallocParams);
                detect_mot::msg::dds_::Detection2d_Seq_finalize(&sample->objects_back_);

            }

            void Objects__finalize_optional_members(
                Objects_* sample, RTIBool deletePointers)
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

                std_msgs::msg::dds_::Header__finalize_optional_members(&sample->header_, deallocParams->delete_pointers);
                {
                    DDS_UnsignedLong i, length;
                    length = detect_mot::msg::dds_::Detection2d_Seq_get_length(
                        &sample->objects_front_);

                    for (i = 0; i < length; i++) {
                        detect_mot::msg::dds_::Detection2d__finalize_optional_members(
                            detect_mot::msg::dds_::Detection2d_Seq_get_reference(
                                &sample->objects_front_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = detect_mot::msg::dds_::Detection2d_Seq_get_length(
                        &sample->objects_back_);

                    for (i = 0; i < length; i++) {
                        detect_mot::msg::dds_::Detection2d__finalize_optional_members(
                            detect_mot::msg::dds_::Detection2d_Seq_get_reference(
                                &sample->objects_back_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool Objects__copy(
                Objects_* dst,
                const Objects_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!detect_mot::msg::dds_::Detection2d_Seq_copy(&dst->objects_front_ ,
                    &src->objects_front_ )) {
                        return RTI_FALSE;
                    }
                    if (!detect_mot::msg::dds_::Detection2d_Seq_copy(&dst->objects_back_ ,
                    &src->objects_back_ )) {
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
            * Configure and implement 'Objects_' sequence class.
            */
            #define T Objects_
            #define TSeq Objects_Seq

            #define T_initialize_w_params detect_mot::msg::dds_::Objects__initialize_w_params

            #define T_finalize_w_params   detect_mot::msg::dds_::Objects__finalize_w_params
            #define T_copy       detect_mot::msg::dds_::Objects__copy

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

