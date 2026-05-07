---@class UBakeCurvatureMapToolProperties : UInteractiveToolPropertySet
---@field public CurvatureType EBakeCurvatureTypeMode @Type of curvature
---@field public ColorMapping EBakeCurvatureColorMode @How to map calculated curvature values to colors
---@field public ColorRangeMultiplier number @Multiplier for how the curvature values fill the available range in the selected Color Mapping; a larger value means that higher curvature is required to achieve the maximum color value.
---@field public MinRangeMultiplier number @Minimum for the curvature values to not be clamped to zero relative to the curvature for the maximum color value; a larger value means that higher curvature is required to not be considered as no curvature.
---@field public Clamping EBakeCurvatureClampMode @Clamping applied to curvature values before color mapping
local UBakeCurvatureMapToolProperties = {}

