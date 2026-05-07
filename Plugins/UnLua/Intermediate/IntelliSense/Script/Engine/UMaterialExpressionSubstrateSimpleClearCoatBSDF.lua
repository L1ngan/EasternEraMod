---@class UMaterialExpressionSubstrateSimpleClearCoatBSDF : UMaterialExpressionSubstrateBSDF
---@field public DiffuseAlbedo FExpressionInput @Defines the diffused albedo, the percentage of light reflected as diffuse from the surface. (type = float3, unit = unitless, defaults to 0.18)
---@field public F0 FExpressionInput @Defines the color and brightness of the specular highlight where the surface is facing the camera. Each specular contribution will fade to black as F0 drops below 0.02. (type = float3, unit = unitless, defaults to plastic 0.04)
---@field public Roughness FExpressionInput @Controls how rough the bottom layer of the material is. Roughness of 0 (smooth) is a mirror reflection and 1 (rough) is completely matte or diffuse. (type = float, unit = unitless, defaults to 0.5)
---@field public ClearCoatCoverage FExpressionInput @Controls the coverage of the clear coat layer: 0 means no clear coat, 1 means coat is fully visible. (type = float, unit = unitless, defaults to 0.5)
---@field public ClearCoatRoughness FExpressionInput @Controls how rough the top layer of the material is. Roughness of 0 (smooth) is a mirror reflection and 1 (rough) is completely matte or diffuse. (type = float, unit = unitless, defaults to 0.5)
---@field public Normal FExpressionInput @Take the surface normal as input. The normal is considered tangent or world space according to the space properties on the main material node. (type = float3, unit = unitless, defaults to vertex normal)
---@field public EmissiveColor FExpressionInput @Emissive color of the medium (type = float3, unit = luminance, default = 0)
---@field public BottomNormal FExpressionInput @The bottom layer normal. Only used when r.ClearCoatNormal is 1. The normal is considered tangent or world space according to the space properties on the main material node. (type = float3, unit = unitless, defaults to vertex normal)
local UMaterialExpressionSubstrateSimpleClearCoatBSDF = {}

