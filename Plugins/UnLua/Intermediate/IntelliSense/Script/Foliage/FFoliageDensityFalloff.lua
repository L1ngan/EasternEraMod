---@class FFoliageDensityFalloff
---@field public bUseFalloffCurve boolean
---@field public FalloffCurve FRuntimeFloatCurve @Density as a function of normalized distance (i.e. distance from Procedural Foliage Volume / Max Volume Extent). X = 0 corresponds to Normalized distance = 0, X = 1 corresponds to Normalized distance = Max distance. Y = 0 corresponds to 0% probability of keeping instance, Y = 1 corresponds to 100% probability of keeping instance.
local FFoliageDensityFalloff = {}
