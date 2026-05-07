---@class UMaterialExpressionOperator : UMaterialExpression
---@field public Operator EMaterialExpressionOperatorKind
---@field public A FExpressionInput @Defaults to 'ConstA' if not specified
---@field public B FExpressionInput @Defaults to 'ConstB' if not specified
---@field public C FExpressionInput @Defaults to 'ConstB' if not specified
---@field public ConstA number @only used if A is not hooked up
---@field public ConstB number @only used if B is not hooked up
---@field public ConstC number @only used if B is not hooked up
local UMaterialExpressionOperator = {}

