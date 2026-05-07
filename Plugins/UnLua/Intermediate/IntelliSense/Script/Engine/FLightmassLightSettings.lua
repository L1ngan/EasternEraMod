---Per-light settings for Lightmass
---@class FLightmassLightSettings
---@field public IndirectLightingSaturation number @0 will be completely desaturated, 1 will be unchanged
---@field public ShadowExponent number @Controls the falloff of shadow penumbras
---@field public bUseAreaShadowsForStationaryLight boolean @Whether to use area shadows for stationary light precomputed shadowmaps. Area shadows get softer the further they are from shadow casters, but require higher lightmap resolution to get the same quality where the shadow is sharp.
local FLightmassLightSettings = {}
