---@class UMaterialExpressionLandscapeLayerWeight : UMaterialExpression
---@field public Base FExpressionInput @Defaults to 'ConstBase' if not specified
---@field public Layer FExpressionInput @Ignored if not specified
---@field public ParameterName string
---@field public PreviewWeight number
---@field public ConstBase FVector @only used if Base is not hooked up
local UMaterialExpressionLandscapeLayerWeight = {}

