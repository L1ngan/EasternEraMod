---SubUV animation asset, which caches bounding geometry for regions in the SubUVTexture with non-zero opacity.
---Particle emitters with a SubUV module which use this asset leverage the optimal bounding geometry to reduce overdraw.
---@class USubUVAnimation : UObject
---@field public SubUVTexture UTexture2D @Texture to generate bounding geometry from.
---@field public SubImages_Horizontal integer @The number of sub-images horizontally in the texture
---@field public SubImages_Vertical integer @The number of sub-images vertically in the texture
---@field public BoundingMode integer @More bounding vertices results in reduced overdraw, but adds more triangle overhead. The eight vertex mode is best used when the SubUV texture has a lot of space to cut out that is not captured by the four vertex version, and when the particles using the texture will be few and large.
---@field public OpacitySourceMode integer
---@field public AlphaThreshold number @Alpha channel values larger than the threshold are considered occupied and will be contained in the bounding geometry. Raising this threshold slightly can reduce overdraw in particles using this animation asset.
local USubUVAnimation = {}

