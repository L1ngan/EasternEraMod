---@class UMaterialExpressionTextureSample : UMaterialExpressionTextureBase
---@field public Coordinates FExpressionInput @Defaults to 'ConstCoordinate' if not specified
---@field public TextureObject FExpressionInput @Defaults to 'Texture' if not specified
---@field public MipValue FExpressionInput @Defaults to 'AutomaticViewMipBias' if not specified
---@field public CoordinatesDX FExpressionInput @Coordinates derivative over the X axis
---@field public CoordinatesDY FExpressionInput @Coordinates derivative over the Y axis
---@field public AutomaticViewMipBiasValue FExpressionInput @Ignored if not specified
---@field public MipValueMode integer @Defines how the MipValue property is applied to the texture lookup
---@field public SamplerSource integer @Controls where the sampler for this texture lookup will come from. Choose 'from texture asset' to make use of the UTexture addressing settings, Otherwise use one of the global samplers, which will not consume a sampler slot. This allows materials to use more than 16 unique textures on SM5 platforms.
---@field public GatherMode integer @Whether to do a Gather of the given component from 4 neighboring texels (xyzw in counter clockwise order starting with the sample to the lower left). Only works with Texture2D or TextureCube.  Doesn't work with virtual textures.
---@field public AutomaticViewMipBias boolean @Whether the texture should be sampled with per view mip biasing for sharper output with Temporal AA.
---@field public ChannelNames FParameterChannelNames
---@field public ConstCoordinate integer @only used if Coordinates is not hooked up
---@field public ConstMipValue integer @only used if MipValue is not hooked up
local UMaterialExpressionTextureSample = {}

