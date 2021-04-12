

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Frame_.idl using "rtiddsgen".
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

#include "Frame_.h"

#include <new>

namespace detect_mot {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *Frame_TYPENAME = "detect_mot::msg::dds_::Frame_";

            DDS_TypeCode* Frame__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Frame__g_tc_front_camera__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode Frame__g_tc_back_camera__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member Frame__g_tc_members[6]=
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
                        (char *)"numof3d_front_",/* Member name */
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
                        (char *)"numof3d_back_",/* Member name */
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
                        (char *)"robot_pose_",/* Member name */
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
                        (char *)"front_camera_",/* Member name */
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
                        (char *)"back_camera_",/* Member name */
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
                    }
                };

                static DDS_TypeCode Frame__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"detect_mot::msg::dds_::Frame_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        Frame__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Frame_*/

                if (is_initialized) {
                    return &Frame__g_tc;
                }

                Frame__g_tc_front_camera__sequence._data._typeCode = (RTICdrTypeCode *)detect_mot::msg::dds_::Track__get_typecode();

                Frame__g_tc_back_camera__sequence._data._typeCode = (RTICdrTypeCode *)detect_mot::msg::dds_::Track__get_typecode();

                Frame__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                Frame__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Frame__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Frame__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Pose2D__get_typecode();

                Frame__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& Frame__g_tc_front_camera__sequence;
                Frame__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& Frame__g_tc_back_camera__sequence;

                is_initialized = RTI_TRUE;

                return &Frame__g_tc;
            }

            RTIBool Frame__initialize(
                Frame_* sample) {
                return detect_mot::msg::dds_::Frame__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Frame__initialize_ex(
                Frame_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return detect_mot::msg::dds_::Frame__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Frame__initialize_w_params(
                Frame_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

                if (!RTICdrType_initLong(&sample->numof3d_front_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->numof3d_back_)) {
                    return RTI_FALSE;
                }

                if (!geometry_msgs::msg::dds_::Pose2D__initialize_w_params(&sample->robot_pose_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory) {
                    detect_mot::msg::dds_::Track_Seq_initialize(&sample->front_camera_ );
                    detect_mot::msg::dds_::Track_Seq_set_element_allocation_params(&sample->front_camera_ ,allocParams);
                    detect_mot::msg::dds_::Track_Seq_set_absolute_maximum(&sample->front_camera_ , RTI_INT32_MAX);
                    if (!detect_mot::msg::dds_::Track_Seq_set_maximum(&sample->front_camera_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    detect_mot::msg::dds_::Track_Seq_set_length(&sample->front_camera_, 0);
                }
                if (allocParams->allocate_memory) {
                    detect_mot::msg::dds_::Track_Seq_initialize(&sample->back_camera_ );
                    detect_mot::msg::dds_::Track_Seq_set_element_allocation_params(&sample->back_camera_ ,allocParams);
                    detect_mot::msg::dds_::Track_Seq_set_absolute_maximum(&sample->back_camera_ , RTI_INT32_MAX);
                    if (!detect_mot::msg::dds_::Track_Seq_set_maximum(&sample->back_camera_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    detect_mot::msg::dds_::Track_Seq_set_length(&sample->back_camera_, 0);
                }
                return RTI_TRUE;
            }

            void Frame__finalize(
                Frame_* sample)
            {

                detect_mot::msg::dds_::Frame__finalize_ex(sample,RTI_TRUE);
            }

            void Frame__finalize_ex(
                Frame_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                detect_mot::msg::dds_::Frame__finalize_w_params(
                    sample,&deallocParams);
            }

            void Frame__finalize_w_params(
                Frame_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                geometry_msgs::msg::dds_::Pose2D__finalize_w_params(&sample->robot_pose_,deallocParams);

                detect_mot::msg::dds_::Track_Seq_set_element_deallocation_params(
                    &sample->front_camera_,deallocParams);
                detect_mot::msg::dds_::Track_Seq_finalize(&sample->front_camera_);

                detect_mot::msg::dds_::Track_Seq_set_element_deallocation_params(
                    &sample->back_camera_,deallocParams);
                detect_mot::msg::dds_::Track_Seq_finalize(&sample->back_camera_);

            }

            void Frame__finalize_optional_members(
                Frame_* sample, RTIBool deletePointers)
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
                geometry_msgs::msg::dds_::Pose2D__finalize_optional_members(&sample->robot_pose_, deallocParams->delete_pointers);
                {
                    DDS_UnsignedLong i, length;
                    length = detect_mot::msg::dds_::Track_Seq_get_length(
                        &sample->front_camera_);

                    for (i = 0; i < length; i++) {
                        detect_mot::msg::dds_::Track__finalize_optional_members(
                            detect_mot::msg::dds_::Track_Seq_get_reference(
                                &sample->front_camera_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = detect_mot::msg::dds_::Track_Seq_get_length(
                        &sample->back_camera_);

                    for (i = 0; i < length; i++) {
                        detect_mot::msg::dds_::Track__finalize_optional_members(
                            detect_mot::msg::dds_::Track_Seq_get_reference(
                                &sample->back_camera_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool Frame__copy(
                Frame_* dst,
                const Frame_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyLong (
                        &dst->numof3d_front_, &src->numof3d_front_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLong (
                        &dst->numof3d_back_, &src->numof3d_back_)) { 
                        return RTI_FALSE;
                    }
                    if (!geometry_msgs::msg::dds_::Pose2D__copy(
                        &dst->robot_pose_,(const geometry_msgs::msg::dds_::Pose2D_*)&src->robot_pose_)) {
                        return RTI_FALSE;
                    } 
                    if (!detect_mot::msg::dds_::Track_Seq_copy(&dst->front_camera_ ,
                    &src->front_camera_ )) {
                        return RTI_FALSE;
                    }
                    if (!detect_mot::msg::dds_::Track_Seq_copy(&dst->back_camera_ ,
                    &src->back_camera_ )) {
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
            * Configure and implement 'Frame_' sequence class.
            */
            #define T Frame_
            #define TSeq Frame_Seq

            #define T_initialize_w_params detect_mot::msg::dds_::Frame__initialize_w_params

            #define T_finalize_w_params   detect_mot::msg::dds_::Frame__finalize_w_params
            #define T_copy       detect_mot::msg::dds_::Frame__copy

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

