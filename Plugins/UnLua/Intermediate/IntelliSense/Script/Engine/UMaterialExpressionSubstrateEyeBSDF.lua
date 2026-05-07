---@class UMaterialExpressionSubstrateEyeBSDF : UMaterialExpressionSubstrateBSDF
---@field public DiffuseColor FExpressionInput @Hair fiber base color resulting from single and multiple scattering combined. (type = float3, unit = unitless, defaults to black)
---@field public Roughness FExpressionInput @Controls how rough the Material is. Roughness of 0 (smooth) is a mirror reflection and 1 (rough) is completely matte or diffuse (type = float, unit = unitless, defaults to 0.5)
---@field public CorneaNormal FExpressionInput @Normal of the sclera and cornea (type = float3, unit = unitless, defaults to +X vector)
---@field public IrisNormal FExpressionInput @Normal of the iris (type = float3, unit = unitless, defaults to +X vector)
---@field public IrisPlaneNormal FExpressionInput @Normal of the iris plane (type = float3, unit = unitless, defaults to +X vector)
---@field public IrisMask FExpressionInput @Mask defining the iris surface (type = float, unit = unitless, defaults to 0.0)
---@field public IrisDistance FExpressionInput @Distance from the center of the iris (type = float, unit = unitless, defaults to 0.0)
---@field public EmissiveColor FExpressionInput @Emissive color on top of the surface (type = float3, unit = luminance, defaults to 0.0)
---@field public SubsurfaceProfile USubsurfaceProfile @SubsurfaceProfile, for Subsurface Scattering diffusion.
local UMaterialExpressionSubstrateEyeBSDF = {}

