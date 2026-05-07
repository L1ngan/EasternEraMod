---@class UMaterialExpressionSubstrateUnlitBSDF : UMaterialExpressionSubstrateBSDF
---@field public EmissiveColor FExpressionInput @Emissive color on top of the surface (type = float3, unit = Luminance, default = 0)
---@field public TransmittanceColor FExpressionInput @The amount of transmitted light from the back side of the surface to the front side of the surface (type = float3, unit = unitless, defaults to 1)
---@field public Normal FExpressionInput @The surface normal. Only used for refraction effects when `IOR` or `pixel normal offset` modes are selected.
local UMaterialExpressionSubstrateUnlitBSDF = {}

