---@class UMaterialExpressionBumpOffset : UMaterialExpression
---@field public Coordinate FExpressionInput @Defaults to 'ConstCoordinate' if not specified
---@field public Height FExpressionInput
---@field public HeightRatioInput FExpressionInput
---@field public HeightRatio number
---@field public ReferencePlane number @Perceived height as a fraction of width.
---@field public ConstCoordinate integer @only used if Coordinate is not hooked up
local UMaterialExpressionBumpOffset = {}

