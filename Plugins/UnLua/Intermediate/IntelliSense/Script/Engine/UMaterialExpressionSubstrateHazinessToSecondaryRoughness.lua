---@class UMaterialExpressionSubstrateHazinessToSecondaryRoughness : UMaterialExpressionSubstrateUtilityBase
---@field public BaseRoughness FExpressionInput @The base roughness of the surface. It represented the smoothest part of the reflection.
---@field public Haziness FExpressionInput @Haziness represent the amount of irregularity of the surface. A high value will lead to a second rough specular lobe causing the surface too look `milky`.
local UMaterialExpressionSubstrateHazinessToSecondaryRoughness = {}

