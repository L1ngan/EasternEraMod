---Blend nodes take two 1-4 channel inputs and apply the same operator to all channels.
---Blend nodes support an optional float input mix , which can be used
---to mix the original B value with the result of the blend operation.
---Operation: A + B
---Result: Lerp(B, A + B, Alpha)
---@class UMaterialExpressionMaterialXPlus : UMaterialExpression
---@field public A FExpressionInput
---@field public B FExpressionInput
---@field public Alpha FExpressionInput @Defaults to 'ConstAlpha' if not specified
---@field public ConstAlpha number @only used if Alpha is not hooked up
local UMaterialExpressionMaterialXPlus = {}

