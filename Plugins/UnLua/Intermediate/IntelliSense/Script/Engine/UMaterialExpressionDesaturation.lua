---@class UMaterialExpressionDesaturation : UMaterialExpression
---@field public Input FExpressionInput @Outputs: Lerp(Input,dot(Input,LuminanceFactors)),Fraction)
---@field public Fraction FExpressionInput
---@field public LuminanceFactors FLinearColor @* Luminance factors for converting a color to greyscale. * * The default luminance factors values are now derived from the working color space. For uses cases * outside scene rendering, users are responsible for updating these factors accordingly. For example, * factors derived from an AP1 working color space would not be applicable to UI domain materials that * remain in sRGB/Rec.709 and thus should instead use approximately [0.2126, 0.7152, 0.0722].
local UMaterialExpressionDesaturation = {}

