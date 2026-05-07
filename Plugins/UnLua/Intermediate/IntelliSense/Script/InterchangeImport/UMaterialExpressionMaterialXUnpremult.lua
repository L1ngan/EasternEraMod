---Divide the RGB channels of the input by the Alpha channel of the input. If the
---Alpha value is zero, the original color4 input value is passed through unchanged.
---Input must be of type float4
---@class UMaterialExpressionMaterialXUnpremult : UMaterialExpression
---@field public Input FExpressionInput
local UMaterialExpressionMaterialXUnpremult = {}

