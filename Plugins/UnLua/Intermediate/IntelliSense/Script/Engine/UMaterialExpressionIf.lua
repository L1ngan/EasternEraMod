---@class UMaterialExpressionIf : UMaterialExpression
---@field public A FExpressionInput
---@field public B FExpressionInput @Defaults to 'ConstB' if not specified
---@field public AGreaterThanB FExpressionInput
---@field public AEqualsB FExpressionInput @Defaults to 'A > B' if not specified
---@field public ALessThanB FExpressionInput
---@field public EqualsThreshold number
---@field public ConstB number @only used if B is not hooked up
local UMaterialExpressionIf = {}

