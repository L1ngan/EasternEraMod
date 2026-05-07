---A material expression that Remap a value from one range to another, optionally
---applying a gamma correction in the middle, and optionally clamping output values.
---@class UMaterialExpressionMaterialXRange : UMaterialExpression
---@field public Input FExpressionInput
---@field public InputLow FExpressionInput @Low value for input range. Defaults to 'ConstInputLowDefault' if not specified
---@field public InputHigh FExpressionInput @High value for input range. Defaults to 'ConstInputHighDefault' if not specified
---@field public TargetLow FExpressionInput @Low value for target range. Defaults to 'ConstTargetLowDefault' if not specified
---@field public TargetHigh FExpressionInput @High value for target range. Defaults to 'ConstTargetHighDefault' if not specified
---@field public Gamma FExpressionInput @Inverse exponent applied to Input after first transforming from InputLow..InputHigh to 0..1, gamma values greater than 1.0 make midtones brighter. Defaults to 'ConstGamma' if not specified
---@field public Clamp FExpressionInput @If true, the output is clamped to the range TargetLow..TargetHigh. Defaults to 'ConstClamp' if not specified
---@field public ConstInputLow number
---@field public ConstInputHigh number
---@field public ConstTargetLow number
---@field public ConstTargetHigh number
---@field public ConstGamma number
---@field public bConstClamp boolean
local UMaterialExpressionMaterialXRange = {}

