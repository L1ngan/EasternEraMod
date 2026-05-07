---A material expression that Remap a value from one range to another.
---@class UMaterialExpressionMaterialXRemap : UMaterialExpression
---@field public Input FExpressionInput
---@field public InputLow FExpressionInput @Defaults to 'MinDefault1' if not specified
---@field public InputHigh FExpressionInput @Defaults to 'MaxDefault1' if not specified
---@field public TargetLow FExpressionInput @Defaults to 'MinDefault2' if not specified
---@field public TargetHigh FExpressionInput @Defaults to 'MaxDefault1' if not specified
---@field public InputLowDefault number
---@field public InputHighDefault number
---@field public TargetLowDefault number
---@field public TargetHighDefault number
local UMaterialExpressionMaterialXRemap = {}

