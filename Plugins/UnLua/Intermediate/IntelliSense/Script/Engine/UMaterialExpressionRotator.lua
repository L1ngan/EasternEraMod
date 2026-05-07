---@class UMaterialExpressionRotator : UMaterialExpression
---@field public Coordinate FExpressionInput @Defaults to 'ConstCoordinate' if not specified
---@field public Time FExpressionInput @Defaults to Game Time if not specified
---@field public CenterX number
---@field public CenterY number
---@field public Speed number
---@field public ConstCoordinate integer @only used if Coordinate is not hooked up
local UMaterialExpressionRotator = {}

