---@class UMaterialExpressionSmoothStep : UMaterialExpression
---@field public Min FExpressionInput @Defaults to 'ConstMin' if not specified
---@field public Max FExpressionInput @Defaults to 'ConstMax' if not specified
---@field public Value FExpressionInput @Defaults to 'ConstValue' if not specified
---@field public ConstMin number @only used if Min is not hooked up
---@field public ConstMax number @only used if Max is not hooked up
---@field public ConstValue number @only used if Value is not hooked up
local UMaterialExpressionSmoothStep = {}

