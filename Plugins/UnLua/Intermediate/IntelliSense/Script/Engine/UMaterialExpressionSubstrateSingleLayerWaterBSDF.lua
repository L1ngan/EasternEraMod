---@class UMaterialExpressionSubstrateSingleLayerWaterBSDF : UMaterialExpressionSubstrateBSDF
---@field public BaseColor FExpressionInput @Surface base color. (type = float3, unit = unitless, defaults to black)
---@field public Metallic FExpressionInput @Whether the surface represents a dielectric (such as plastic) or a conductor (such as metal). (type = float, unit = unitless, defaults to 0 = dielectric)
---@field public Specular FExpressionInput @Specular amount (type = float, unit = unitless, defaults to 0.5)
---@field public Roughness FExpressionInput @Controls how rough the Material is. Roughness of 0 (smooth) is a mirror reflection and 1 (rough) is completely matte or diffuse (type = float, unit = unitless, defaults to 0.5)
---@field public Normal FExpressionInput @The normal of the surface (type = float3, unit = unitless, defaults to +Z vector)
---@field public EmissiveColor FExpressionInput @Emissive color on top of the surface (type = float3, unit = luminance, defaults to 0.0)
---@field public TopMaterialOpacity FExpressionInput @Opacity of the material layered on top of the water (type = float3, unit = unitless, defaults to 0.0)
---@field public WaterAlbedo FExpressionInput @The single scattering Albedo defining the overall color of the Material (type = float3, unit = unitless, default = 0)
---@field public WaterExtinction FExpressionInput @The rate at which light is absorbed or out-scattered by the medium. Mean Free Path = 1 / Extinction. (type = float3, unit = 1/cm, default = 0)
---@field public WaterPhaseG FExpressionInput @Anisotropy of the volume with values lower than 0 representing back-scattering, equal 0 representing isotropic scattering and greater than 0 representing forward scattering. (type = float, unit = unitless, defaults to 0)
---@field public ColorScaleBehindWater FExpressionInput @A scale to apply on the scene color behind the water surface. It can be used to approximate caustics for instance. (type = float3, unit = unitless, defaults to 1)
local UMaterialExpressionSubstrateSingleLayerWaterBSDF = {}

