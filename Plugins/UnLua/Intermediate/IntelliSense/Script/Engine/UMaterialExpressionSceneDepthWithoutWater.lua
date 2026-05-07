---@class UMaterialExpressionSceneDepthWithoutWater : UMaterialExpression
---@field public InputMode integer @Coordinates - UV coordinates to apply to the scene depth lookup. OffsetFraction - An offset to apply to the scene depth lookup in a 2d fraction of the screen.
---@field public Input FExpressionInput @Defaults to 'ConstInput' if not specified
---@field public ConstInput FVector2D @only used if Input is not hooked up
---@field public FallbackDepth number @Depth to fall back to in case the needed texture isn't available on a particular platform or configuration
local UMaterialExpressionSceneDepthWithoutWater = {}

