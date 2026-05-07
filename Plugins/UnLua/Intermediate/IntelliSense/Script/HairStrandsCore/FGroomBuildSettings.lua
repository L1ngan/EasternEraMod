---@class FGroomBuildSettings
---@field public bOverrideGuides boolean @If checked, override imported guides with generated ones.
---@field public HairToGuideDensity number @Density factor for converting hair into guide curve if no guides are provided.
---@field public InterpolationQuality EGroomInterpolationQuality @Interpolation data quality.
---@field public InterpolationDistance EGroomInterpolationWeight @Interpolation distance metric.
---@field public bRandomizeGuide boolean @Randomize which guides affect a given hair strand.
---@field public bUseUniqueGuide boolean @Force a hair strand to be affected by a unique guide.
local FGroomBuildSettings = {}
