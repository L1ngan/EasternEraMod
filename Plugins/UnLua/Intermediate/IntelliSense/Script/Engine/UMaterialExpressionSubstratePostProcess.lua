---@class UMaterialExpressionSubstratePostProcess : UMaterialExpressionSubstrateBSDF
---@field public Color FExpressionInput @The output color of the post process: it represents a color added over the back buffer, or a color multiplied if the Substrate blend mode is TransmittanceOnly.
---@field public Opacity FExpressionInput @The coverage of the post process: the more the value is high, the less the back buffer will be visible. Only used if "Output Alpha" is enabled on the root node.
local UMaterialExpressionSubstratePostProcess = {}

