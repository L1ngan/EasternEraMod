---@class UMaterialExpressionSubstrateVolumetricFogCloudBSDF : UMaterialExpressionSubstrateBSDF
---@field public Albedo FExpressionInput @The single scattering Albedo defining the overall color of the Material (type = float3, unit = unitless, default = 0)
---@field public Extinction FExpressionInput @The rate at which light is absorbed or scattered by the medium. Mean Free Path = 1 / Extinction. (type = float3, unit = 1/m, default = 0)
---@field public EmissiveColor FExpressionInput @Emissive color of the medium (type = float3, unit = luminance, default = 0)
---@field public AmbientOcclusion FExpressionInput @Ambient occlusion: 1 means no occlusion while 0 means fully occluded. (type = float, unit = unitless, default = 1)
---@field public bEmissiveOnly boolean @Enabling this corresponds to selecting the Unlit shading model from the legacy material system. In this case, only the Emissive input will be considered.
local UMaterialExpressionSubstrateVolumetricFogCloudBSDF = {}

