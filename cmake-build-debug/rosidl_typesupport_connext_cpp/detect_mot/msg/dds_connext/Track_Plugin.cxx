
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Track_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <string.h>

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include <new>

#include "Track_Plugin.h"

namespace detect_mot {
    namespace msg {
        namespace dds_ {

            /* ----------------------------------------------------------------------------
            *  Type Track_
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            Track_*
            Track_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                Track_ *sample = NULL;

                sample = new (std::nothrow) Track_ ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!detect_mot::msg::dds_::Track__initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample; 
            } 

            Track_ *
            Track_PluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                Track_ *sample = NULL;

                sample = new (std::nothrow) Track_ ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!detect_mot::msg::dds_::Track__initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample; 
            }

            Track_ *
            Track_PluginSupport_create_data(void)
            {
                return detect_mot::msg::dds_::Track_PluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            Track_PluginSupport_destroy_data_w_params(
                Track_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {

                detect_mot::msg::dds_::Track__finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            Track_PluginSupport_destroy_data_ex(
                Track_ *sample,RTIBool deallocate_pointers) {

                detect_mot::msg::dds_::Track__finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            Track_PluginSupport_destroy_data(
                Track_ *sample) {

                detect_mot::msg::dds_::Track_PluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            Track_PluginSupport_copy_data(
                Track_ *dst,
                const Track_ *src)
            {
                return detect_mot::msg::dds_::Track__copy(dst,(const Track_*) src);
            }

            void 
            Track_PluginSupport_print_data(
                const Track_ *sample,
                const char *desc,
                unsigned int indent_level)
            {

                RTICdrType_printIndent(indent_level);

                if (desc != NULL) {
                    RTILog_debug("%s:\n", desc);
                } else {
                    RTILog_debug("\n");
                }

                if (sample == NULL) {
                    RTILog_debug("NULL\n");
                    return;
                }

                RTICdrType_printLong(
                    &sample->id_, "id_", indent_level + 1);    

                RTICdrType_printLong(
                    &sample->classid_, "classid_", indent_level + 1);    

                if (sample->classname_==NULL) {
                    RTICdrType_printString(
                        NULL,"classname_", indent_level + 1);
                } else {
                    RTICdrType_printString(
                        sample->classname_,"classname_", indent_level + 1);    
                }

                RTICdrType_printLong(
                    &sample->age_, "age_", indent_level + 1);    

                RTICdrType_printBoolean(
                    &sample->information3d_, "information3d_", indent_level + 1);    

                RTICdrType_printArray(
                    sample->bbox_, (4), RTI_CDR_LONG_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printLong, 
                    "bbox_", indent_level + 1);        

                geometry_msgs::msg::dds_::Point32_PluginSupport_print_data(
                    (const geometry_msgs::msg::dds_::Point32_*) &sample->position_, "position_", indent_level + 1);

                geometry_msgs::msg::dds_::Point32_PluginSupport_print_data(
                    (const geometry_msgs::msg::dds_::Point32_*) &sample->velocity_, "velocity_", indent_level + 1);

                geometry_msgs::msg::dds_::Point32_PluginSupport_print_data(
                    (const geometry_msgs::msg::dds_::Point32_*) &sample->size_, "size_", indent_level + 1);

                geometry_msgs::msg::dds_::Point32_PluginSupport_print_data(
                    (const geometry_msgs::msg::dds_::Point32_*) &sample->position_e_, "position_e_", indent_level + 1);

                geometry_msgs::msg::dds_::Point32_PluginSupport_print_data(
                    (const geometry_msgs::msg::dds_::Point32_*) &sample->velocity_e_, "velocity_e_", indent_level + 1);

                if (geometry_msgs::msg::dds_::Point32_Seq_get_contiguous_bufferI(&sample->pointcloud_) != NULL) {
                    RTICdrType_printArray(
                        geometry_msgs::msg::dds_::Point32_Seq_get_contiguous_bufferI(&sample->pointcloud_), 
                        geometry_msgs::msg::dds_::Point32_Seq_get_length(&sample->pointcloud_),
                        sizeof(geometry_msgs::msg::dds_::Point32_),
                        (RTICdrTypePrintFunction)geometry_msgs::msg::dds_::Point32_PluginSupport_print_data,
                        "pointcloud_", indent_level + 1);
                } else {
                    RTICdrType_printPointerArray(
                        geometry_msgs::msg::dds_::Point32_Seq_get_discontiguous_bufferI(&sample->pointcloud_), 
                        geometry_msgs::msg::dds_::Point32_Seq_get_length(&sample->pointcloud_),
                        (RTICdrTypePrintFunction)geometry_msgs::msg::dds_::Point32_PluginSupport_print_data,
                        "pointcloud_", indent_level + 1);
                }

                if (geometry_msgs::msg::dds_::Point32_Seq_get_contiguous_bufferI(&sample->trace_) != NULL) {
                    RTICdrType_printArray(
                        geometry_msgs::msg::dds_::Point32_Seq_get_contiguous_bufferI(&sample->trace_), 
                        geometry_msgs::msg::dds_::Point32_Seq_get_length(&sample->trace_),
                        sizeof(geometry_msgs::msg::dds_::Point32_),
                        (RTICdrTypePrintFunction)geometry_msgs::msg::dds_::Point32_PluginSupport_print_data,
                        "trace_", indent_level + 1);
                } else {
                    RTICdrType_printPointerArray(
                        geometry_msgs::msg::dds_::Point32_Seq_get_discontiguous_bufferI(&sample->trace_), 
                        geometry_msgs::msg::dds_::Point32_Seq_get_length(&sample->trace_),
                        (RTICdrTypePrintFunction)geometry_msgs::msg::dds_::Point32_PluginSupport_print_data,
                        "trace_", indent_level + 1);
                }

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            Track_Plugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                if (registration_data) {} /* To avoid warnings */
                if (participant_info) {} /* To avoid warnings */
                if (top_level_registration) {} /* To avoid warnings */
                if (container_plugin_context) {} /* To avoid warnings */
                if (type_code) {} /* To avoid warnings */

