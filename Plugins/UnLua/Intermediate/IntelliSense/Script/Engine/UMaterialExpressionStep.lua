---@class UMaterialExpressionStep : UMaterialExpression
---@field public Y FExpressionInput @Defaults to 'ConstY' if not specified
---@field public X FExpressionInput @Defaults to 'ConstX' if not specified
---@field public ConstY number @only used if Y is not hooked up
---@field public ConstX number @only used if X is not hooked up
local UMaterialExpressionStep = {}

