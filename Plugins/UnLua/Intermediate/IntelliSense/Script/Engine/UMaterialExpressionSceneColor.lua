---@class UMaterialExpressionSceneColor : UMaterialExpression
---@field public InputMode integer @Coordinates - UV coordinates to apply to the scene color lookup. OffsetFraction -      An offset to apply to the scene color lookup in a 2d fraction of the screen.
---@field public Input FExpressionInput @Defaults to 'ConstInput' if not specified
---@field public ConstInput FVector2D @only used if Input is not hooked up
local UMaterialExpressionSceneColor = {}

