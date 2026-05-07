---@class UMaterialExpressionMaterialXTextureSampleParameterBlur : UMaterialExpressionTextureSampleParameter2D
---@field public KernelSize EMAterialXTextureSampleBlurKernel @The size of the blur kernel, relative to 0-1 UV space.
---@field public FilterSize number @Size of the filter when we sample a texture coordinate
---@field public FilterOffset number @Offset of the filter when we sample a texture coordinate
---@field public Filter EMaterialXTextureSampleBlurFilter @Filter to use when we blur a Texture: Gaussian or Box Linear filter
local UMaterialExpressionMaterialXTextureSampleParameterBlur = {}

