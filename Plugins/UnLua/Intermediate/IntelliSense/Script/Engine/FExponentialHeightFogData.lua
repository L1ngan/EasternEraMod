---Data for an individual fog line integral.
---This is the data which is not shared between fogs when multiple fogs are set up on a single UExponentialHeightFogComponent
---@class FExponentialHeightFogData
---@field public FogDensity number @Global density factor for this fog.
---@field public FogHeightFalloff number @Height density factor, controls how the density increases as height decreases. Smaller values make the visible transition larger.
---@field public FogHeightOffset number @Height offset, relative to the actor position Z.
local FExponentialHeightFogData = {}
