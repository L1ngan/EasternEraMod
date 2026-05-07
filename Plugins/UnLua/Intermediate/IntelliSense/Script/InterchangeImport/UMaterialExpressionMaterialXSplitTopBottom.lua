---A material expression that computes a top-bottom split matte, split at a specified v value.
---@class UMaterialExpressionMaterialXSplitTopBottom : UMaterialExpression
---@field public Coordinates FExpressionInput @Defaults to 'ConstCoordinate' if not specified
---@field public A FExpressionInput
---@field public B FExpressionInput
---@field public Center FExpressionInput @Defaults to 'ConstCenter' if not specified
---@field public ConstCenter number @only used if A is not hooked up
---@field public ConstCoordinate integer @only used if Coordinates is not hooked up
local UMaterialExpressionMaterialXSplitTopBottom = {}

