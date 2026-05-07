---@class FHairInterpolationSettings
---@field public GuideType EGroomGuideType @Type of guides:  - Imported: use imported guides  - Generated: generate guides from strands  - Rigged: generated rigged guides from strands.
---@field public HairToGuideDensity number @Density factor for converting hair into guide curve if no guides are provided. The value should be between 0 and 1, and can be thought as a ratio/percentage of strands used as guides.
---@field public RiggedGuideNumCurves integer @Number of guides that will be generated on the groom and the skeletal mesh
---@field public RiggedGuideNumPoints integer @Number of points/bones per generated guide
---@field public InterpolationQuality EHairInterpolationQuality @Interpolation data quality.
---@field public InterpolationDistance EHairInterpolationWeight @Interpolation distance metric.
---@field public bRandomizeGuide boolean @Randomize which guides affect a given hair strand.
---@field public bUseUniqueGuide boolean @Force a hair strand to be affected by a unique guide.
local FHairInterpolationSettings = {}
