---@class UMaterialExpressionDepthFade : UMaterialExpression
---@field public InOpacity FExpressionInput @Defaults to 'OpacityDefault' if not specified
---@field public FadeDistance FExpressionInput @Defaults to 'FadeDistanceDefault' if not specified
---@field public OpacityDefault number @Opacity which will be scaled by the result of the fade.  This is used when InOpacity is unconnected.
---@field public FadeDistanceDefault number @World space distance over which the fade should take place.  This is used when FadeDistance is unconnected.
local UMaterialExpressionDepthFade = {}

