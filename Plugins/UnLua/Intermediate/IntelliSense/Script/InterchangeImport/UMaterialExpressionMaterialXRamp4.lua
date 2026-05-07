---A material expression that computes a 4-corner bilinear value ramp..
---@class UMaterialExpressionMaterialXRamp4 : UMaterialExpression
---@field public Coordinates FExpressionInput @Defaults to 'ConstCoordinate' if not specified
---@field public A FExpressionInput @The value at the top-left (U0V1) corner
---@field public B FExpressionInput @The value at the top-right (U1V1) corner
---@field public C FExpressionInput @The value at the bottom-left (U0V0) corner
---@field public D FExpressionInput @The value at the bottom-right (U1V0) corner
---@field public ConstCoordinate integer @only used if Coordinates is not hooked up
local UMaterialExpressionMaterialXRamp4 = {}

