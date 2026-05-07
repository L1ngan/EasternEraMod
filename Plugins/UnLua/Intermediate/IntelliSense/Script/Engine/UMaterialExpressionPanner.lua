---@class UMaterialExpressionPanner : UMaterialExpression
---@field public Coordinate FExpressionInput @Defaults to 'ConstCoordinate' if not specified
---@field public Time FExpressionInput @Defaults to Game Time if not specified
---@field public Speed FExpressionInput @Vector2 speed scale, if specified
---@field public SpeedX number
---@field public SpeedY number
---@field public ConstCoordinate integer @only used if Coordinate is not hooked up
---@field public bFractionalPart boolean @Output only the fractional part of the pan calculation for greater precision. Output is greater than or equal to 0 and less than 1.
local UMaterialExpressionPanner = {}

