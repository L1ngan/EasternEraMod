---@class UMaterialExpressionSubstrateHairBSDF : UMaterialExpressionSubstrateBSDF
---@field public BaseColor FExpressionInput @Hair fiber base color resulting from single and multiple scattering combined. (type = float3, unit = unitless, defaults to black)
---@field public Scatter FExpressionInput @Amount of light scattering, only available for non-HairStrand rendering (type = float, unit = unitless, defaults to 0.0)
---@field public Specular FExpressionInput @Specular (type = float, unit = unitless, defaults to 0.5)
---@field public Roughness FExpressionInput @Controls how rough the Material is. Roughness of 0 (smooth) is a mirror reflection and 1 (rough) is completely matte or diffuse (type = float, unit = unitless, defaults to 0.5)
---@field public Backlit FExpressionInput @How much light contributs when lighting hairs from the back side opposite from the view, only available for HairStrand rendering (type = float3, unit = unitless, defaults to 0.0)
---@field public Tangent FExpressionInput @Tangent (type = float3, unit = unitless, defaults to +X vector)
---@field public EmissiveColor FExpressionInput @Emissive color on top of the surface (type = float3, unit = luminance, defaults to 0.0)
local UMaterialExpressionSubstrateHairBSDF = {}

