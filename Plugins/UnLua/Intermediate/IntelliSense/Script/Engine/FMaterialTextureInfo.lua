---This struct holds data about how a texture is sampled within a material.
---@class FMaterialTextureInfo
---@field public SamplingScale number @The scale used when sampling the texture
---@field public UVChannelIndex integer @The coordinate index used when sampling the texture
---@field public TextureName string @The texture name. Used for debugging and also to for quick matching of the entries.
---@field public TextureReference FSoftObjectPath @The reference to the texture, used to keep the TextureName valid even if it gets renamed.
---@field public TextureIndex integer @The texture index in the material resource the data was built from. This must be transient as it depends on which shader map was used for the build.
local FMaterialTextureInfo = {}
