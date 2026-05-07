---@class FLayerBlendInput
---@field public LayerName string
---@field public BlendType integer
---@field public LayerInput FExpressionInput @Defaults to 'ConstLayerInput' if not specified
---@field public HeightInput FExpressionInput @Defaults to 'ConstHeightInput' if not specified
---@field public PreviewWeight number
---@field public ConstLayerInput FVector @only used if LayerInput is not hooked up
---@field public ConstHeightInput number @only used if HeightInput is not hooked up
local FLayerBlendInput = {}
