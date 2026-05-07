---@class UMaterialExpressionFresnel : UMaterialExpression
---@field public ExponentIn FExpressionInput @Defaults to 'Exponent' if not specified
---@field public Exponent number @The exponent to pass into the pow() function
---@field public BaseReflectFractionIn FExpressionInput @Defaults to 'BaseReflectFraction' if not specified
---@field public BaseReflectFraction number @Specifies the fraction of specular reflection when the surfaces is viewed from straight on. A value of 1 effectively disables Fresnel.
---@field public Normal FExpressionInput @Defaults to Pixel World Normal if not specified
local UMaterialExpressionFresnel = {}

