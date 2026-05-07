---A material expression that computes a left-right split matte, split at a specified u value.
---@class UMaterialExpressionMaterialXSplitLeftRight : UMaterialExpression
---@field public Coordinates FExpressionInput @Defaults to 'ConstCoordinate' if not specified
---@field public A FExpressionInput
---@field public B FExpressionInput
---@field public Center FExpressionInput @Defaults to 'ConstCenter' if not specified
---@field public ConstCenter number @only used if A is not hooked up
---@field public ConstCoordinate integer @only used if Coordinates is not hooked up
local UMaterialExpressionMaterialXSplitLeftRight = {}

