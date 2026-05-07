---@class FMaterialStatistics
---@field public NumVertexShaderInstructions integer @Number of instructions used by most expensive vertex shader in the material
---@field public NumPixelShaderInstructions integer @Number of instructions used by most expensive pixel shader in the material
---@field public NumSamplers integer @Number of samplers required by the material
---@field public NumVertexTextureSamples integer @Number of textures sampled by the vertex shader
---@field public NumPixelTextureSamples integer @Number of textures sampled by the pixel shader
---@field public NumVirtualTextureSamples integer @Number of virtual textures sampled
---@field public NumUVScalars integer @Number of interpolator scalars required for UVs
---@field public NumInterpolatorScalars integer @Number of interpolator scalars required for user-defined interpolators
local FMaterialStatistics = {}
