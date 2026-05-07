---The remaining fraction after dividing an incoming input by a value and subtracting the integer portion.
---Unlike UE FMod or Modulo expressions, Mod always returns a non-negative result, matching the interpretation of the GLSL and OSL mod() function (not fmod()).
---This is computed as x - y * floor(x/y).
---@class UMaterialExpressionMaterialXMod : UMaterialExpression
---@field public A FExpressionInput
---@field public B FExpressionInput @Defaults to 'ConstB' if not specified
---@field public ConstB number @only used if B is not hooked up
local UMaterialExpressionMaterialXMod = {}

