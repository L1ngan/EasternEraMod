---A material expression that rotates a vector2 value about the origin in 2D.
---@class UMaterialExpressionMaterialXRotate2D : UMaterialExpression
---@field public Input FExpressionInput
---@field public RotationAngle FExpressionInput @RotationAngle in degrees. Defaults to 'ConstRotationAngle' if not specified
---@field public ConstRotationAngle number @only used if RotationAngle is not hooked up
local UMaterialExpressionMaterialXRotate2D = {}

