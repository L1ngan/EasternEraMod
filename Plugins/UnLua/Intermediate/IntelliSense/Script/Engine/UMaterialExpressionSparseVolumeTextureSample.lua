---Material expression for sampling from a runtime virtual texture.
---@class UMaterialExpressionSparseVolumeTextureSample : UMaterialExpressionSparseVolumeTextureBase
---@field public Coordinates FExpressionInput @3D texture coordinate used to sample the sparse volume texture.
---@field public TextureObject FExpressionInput @Defaults to 'SparseVolumeTexture' if not specified
---@field public MipValue FExpressionInput @Defaults to 0 if not specified
---@field public CoordinatesDX FExpressionInput @Coordinates derivative over the X axis
---@field public CoordinatesDY FExpressionInput @Coordinates derivative over the Y axis
---@field public MipValueMode integer @Defines how the MipValue property is applied to the texture lookup
---@field public SamplerSource integer @Controls where the sampler for this texture lookup will come from. Choose 'from texture asset' to make use of the USparseVolumeTexture addressing settings, Otherwise use one of the global samplers, which will not consume a sampler slot. This allows materials to use more than 16 unique textures on SM5 platforms.
---@field public ConstMipValue integer @Only used if MipValue is not hooked up
local UMaterialExpressionSparseVolumeTextureSample = {}

