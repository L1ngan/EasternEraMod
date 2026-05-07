---@class UMaterialExpressionLinearInterpolate : UMaterialExpression
---@field public A FExpressionInput @Defaults to 'ConstA' if not specified
---@field public B FExpressionInput @Defaults to 'ConstB' if not specified
---@field public Alpha FExpressionInput @Defaults to 'ConstAlpha' if not specified
---@field public ConstA number @only used if A is not hooked up
---@field public ConstB number @only used if B is not hooked up
---@field public ConstAlpha number @only used if Alpha is not hooked up
local UMaterialExpressionLinearInterpolate = {}

