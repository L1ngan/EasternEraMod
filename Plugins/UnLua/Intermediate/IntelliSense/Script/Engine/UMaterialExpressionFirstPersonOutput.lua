---Material output expression for writing first person rendering properties.
---@class UMaterialExpressionFirstPersonOutput : UMaterialExpressionCustomOutput
---@field public FirstPersonInterpolationAlpha FExpressionInput @Interpolates between world space and first person space. Valid range is [0, 1], from world space to first person space. Defaults to 'ConstFirstPersonInterpolationAlpha' if not specified.
---@field public ConstFirstPersonInterpolationAlpha number @Only used if FirstPersonInterpolationAlpha is not hooked up. Interpolates between world space and first person space. Valid range is [0, 1], from world space to first person space.
local UMaterialExpressionFirstPersonOutput = {}