                return PRESTypePluginDefaultParticipantData_new(participant_info);

            }

            void 
            Track_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {

                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }

            PRESTypePluginEndpointData
            Track_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                PRESTypePluginEndpointData epd = NULL;

                unsigned int serializedSampleMaxSize;

                if (top_level_registration) {} /* To avoid warnings */
                if (containerPluginContext) {} /* To avoid warnings */

                epd = PRESTypePluginDefaultEndpointData_new(
                    participant_data,
                    endpoint_info,
                    (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                    detect_mot::msg::dds_::Track_PluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    detect_mot::msg::dds_::Track_PluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = detect_mot::msg::dds_::Track_Plugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        detect_mot::msg::dds_::Track_Plugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        detect_mot::msg::dds_::Track_Plugin_get_serialized_sample_size,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            Track_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  

                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            Track_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Track_ *sample,
                void *handle)
            {

                Track__finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            Track_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Track_ *dst,
                const Track_ *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return detect_mot::msg::dds_::Track_PluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            Track_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool 
            Track_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const Track_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;
                RTIBool retval = RTI_TRUE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_sample) {

                    if (!RTICdrStream_serializeLong(
                        stream, &sample->id_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeLong(
                        stream, &sample->classid_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeString(
                        stream, sample->classname_, (RTI_INT32_MAX-1) + 1)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeLong(
                        stream, &sample->age_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeBoolean(
                        stream, &sample->information3d_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->bbox_, (4), RTI_CDR_LONG_TYPE)) {
                        return RTI_FALSE;
                    }

                    if(!geometry_msgs::msg::dds_::Point32_Plugin_serialize(
                        endpoint_data,
                        (const geometry_msgs::msg::dds_::Point32_*) &sample->position_,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                    if(!geometry_msgs::msg::dds_::Point32_Plugin_serialize(
                        endpoint_data,
                        (const geometry_msgs::msg::dds_::Point32_*) &sample->velocity_,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                    if(!geometry_msgs::msg::dds_::Point32_Plugin_serialize(
                        endpoint_data,
                        (const geometry_msgs::msg::dds_::Point32_*) &sample->size_,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                    if(!geometry_msgs::msg::dds_::Point32_Plugin_serialize(
                        endpoint_data,
                        (const geometry_msgs::msg::dds_::Point32_*) &sample->position_e_,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                    if(!geometry_msgs::msg::dds_::Point32_Plugin_serialize(
                        endpoint_data,
                        (const geometry_msgs::msg::dds_::Point32_*) &sample->velocity_e_,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                    if (geometry_msgs::msg::dds_::Point32_Seq_get_contiguous_bufferI(&sample->pointcloud_) != NULL) {
                        if (!RTICdrStream_serializeNonPrimitiveSequence(
                            stream,
                            geometry_msgs::msg::dds_::Point32_Seq_get_contiguous_bufferI(&sample->pointcloud_),
                            geometry_msgs::msg::dds_::Point32_Seq_get_length(&sample->pointcloud_),
                            (RTI_INT32_MAX-1),
                            sizeof(geometry_msgs::msg::dds_::Point32_),
                            (RTICdrStreamSerializeFunction)geometry_msgs::msg::dds_::Point32_Plugin_serialize,
                            RTI_FALSE, encapsulation_id,RTI_TRUE,
                            endpoint_data,endpoint_plugin_qos)) {
                            return RTI_FALSE;
                        } 
                    } else {
                        if (!RTICdrStream_serializeNonPrimitivePointerSequence(
                            stream,
                            (const void **) geometry_msgs::msg::dds_::Point32_Seq_get_discontiguous_bufferI(&sample->pointcloud_),
                            geometry_msgs::msg::dds_::Point32_Seq_get_length(&sample->pointcloud_),
                            (RTI_INT32_MAX-1),
                            (RTICdrStreamSerializeFunction)geometry_msgs::msg::dds_::Point32_Plugin_serialize,
                            RTI_FALSE, encapsulation_id,RTI_TRUE,
                            endpoint_data,endpoint_plugin_qos)) {
                            return RTI_FALSE;
                        } 
                    }

                    if (geometry_msgs::msg::dds_::Point32_Seq_get_contiguous_bufferI(&sample->trace_) != NULL) {
                        if (!RTICdrStream_serializeNonPrimitiveSequence(
                            stream,
                            geometry_msgs::msg::dds_::Point32_Seq_get_contiguous_bufferI(&sample->trace_),
                            geometry_msgs::msg::dds_::Point32_Seq_get_length(&sample->trace_),
                            (RTI_INT32_MAX-1),
                            sizeof(geometry_msgs::msg::dds_::Point32_),
                            (RTICdrStreamSerializeFunction)geometry_msgs::msg::dds_::Point32_Plugin_serialize,
                            RTI_FALSE, encapsulation_id,RTI_TRUE,
                            endpoint_data,endpoint_plugin_qos)) {
                            return RTI_FALSE;
                        } 
                    } else {
                        if (!RTICdrStream_serializeNonPrimitivePointerSequence(
                            stream,
                            (const void **) geometry_msgs::msg::dds_::Point32_Seq_get_discontiguous_bufferI(&sample->trace_),
                            geometry_msgs::msg::dds_::Point32_Seq_get_length(&sample->trace_),
                            (RTI_INT32_MAX-1),
                            (RTICdrStreamSerializeFunction)geometry_msgs::msg::dds_::Point32_Plugin_serialize,
                            RTI_FALSE, encapsulation_id,RTI_TRUE,
                            endpoint_data,endpoint_plugin_qos)) {
                            return RTI_FALSE;
                        } 
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return retval;
            }

            RTIBool 
            Track_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                Track_ *sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                char * position = NULL;

                RTIBool done = RTI_FALSE;

                try {

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */
                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if(deserialize_sample) {

                        detect_mot::msg::dds_::Track__initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                        if (!RTICdrStream_deserializeLong(
                            stream, &sample->id_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeLong(
                            stream, &sample->classid_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeStringEx(
                            stream,&sample->classname_, (RTI_INT32_MAX-1) + 1,RTI_TRUE)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeLong(
                            stream, &sample->age_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeBoolean(
                            stream, &sample->information3d_)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->bbox_, (4), RTI_CDR_LONG_TYPE)) {
                            goto fin; 
                        }

                        if(!geometry_msgs::msg::dds_::Point32_Plugin_deserialize_sample(
                            endpoint_data,
                            &sample->position_,
                            stream,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_plugin_qos)) {
                            goto fin; 
                        }
                        if(!geometry_msgs::msg::dds_::Point32_Plugin_deserialize_sample(
                            endpoint_data,
                            &sample->velocity_,
                            stream,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_plugin_qos)) {
                            goto fin; 
                        }
                        if(!geometry_msgs::msg::dds_::Point32_Plugin_deserialize_sample(
                            endpoint_data,
                            &sample->size_,
                            stream,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_plugin_qos)) {
                            goto fin; 
                        }
                        if(!geometry_msgs::msg::dds_::Point32_Plugin_deserialize_sample(
                            endpoint_data,
                            &sample->position_e_,
                            stream,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_plugin_qos)) {
                            goto fin; 
                        }
                        if(!geometry_msgs::msg::dds_::Point32_Plugin_deserialize_sample(
                            endpoint_data,
                            &sample->velocity_e_,
                            stream,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_plugin_qos)) {
                            goto fin; 
                        }
                        {
                            RTICdrUnsignedLong sequence_length;
                            if (!RTICdrStream_lookUnsignedLong(stream,&sequence_length)) {
                                goto fin; 
                            }
                            if (!geometry_msgs::msg::dds_::Point32_Seq_set_maximum(&sample->pointcloud_,sequence_length)) {
                                return RTI_FALSE;
                            }
                            if (geometry_msgs::msg::dds_::Point32_Seq_get_contiguous_bufferI(&sample->pointcloud_) != NULL) {
                                if (!RTICdrStream_deserializeNonPrimitiveSequence(
                                    stream,
                                    geometry_msgs::msg::dds_::Point32_Seq_get_contiguous_bufferI(&sample->pointcloud_),
                                    &sequence_length,
                                    geometry_msgs::msg::dds_::Point32_Seq_get_maximum(&sample->pointcloud_),
                                    sizeof(geometry_msgs::msg::dds_::Point32_),
                                    (RTICdrStreamDeserializeFunction)geometry_msgs::msg::dds_::Point32_Plugin_deserialize_sample,
                                    RTI_FALSE,RTI_TRUE,
                                    endpoint_data,endpoint_plugin_qos)) {
                                    goto fin; 
                                }
                            } else {
                                if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                                    stream,
                                    (void **) geometry_msgs::msg::dds_::Point32_Seq_get_discontiguous_bufferI(&sample->pointcloud_),
                                    &sequence_length,
                                    geometry_msgs::msg::dds_::Point32_Seq_get_maximum(&sample->pointcloud_),
                                    (RTICdrStreamDeserializeFunction)geometry_msgs::msg::dds_::Point32_Plugin_deserialize_sample,
                                    RTI_FALSE,RTI_TRUE,
                                    endpoint_data,endpoint_plugin_qos)) {
                                    goto fin; 
                                }
                            }
                            if (!geometry_msgs::msg::dds_::Point32_Seq_set_length(
                                &sample->pointcloud_,sequence_length)) {
                                return RTI_FALSE;
                            }        

                        }
                        {
                            RTICdrUnsignedLong sequence_length;
                            if (!RTICdrStream_lookUnsignedLong(stream,&sequence_length)) {
                                goto fin; 
                            }
                            if (!geometry_msgs::msg::dds_::Point32_Seq_set_maximum(&sample->trace_,sequence_length)) {
                                return RTI_FALSE;
                            }
                            if (geometry_msgs::msg::dds_::Point32_Seq_get_contiguous_bufferI(&sample->trace_) != NULL) {
                                if (!RTICdrStream_deserializeNonPrimitiveSequence(
                                    stream,
                                    geometry_msgs::msg::dds_::Point32_Seq_get_contiguous_bufferI(&sample->trace_),
                                    &sequence_length,
                                    geometry_msgs::msg::dds_::Point32_Seq_get_maximum(&sample->trace_),
                                    sizeof(geometry_msgs::msg::dds_::Point32_),
                                    (RTICdrStreamDeserializeFunction)geometry_msgs::msg::dds_::Point32_Plugin_deserialize_sample,
                                    RTI_FALSE,RTI_TRUE,
                                    endpoint_data,endpoint_plugin_qos)) {
                                    goto fin; 
                                }
                            } else {
                                if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                                    stream,
                                    (void **) geometry_msgs::msg::dds_::Point32_Seq_get_discontiguous_bufferI(&sample->trace_),
                                    &sequence_length,
                                    geometry_msgs::msg::dds_::Point32_Seq_get_maximum(&sample->trace_),
                                    (RTICdrStreamDeserializeFunction)geometry_msgs::msg::dds_::Point32_Plugin_deserialize_sample,
                                    RTI_FALSE,RTI_TRUE,
                                    endpoint_data,endpoint_plugin_qos)) {
                                    goto fin; 
                                }
                            }
                            if (!geometry_msgs::msg::dds_::Point32_Seq_set_length(
                                &sample->trace_,sequence_length)) {
                                return RTI_FALSE;
                            }        

                        }
                    }

                    done = RTI_TRUE;
                  fin:
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool
            Track_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Track_ *sample)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                Track_Plugin_get_serialized_sample_max_size(
                    NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

                if (buffer == NULL) {
                    *length = 
                    Track_Plugin_get_serialized_sample_size(
                        (PRESTypePluginEndpointData)&epd,
                        RTI_TRUE,
                        RTICdrEncapsulation_getNativeCdrEncapsulationId(),
                        0,
                        sample);

                    if (*length == 0) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }    

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, *length);

                result = detect_mot::msg::dds_::Track_Plugin_serialize(
                    (PRESTypePluginEndpointData)&epd, sample, &stream, 
                    RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                    RTI_TRUE, NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            }

            RTIBool
            Track_Plugin_deserialize_from_cdr_buffer(
                Track_ *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                Track__finalize_optional_members(sample, RTI_TRUE);
                return Track_Plugin_deserialize_sample( 
                    NULL, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            DDS_ReturnCode_t
            Track_Plugin_data_to_string(
                const Track_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property)
            {
                DDS_DynamicData *data = NULL;
                char *buffer = NULL;
                unsigned int length = 0;
                struct DDS_PrintFormat printFormat;
                DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

                if (sample == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (str_size == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (property == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (!Track_Plugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!Track_Plugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                data = DDS_DynamicData_new(
                    Track__get_typecode(), 
                    &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
                if (data == NULL) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_PrintFormatProperty_to_print_format(
                    property, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_DynamicDataFormatter_to_string_w_format(
                    data, 
                    str,
                    str_size, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                RTIOsapiHeap_freeBuffer(buffer);
                DDS_DynamicData_delete(data);
                return DDS_RETCODE_OK;
            }

            RTIBool 
            Track_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Track_ **sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                RTIBool result;
                const char *METHOD_NAME = "Track_Plugin_deserialize";
                if (drop_sample) {} /* To avoid warnings */

                stream->_xTypesState.unassignable = RTI_FALSE;
                result= detect_mot::msg::dds_::Track_Plugin_deserialize_sample( 
                    endpoint_data, (sample != NULL)?*sample:NULL,
                    stream, deserialize_encapsulation, deserialize_sample, 
                    endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }
                if (!result && stream->_xTypesState.unassignable ) {

                    RTICdrLog_exception(
                        METHOD_NAME, 
                        &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
                        "Track_");

                }

                return result;

            }

            RTIBool Track_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream,   
                RTIBool skip_encapsulation,
                RTIBool skip_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(skip_encapsulation) {
                    if (!RTICdrStream_skipEncapsulation(stream)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if (skip_sample) {

                    if (!RTICdrStream_skipLong (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipLong (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipString (stream, (RTI_INT32_MAX-1)+1)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipLong (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipBoolean (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (4), RTI_CDR_LONG_TYPE)) {
                        goto fin; 
                    }      
                    if (!geometry_msgs::msg::dds_::Point32_Plugin_skip(
                        endpoint_data,
                        stream, 
                        RTI_FALSE, RTI_TRUE, 
                        endpoint_plugin_qos)) {
                        goto fin; 
                    }
                    if (!geometry_msgs::msg::dds_::Point32_Plugin_skip(
                        endpoint_data,
                        stream, 
                        RTI_FALSE, RTI_TRUE, 
                        endpoint_plugin_qos)) {
                        goto fin; 
                    }
                    if (!geometry_msgs::msg::dds_::Point32_Plugin_skip(
                        endpoint_data,
                        stream, 
                        RTI_FALSE, RTI_TRUE, 
                        endpoint_plugin_qos)) {
                        goto fin; 
                    }
                    if (!geometry_msgs::msg::dds_::Point32_Plugin_skip(
                        endpoint_data,
                        stream, 
                        RTI_FALSE, RTI_TRUE, 
                        endpoint_plugin_qos)) {
                        goto fin; 
                    }
                    if (!geometry_msgs::msg::dds_::Point32_Plugin_skip(
                        endpoint_data,
                        stream, 
                        RTI_FALSE, RTI_TRUE, 
                        endpoint_plugin_qos)) {
                        goto fin; 
                    }
                    {
                        RTICdrUnsignedLong sequence_length;
                        if (!RTICdrStream_skipNonPrimitiveSequence(
                            stream,
                            &sequence_length,
                            sizeof(geometry_msgs::msg::dds_::Point32_),
                            (RTICdrStreamSkipFunction)geometry_msgs::msg::dds_::Point32_Plugin_skip,
                            RTI_FALSE,RTI_TRUE,
                            endpoint_data,endpoint_plugin_qos)) {
                            goto fin; 
                        }
                    }
                    {
                        RTICdrUnsignedLong sequence_length;
                        if (!RTICdrStream_skipNonPrimitiveSequence(
                            stream,
                            &sequence_length,
                            sizeof(geometry_msgs::msg::dds_::Point32_),
                            (RTICdrStreamSkipFunction)geometry_msgs::msg::dds_::Point32_Plugin_skip,
                            RTI_FALSE,RTI_TRUE,
                            endpoint_data,endpoint_plugin_qos)) {
                            goto fin; 
                        }
                    }
                }

                done = RTI_TRUE;
              fin:
                if (done != RTI_TRUE && 
                RTICdrStream_getRemainder(stream) >=
                RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                    return RTI_FALSE;   
                }
                if(skip_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            unsigned int 
            Track_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                if (endpoint_data) {} /* To avoid warnings */
                if (include_encapsulation) {}
                if (encapsulation_id) {}
                if (current_alignment) {}

                if (overflow != NULL) {
                    *overflow = RTI_TRUE;
                }

                return RTI_CDR_MAX_SERIALIZED_SIZE;

            }

            unsigned int 
            Track_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = Track_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int 
            Track_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */ 

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=RTICdrType_getLongMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getLongMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getStringMaxSizeSerialized(
                    current_alignment, 1);
                current_alignment +=RTICdrType_getLongMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (4), RTI_CDR_LONG_TYPE);
                current_alignment +=geometry_msgs::msg::dds_::Point32_Plugin_get_serialized_sample_min_size(
                    endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
                current_alignment +=geometry_msgs::msg::dds_::Point32_Plugin_get_serialized_sample_min_size(
                    endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
                current_alignment +=geometry_msgs::msg::dds_::Point32_Plugin_get_serialized_sample_min_size(
                    endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
                current_alignment +=geometry_msgs::msg::dds_::Point32_Plugin_get_serialized_sample_min_size(
                    endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
                current_alignment +=geometry_msgs::msg::dds_::Point32_Plugin_get_serialized_sample_min_size(
                    endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
                current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerialized(
                    current_alignment, 0,
                    geometry_msgs::msg::dds_::Point32_Plugin_get_serialized_sample_min_size,
                    RTI_FALSE,encapsulation_id,endpoint_data);
                current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerialized(
                    current_alignment, 0,
                    geometry_msgs::msg::dds_::Point32_Plugin_get_serialized_sample_min_size,
                    RTI_FALSE,encapsulation_id,endpoint_data);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            /* Returns the size of the sample in its serialized form (in bytes).
            * It can also be an estimation in excess of the real buffer needed 
            * during a call to the serialize() function.
            * The value reported does not have to include the space for the
            * encapsulation flags.
            */
            unsigned int
            Track_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const Track_ * sample) 
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;
                struct PRESTypePluginDefaultEndpointData epd;   

                if (sample==NULL) {
                    return 0;
                }
                if (endpoint_data == NULL) {
                    endpoint_data = (PRESTypePluginEndpointData) &epd;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);        
                }

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);
                }

                current_alignment += RTICdrType_getLongMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getLongMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getStringSerializedSize(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), sample->classname_);

                current_alignment += RTICdrType_getLongMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getBooleanMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (4), RTI_CDR_LONG_TYPE);  

                current_alignment += geometry_msgs::msg::dds_::Point32_Plugin_get_serialized_sample_size(
                    endpoint_data,RTI_FALSE, encapsulation_id,
                    current_alignment, (const geometry_msgs::msg::dds_::Point32_*) &sample->position_);

                current_alignment += geometry_msgs::msg::dds_::Point32_Plugin_get_serialized_sample_size(
                    endpoint_data,RTI_FALSE, encapsulation_id,
                    current_alignment, (const geometry_msgs::msg::dds_::Point32_*) &sample->velocity_);

                current_alignment += geometry_msgs::msg::dds_::Point32_Plugin_get_serialized_sample_size(
                    endpoint_data,RTI_FALSE, encapsulation_id,
                    current_alignment, (const geometry_msgs::msg::dds_::Point32_*) &sample->size_);

                current_alignment += geometry_msgs::msg::dds_::Point32_Plugin_get_serialized_sample_size(
                    endpoint_data,RTI_FALSE, encapsulation_id,
                    current_alignment, (const geometry_msgs::msg::dds_::Point32_*) &sample->position_e_);

                current_alignment += geometry_msgs::msg::dds_::Point32_Plugin_get_serialized_sample_size(
                    endpoint_data,RTI_FALSE, encapsulation_id,
                    current_alignment, (const geometry_msgs::msg::dds_::Point32_*) &sample->velocity_e_);

                current_alignment += RTICdrType_get4ByteMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                if (geometry_msgs::msg::dds_::Point32_Seq_get_contiguous_bufferI(&sample->pointcloud_) != NULL) {
                    current_alignment += RTICdrType_getNonPrimitiveArraySerializedSize(
                        current_alignment, geometry_msgs::msg::dds_::Point32_Seq_get_length(&sample->pointcloud_),
                        sizeof(geometry_msgs::msg::dds_::Point32_),
                        (RTICdrTypeGetSerializedSampleSizeFunction)geometry_msgs::msg::dds_::Point32_Plugin_get_serialized_sample_size,
                        RTI_FALSE,encapsulation_id,
                        geometry_msgs::msg::dds_::Point32_Seq_get_contiguous_bufferI(&sample->pointcloud_),
                        endpoint_data);
                } else {
                    current_alignment += RTICdrStream_getNonPrimitivePointerArraySerializedSize(
                        current_alignment,  
                        geometry_msgs::msg::dds_::Point32_Seq_get_length(&sample->pointcloud_),
                        sizeof(geometry_msgs::msg::dds_::Point32_),
                        (RTICdrTypeGetSerializedSampleSizeFunction)geometry_msgs::msg::dds_::Point32_Plugin_get_serialized_sample_size,
                        RTI_FALSE,encapsulation_id,
                        (const void **)geometry_msgs::msg::dds_::Point32_Seq_get_discontiguous_bufferI(&sample->pointcloud_),
                        endpoint_data);
                }

                current_alignment += RTICdrType_get4ByteMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                if (geometry_msgs::msg::dds_::Point32_Seq_get_contiguous_bufferI(&sample->trace_) != NULL) {
                    current_alignment += RTICdrType_getNonPrimitiveArraySerializedSize(
                        current_alignment, geometry_msgs::msg::dds_::Point32_Seq_get_length(&sample->trace_),
                        sizeof(geometry_msgs::msg::dds_::Point32_),
                        (RTICdrTypeGetSerializedSampleSizeFunction)geometry_msgs::msg::dds_::Point32_Plugin_get_serialized_sample_size,
                        RTI_FALSE,encapsulation_id,
                        geometry_msgs::msg::dds_::Point32_Seq_get_contiguous_bufferI(&sample->trace_),
                        endpoint_data);
                } else {
                    current_alignment += RTICdrStream_getNonPrimitivePointerArraySerializedSize(
                        current_alignment,  
                        geometry_msgs::msg::dds_::Point32_Seq_get_length(&sample->trace_),
                        sizeof(geometry_msgs::msg::dds_::Point32_),
                        (RTICdrTypeGetSerializedSampleSizeFunction)geometry_msgs::msg::dds_::Point32_Plugin_get_serialized_sample_size,
                        RTI_FALSE,encapsulation_id,
                        (const void **)geometry_msgs::msg::dds_::Point32_Seq_get_discontiguous_bufferI(&sample->trace_),
                        endpoint_data);
                }

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            Track_Plugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool 
            Track_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const Track_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_key) {

                    if (!detect_mot::msg::dds_::Track_Plugin_serialize(
                        endpoint_data,
                        sample,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            RTIBool Track_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                Track_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                try {

                    char * position = NULL;

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */

                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if (deserialize_key) {

                        if (!detect_mot::msg::dds_::Track_Plugin_deserialize_sample(
                            endpoint_data, sample, stream, 
                            RTI_FALSE, RTI_TRUE, 
                            endpoint_plugin_qos)) {
                            return RTI_FALSE;
                        }
                    }

                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool Track_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Track_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= detect_mot::msg::dds_::Track_Plugin_deserialize_key_sample(
                    endpoint_data, (sample != NULL)?*sample:NULL, stream,
                    deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }

                return result;    

            }

            unsigned int
            Track_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */
                if (overflow) {} /* To avoid warnings */

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment += detect_mot::msg::dds_::Track_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            unsigned int
            Track_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = Track_Plugin_get_serialized_key_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            Track_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                Track_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;
                RTIBool error = RTI_FALSE;

                if (stream == NULL) {
                    error = RTI_TRUE;
                    goto fin;
                }
                if(deserialize_encapsulation) {
                    if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                        return RTI_FALSE;
                    }
                    position = RTICdrStream_resetAlignment(stream);
                }

                if (deserialize_key) {

                    if (!detect_mot::msg::dds_::Track_Plugin_deserialize_sample(
                        endpoint_data, sample, stream, RTI_FALSE, 
                        RTI_TRUE, endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                done = RTI_TRUE;
              fin:
                if(!error) {
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                } else {
                    return RTI_FALSE;
                }       

                if(deserialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *Track_Plugin_new(void) 
            { 
                struct PRESTypePlugin *plugin = NULL;
                const struct PRESTypePluginVersion PLUGIN_VERSION = 
                PRES_TYPE_PLUGIN_VERSION_2_0;

                RTIOsapiHeap_allocateStructure(
                    &plugin, struct PRESTypePlugin);

                if (plugin == NULL) {
                    return NULL;
                }

                plugin->version = PLUGIN_VERSION;

                /* set up parent's function pointers */
                plugin->onParticipantAttached =
                (PRESTypePluginOnParticipantAttachedCallback)
                detect_mot::msg::dds_::Track_Plugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                detect_mot::msg::dds_::Track_Plugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                detect_mot::msg::dds_::Track_Plugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                detect_mot::msg::dds_::Track_Plugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                detect_mot::msg::dds_::Track_Plugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                Track_Plugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                Track_Plugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                Track__finalize_optional_members;

                plugin->serializeFnc =
                (PRESTypePluginSerializeFunction)
                detect_mot::msg::dds_::Track_Plugin_serialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction)
                detect_mot::msg::dds_::Track_Plugin_deserialize;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                detect_mot::msg::dds_::Track_Plugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                detect_mot::msg::dds_::Track_Plugin_get_serialized_sample_min_size;

                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                Track_Plugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                Track_Plugin_return_sample;

                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                detect_mot::msg::dds_::Track_Plugin_get_key_kind;

                /* These functions are only used for keyed types. As this is not a keyed
                type they are all set to NULL
                */
                plugin->serializeKeyFnc = NULL ;    
                plugin->deserializeKeyFnc = NULL;  
                plugin->getKeyFnc = NULL;
                plugin->returnKeyFnc = NULL;
                plugin->instanceToKeyFnc = NULL;
                plugin->keyToInstanceFnc = NULL;
                plugin->getSerializedKeyMaxSizeFnc = NULL;
                plugin->instanceToKeyHashFnc = NULL;
                plugin->serializedSampleToKeyHashFnc = NULL;
                plugin->serializedKeyToKeyHashFnc = NULL;    
                plugin->typeCode =  (struct RTICdrTypeCode *)detect_mot::msg::dds_::Track__get_typecode();

                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                Track_Plugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                Track_Plugin_return_buffer;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                detect_mot::msg::dds_::Track_Plugin_get_serialized_sample_size;

                plugin->endpointTypeName = Track_TYPENAME;

                return plugin;
            }

            void
            Track_Plugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace detect_mot  */
#undef RTI_CDR_CURRENT_SUBMODULE 