---@class UMaterialExpressionClamp : UMaterialExpression
---@field public Input FExpressionInput
---@field public Min FExpressionInput @Defaults to 'MinDefault' if not specified
---@field public Max FExpressionInput @Defaults to 'MaxDefault' if not specified
---@field public ClampMode integer
---@field public MinDefault number
---@field public MaxDefault number
local UMaterialExpressionClamp = {}

