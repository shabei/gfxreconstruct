/*
** Copyright (c) 2018 Valve Corporation
** Copyright (c) 2018 LunarG, Inc.
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/

/*
** This file is generated from the Khronos Vulkan XML API Registry.
**
*/

#include <cassert>

#include "decode/pnext_node.h"
#include "decode/pnext_null_node.h"
#include "decode/pnext_typed_node.h"
#include "generated/generated_vulkan_struct_decoders.h"

BRIMSTONE_BEGIN_NAMESPACE(brimstone)
BRIMSTONE_BEGIN_NAMESPACE(decode)

size_t decode_pnext_struct(const uint8_t* parameter_buffer, size_t buffer_size,  std::unique_ptr<PNextNode>* pNext)
{
    assert(pNext != nullptr);

    size_t bytes_read = 0;
    uint32_t attrib = 0;

    if ((parameter_buffer != nullptr) && (buffer_size >= sizeof(attrib)))
    {
        size_t stype_offset = 0;

        // Peek at the pointer attribute mask to make sure we have a non-NULL value that can be decoded.
        attrib = *(reinterpret_cast<const uint32_t*>(parameter_buffer));

        if ((attrib & format::PointerAttributes::kIsNull) != format::PointerAttributes::kIsNull)
        {
            // Offset to VkStructureType, after the pointer encoding preamble.
            stype_offset = sizeof(attrib);

            if ((attrib & format::PointerAttributes::kHasAddress) == format::PointerAttributes::kHasAddress)
            {
                stype_offset += sizeof(format::AddressEncodeType);
            }
        }

        if ((stype_offset != 0) && ((buffer_size - stype_offset) >= sizeof(VkStructureType)))
        {
            const VkStructureType* sType = reinterpret_cast<const VkStructureType*>(parameter_buffer + stype_offset);

            switch (*sType)
            {
            default:
                // TODO: Report or raise fatal error for unrecongized sType?
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceSubgroupProperties>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDevice16BitStorageFeatures>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkMemoryDedicatedRequirements>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkMemoryDedicatedAllocateInfo>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkMemoryAllocateFlagsInfo>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkDeviceGroupRenderPassBeginInfo>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkDeviceGroupCommandBufferBeginInfo>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkDeviceGroupSubmitInfo>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkDeviceGroupBindSparseInfo>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkBindBufferMemoryDeviceGroupInfo>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkBindImageMemoryDeviceGroupInfo>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkDeviceGroupDeviceCreateInfo>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceFeatures2>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDevicePointClippingProperties>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkRenderPassInputAttachmentAspectCreateInfo>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkImageViewUsageCreateInfo>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPipelineTessellationDomainOriginStateCreateInfo>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkRenderPassMultiviewCreateInfo>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceMultiviewFeatures>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceMultiviewProperties>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceVariablePointerFeatures>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceProtectedMemoryFeatures>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceProtectedMemoryProperties>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkProtectedSubmitInfo>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkSamplerYcbcrConversionInfo>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkBindImagePlaneMemoryInfo>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkImagePlaneMemoryRequirementsInfo>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceSamplerYcbcrConversionFeatures>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkSamplerYcbcrConversionImageFormatProperties>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceExternalImageFormatInfo>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkExternalImageFormatProperties>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceIDProperties>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkExternalMemoryImageCreateInfo>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkExternalMemoryBufferCreateInfo>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkExportMemoryAllocateInfo>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkExportFenceCreateInfo>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkExportSemaphoreCreateInfo>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceMaintenance3Properties>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETER_FEATURES:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceShaderDrawParameterFeatures>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkImageSwapchainCreateInfoKHR>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkBindImageMemorySwapchainInfoKHR>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkDeviceGroupPresentInfoKHR>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkDeviceGroupSwapchainCreateInfoKHR>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkDisplayPresentInfoKHR>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkImportMemoryWin32HandleInfoKHR>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkExportMemoryWin32HandleInfoKHR>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkImportMemoryFdInfoKHR>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkWin32KeyedMutexAcquireReleaseInfoKHR>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkExportSemaphoreWin32HandleInfoKHR>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkD3D12FenceSubmitInfoKHR>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDevicePushDescriptorPropertiesKHR>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPresentRegionsKHR>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkSharedPresentSurfaceCapabilitiesKHR>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkExportFenceWin32HandleInfoKHR>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkImageFormatListCreateInfoKHR>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDevice8BitStorageFeaturesKHR>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES_KHR:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceDriverPropertiesKHR>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkDebugReportCallbackCreateInfoEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPipelineRasterizationStateRasterizationOrderAMD>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkDedicatedAllocationImageCreateInfoNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkDedicatedAllocationBufferCreateInfoNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkDedicatedAllocationMemoryAllocateInfoNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkTextureLODGatherFormatPropertiesAMD>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceCornerSampledImageFeaturesNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkExternalMemoryImageCreateInfoNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkExportMemoryAllocateInfoNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkImportMemoryWin32HandleInfoNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkExportMemoryWin32HandleInfoNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkWin32KeyedMutexAcquireReleaseInfoNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkValidationFlagsEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkImageViewASTCDecodeModeEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceASTCDecodeFeaturesEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceConditionalRenderingFeaturesEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkCommandBufferInheritanceConditionalRenderingInfoEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPipelineViewportWScalingStateCreateInfoNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkSwapchainCounterCreateInfoEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPresentTimesInfoGOOGLE>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPipelineViewportSwizzleStateCreateInfoNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceDiscardRectanglePropertiesEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPipelineDiscardRectangleStateCreateInfoEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceConservativeRasterizationPropertiesEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPipelineRasterizationConservativeStateCreateInfoEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkDebugUtilsMessengerCreateInfoEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkAndroidHardwareBufferUsageANDROID>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkAndroidHardwareBufferFormatPropertiesANDROID>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkImportAndroidHardwareBufferInfoANDROID>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkExternalFormatANDROID>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkSamplerReductionModeCreateInfoEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceInlineUniformBlockFeaturesEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceInlineUniformBlockPropertiesEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkWriteDescriptorSetInlineUniformBlockEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkDescriptorPoolInlineUniformBlockCreateInfoEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkSampleLocationsInfoEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkRenderPassSampleLocationsBeginInfoEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPipelineSampleLocationsStateCreateInfoEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceSampleLocationsPropertiesEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPipelineColorBlendAdvancedStateCreateInfoEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPipelineCoverageToColorStateCreateInfoNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPipelineCoverageModulationStateCreateInfoNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkShaderModuleValidationCacheCreateInfoEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkDescriptorSetLayoutBindingFlagsCreateInfoEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceDescriptorIndexingFeaturesEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceDescriptorIndexingPropertiesEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkDescriptorSetVariableDescriptorCountAllocateInfoEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkDescriptorSetVariableDescriptorCountLayoutSupportEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPipelineViewportShadingRateImageStateCreateInfoNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceShadingRateImageFeaturesNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceShadingRateImagePropertiesNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_DESCRIPTOR_ACCELERATION_STRUCTURE_INFO_NVX:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkDescriptorAccelerationStructureInfoNVX>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAYTRACING_PROPERTIES_NVX:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceRaytracingPropertiesNVX>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPipelineRepresentativeFragmentTestStateCreateInfoNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkDeviceQueueGlobalPriorityCreateInfoEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkImportMemoryHostPointerInfoEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceExternalMemoryHostPropertiesEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceShaderCorePropertiesAMD>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPipelineVertexInputDivisorStateCreateInfoEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceMeshShaderFeaturesNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceMeshShaderPropertiesNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceShaderImageFootprintFeaturesNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPipelineViewportExclusiveScissorStateCreateInfoNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkPhysicalDeviceExclusiveScissorFeaturesNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV:
                (*pNext) = std::make_unique<PNextTypedNode<Decoded_VkQueueFamilyCheckpointPropertiesNV>>();
                bytes_read = (*pNext)->Decode(parameter_buffer, buffer_size);
                break;
            }
        }
    }

    if (bytes_read == 0)
    {
        // The buffer was too small, the encoded pointer attribute mask included kIsNull, or the sType was unrecognized.
        // We will report that we read the attribute mask and return a PNextNullNode.
        if (attrib != 0)
        {
            bytes_read = sizeof(attrib);
        }

        (*pNext) = std::make_unique<PNextNullNode>();
    }

    return bytes_read;
}

BRIMSTONE_END_NAMESPACE(decode)
BRIMSTONE_END_NAMESPACE(brimstone)
