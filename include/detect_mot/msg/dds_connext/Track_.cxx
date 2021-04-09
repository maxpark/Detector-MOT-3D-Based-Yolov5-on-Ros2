

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Track_.idl using "rtiddsgen".
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

#include "Track_.h"

#include <new>

namespace detect_mot {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *Track_TYPENAME = "detect_mot::msg::dds_::Track_";

            DDS_TypeCode* Track__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Track__g_tc_classname__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode Track__g_tc_bbox__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
                static DDS_TypeCode Track__g_tc_pointcloud__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode Track__g_tc_trace__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member Track__g_tc_members[13]=
                {

                    {
                        (char *)"id_",/* Member name */
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
                        (char *)"classid_",/* Member name */
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
                        (char *)"classname_",/* Member name */
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
                    }, 
                    {
                        (char *)"age_",/* Member name */
                        {
                            3,/* Representation ID */          
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
                        (char *)"information3d_",/* Member name */
                        {
                            4,/* Representation ID */          
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
                            5,/* Representation ID */          
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
                        (char *)"position_",/* Member name */
                        {
                            6,/* Representation ID */          
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
                        (char *)"velocity_",/* Member name */
                        {
                            7,/* Representation ID */          
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
                        (char *)"size_",/* Member name */
                        {
                            8,/* Representation ID */          
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
                        (char *)"position_e_",/* Member name */
                        {
                            9,/* Representation ID */          
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
                        (char *)"velocity_e_",/* Member name */
                        {
                            10,/* Representation ID */          
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
                        (char *)"pointcloud_",/* Member name */
                        {
                            11,/* Representation ID */          
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
                        (char *)"trace_",/* Member name */
                        {
                            12,/* Representation ID */          
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

                static DDS_TypeCode Track__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"detect_mot::msg::dds_::Track_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        13, /* Number of members */
                        Track__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Track_*/

                if (is_initialized) {
                    return &Track__g_tc;
                }

                Track__g_tc_bbox__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_long;

                Track__g_tc_pointcloud__sequence._data._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Point32__get_typecode();

                Track__g_tc_trace__sequence._data._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Point32__get_typecode();

                Track__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Track__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Track__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&Track__g_tc_classname__string;

                Track__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Track__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                Track__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& Track__g_tc_bbox__array;
                Track__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Point32__get_typecode();

                Track__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Point32__get_typecode();

                Track__g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Point32__get_typecode();

                Track__g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Point32__get_typecode();

                Track__g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Point32__get_typecode();

                Track__g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)& Track__g_tc_pointcloud__sequence;
                Track__g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)& Track__g_tc_trace__sequence;

                is_initialized = RTI_TRUE;

                return &Track__g_tc;
            }

            RTIBool Track__initialize(
                Track_* sample) {
                return detect_mot::msg::dds_::Track__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Track__initialize_ex(
                Track_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return detect_mot::msg::dds_::Track__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Track__initialize_w_params(
                Track_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->id_)) {
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

                if (!RTICdrType_initLong(&sample->age_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->information3d_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initArray(
                    sample->bbox_, (4), RTI_CDR_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                if (!geometry_msgs::msg::dds_::Point32__initialize_w_params(&sample->position_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!geometry_msgs::msg::dds_::Point32__initialize_w_params(&sample->velocity_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!geometry_msgs::msg::dds_::Point32__initialize_w_params(&sample->size_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!geometry_msgs::msg::dds_::Point32__initialize_w_params(&sample->position_e_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!geometry_msgs::msg::dds_::Point32__initialize_w_params(&sample->velocity_e_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory) {
                    geometry_msgs::msg::dds_::Point32_Seq_initialize(&sample->pointcloud_ );
                    geometry_msgs::msg::dds_::Point32_Seq_set_element_allocation_params(&sample->pointcloud_ ,allocParams);
                    geometry_msgs::msg::dds_::Point32_Seq_set_absolute_maximum(&sample->pointcloud_ , RTI_INT32_MAX);
                    if (!geometry_msgs::msg::dds_::Point32_Seq_set_maximum(&sample->pointcloud_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    geometry_msgs::msg::dds_::Point32_Seq_set_length(&sample->pointcloud_, 0);
                }
                if (allocParams->allocate_memory) {
                    geometry_msgs::msg::dds_::Point32_Seq_initialize(&sample->trace_ );
                    geometry_msgs::msg::dds_::Point32_Seq_set_element_allocation_params(&sample->trace_ ,allocParams);
                    geometry_msgs::msg::dds_::Point32_Seq_set_absolute_maximum(&sample->trace_ , RTI_INT32_MAX);
                    if (!geometry_msgs::msg::dds_::Point32_Seq_set_maximum(&sample->trace_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    geometry_msgs::msg::dds_::Point32_Seq_set_length(&sample->trace_, 0);
                }
                return RTI_TRUE;
            }

            void Track__finalize(
                Track_* sample)
            {

                detect_mot::msg::dds_::Track__finalize_ex(sample,RTI_TRUE);
            }

            void Track__finalize_ex(
                Track_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                detect_mot::msg::dds_::Track__finalize_w_params(
                    sample,&deallocParams);
            }

            void Track__finalize_w_params(
                Track_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

                geometry_msgs::msg::dds_::Point32__finalize_w_params(&sample->position_,deallocParams);

                geometry_msgs::msg::dds_::Point32__finalize_w_params(&sample->velocity_,deallocParams);

                geometry_msgs::msg::dds_::Point32__finalize_w_params(&sample->size_,deallocParams);

                geometry_msgs::msg::dds_::Point32__finalize_w_params(&sample->position_e_,deallocParams);

                geometry_msgs::msg::dds_::Point32__finalize_w_params(&sample->velocity_e_,deallocParams);

                geometry_msgs::msg::dds_::Point32_Seq_set_element_deallocation_params(
                    &sample->pointcloud_,deallocParams);
                geometry_msgs::msg::dds_::Point32_Seq_finalize(&sample->pointcloud_);

                geometry_msgs::msg::dds_::Point32_Seq_set_element_deallocation_params(
                    &sample->trace_,deallocParams);
                geometry_msgs::msg::dds_::Point32_Seq_finalize(&sample->trace_);

            }

            void Track__finalize_optional_members(
                Track_* sample, RTIBool deletePointers)
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

                geometry_msgs::msg::dds_::Point32__finalize_optional_members(&sample->position_, deallocParams->delete_pointers);
                geometry_msgs::msg::dds_::Point32__finalize_optional_members(&sample->velocity_, deallocParams->delete_pointers);
                geometry_msgs::msg::dds_::Point32__finalize_optional_members(&sample->size_, deallocParams->delete_pointers);
                geometry_msgs::msg::dds_::Point32__finalize_optional_members(&sample->position_e_, deallocParams->delete_pointers);
                geometry_msgs::msg::dds_::Point32__finalize_optional_members(&sample->velocity_e_, deallocParams->delete_pointers);
                {
                    DDS_UnsignedLong i, length;
                    length = geometry_msgs::msg::dds_::Point32_Seq_get_length(
                        &sample->pointcloud_);

                    for (i = 0; i < length; i++) {
                        geometry_msgs::msg::dds_::Point32__finalize_optional_members(
                            geometry_msgs::msg::dds_::Point32_Seq_get_reference(
                                &sample->pointcloud_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = geometry_msgs::msg::dds_::Point32_Seq_get_length(
                        &sample->trace_);

                    for (i = 0; i < length; i++) {
                        geometry_msgs::msg::dds_::Point32__finalize_optional_members(
                            geometry_msgs::msg::dds_::Point32_Seq_get_reference(
                                &sample->trace_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool Track__copy(
                Track_* dst,
                const Track_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyLong (
                        &dst->id_, &src->id_)) { 
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
                    if (!RTICdrType_copyLong (
                        &dst->age_, &src->age_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->information3d_, &src->information3d_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->bbox_ ,src->bbox_,(4), RTI_CDR_LONG_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!geometry_msgs::msg::dds_::Point32__copy(
                        &dst->position_,(const geometry_msgs::msg::dds_::Point32_*)&src->position_)) {
                        return RTI_FALSE;
                    } 
                    if (!geometry_msgs::msg::dds_::Point32__copy(
                        &dst->velocity_,(const geometry_msgs::msg::dds_::Point32_*)&src->velocity_)) {
                        return RTI_FALSE;
                    } 
                    if (!geometry_msgs::msg::dds_::Point32__copy(
                        &dst->size_,(const geometry_msgs::msg::dds_::Point32_*)&src->size_)) {
                        return RTI_FALSE;
                    } 
                    if (!geometry_msgs::msg::dds_::Point32__copy(
                        &dst->position_e_,(const geometry_msgs::msg::dds_::Point32_*)&src->position_e_)) {
                        return RTI_FALSE;
                    } 
                    if (!geometry_msgs::msg::dds_::Point32__copy(
                        &dst->velocity_e_,(const geometry_msgs::msg::dds_::Point32_*)&src->velocity_e_)) {
                        return RTI_FALSE;
                    } 
                    if (!geometry_msgs::msg::dds_::Point32_Seq_copy(&dst->pointcloud_ ,
                    &src->pointcloud_ )) {
                        return RTI_FALSE;
                    }
                    if (!geometry_msgs::msg::dds_::Point32_Seq_copy(&dst->trace_ ,
                    &src->trace_ )) {
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
            * Configure and implement 'Track_' sequence class.
            */
            #define T Track_
            #define TSeq Track_Seq

            #define T_initialize_w_params detect_mot::msg::dds_::Track__initialize_w_params

            #define T_finalize_w_params   detect_mot::msg::dds_::Track__finalize_w_params
            #define T_copy       detect_mot::msg::dds_::Track__copy

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

