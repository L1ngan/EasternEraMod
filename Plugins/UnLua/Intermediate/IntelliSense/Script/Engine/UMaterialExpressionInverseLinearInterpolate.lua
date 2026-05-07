---@class UMaterialExpressionInverseLinearInterpolate : UMaterialExpression
---@field public A FExpressionInput @Defaults to 'ConstA' if not specified
---@field public B FExpressionInput @Defaults to 'ConstB' if not specified
---@field public Value FExpressionInput @Defaults to 'ConstValue' if not specified
---@field public ConstA number @only used if A is not hooked up
---@field public ConstB number @only used if B is not hooked up
---@field public ConstValue number @only used if Value is not hooked up
---@field public bClampResult boolean @Clamp the result to 0 to 1
local UMaterialExpressionInverseLinearInterpolate = {}

