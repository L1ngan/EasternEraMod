---Structure for 'parameterized' Lightmass settings
---@class FLightmassParameterizedMaterialSettings
---@field public CastShadowAsMasked FLightmassBooleanParameterValue @If true, forces translucency to cast static shadows as if the material were masked.
---@field public EmissiveBoost FLightmassScalarParameterValue @Scales the emissive contribution of this material to static lighting.
---@field public DiffuseBoost FLightmassScalarParameterValue @Scales the diffuse contribution of this material to static lighting.
---@field public ExportResolutionScale FLightmassScalarParameterValue @Scales the resolution that this material's attributes were exported at. This is useful for increasing material resolution when details are needed.
local FLightmassParameterizedMaterialSettings = {}
