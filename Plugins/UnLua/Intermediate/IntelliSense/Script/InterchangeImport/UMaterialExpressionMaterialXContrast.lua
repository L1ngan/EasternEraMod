---A material expression that increases or decreases contrast of a float/color value using a linear slope multiplier.
---@class UMaterialExpressionMaterialXContrast : UMaterialExpression
---@field public Input FExpressionInput
---@field public Amount FExpressionInput
---@field public Pivot FExpressionInput
---@field public ConstAmount number @only used if Amount is not hooked up
---@field public ConstPivot number @only used if Pivot is not hooked up
local UMaterialExpressionMaterialXContrast = {}

