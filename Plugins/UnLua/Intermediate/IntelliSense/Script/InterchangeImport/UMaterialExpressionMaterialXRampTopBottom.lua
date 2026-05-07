---A material expression that computes a top-to-bottom bilinear value ramp.
---@class UMaterialExpressionMaterialXRampTopBottom : UMaterialExpression
---@field public Coordinates FExpressionInput @Defaults to 'ConstCoordinate' if not specified
---@field public A FExpressionInput
---@field public B FExpressionInput
---@field public ConstCoordinate integer @only used if Coordinates is not hooked up
local UMaterialExpressionMaterialXRampTopBottom = {}

