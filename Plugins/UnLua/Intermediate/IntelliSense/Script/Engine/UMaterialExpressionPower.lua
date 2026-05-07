---@class UMaterialExpressionPower : UMaterialExpression
---@field public Base FExpressionInput
---@field public Exponent FExpressionInput @Defaults to 'ConstExponent' if not specified
---@field public ConstExponent number @only used if Exponent is not hooked up
local UMaterialExpressionPower = {}

