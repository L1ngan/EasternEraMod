---@class UMaterialExpressionSubstrateConvertMaterialAttributes : UMaterialExpressionSubstrateBSDF
---@field public MaterialAttributes FMaterialAttributesInput
---@field public WaterScatteringCoefficients FExpressionInput @The single scattering Albedo defining the overall color of the Material (type = float3, unit = unitless, default = 0)
---@field public WaterAbsorptionCoefficients FExpressionInput @The rate at which light is absorbed or out-scattered by the medium. Mean Free Path = 1 / Extinction. (type = float3, unit = 1/cm, default = 0)
---@field public WaterPhaseG FExpressionInput @Anisotropy of the volume with values lower than 0 representing back-scattering, equal 0 representing isotropic scattering and greater than 0 representing forward scattering. (type = float, unit = unitless, defaults to 0)
---@field public ColorScaleBehindWater FExpressionInput @A scale to apply on the scene color behind the water surface. It can be used to approximate caustics for instance. (type = float3, unit = unitless, defaults to 1)
---@field public SubsurfaceProfile USubsurfaceProfile @SubsurfaceProfile, for Screen Space Subsurface Scattering. The profile needs to be set up on both the Substrate diffuse node, and the material node at the moment.
---@field public ShadingModelOverride integer
local UMaterialExpressionSubstrateConvertMaterialAttributes = {}

