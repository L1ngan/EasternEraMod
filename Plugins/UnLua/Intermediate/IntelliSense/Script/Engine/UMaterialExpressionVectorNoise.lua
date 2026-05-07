---@class UMaterialExpressionVectorNoise : UMaterialExpression
---@field public Position FExpressionInput @3 dimensional vector
---@field public WorldPositionOriginType EPositionOrigin @Defines the reference space for the Position input.
---@field public NoiseFunction integer @Noise function, affects performance and look
---@field public Quality integer @For noise functions where applicable, lower numbers are faster and lower quality, higher numbers are slower and higher quality
---@field public bTiling boolean @Whether tile the noise pattern, useful for baking to seam-free repeating textures
---@field public TileSize integer @How many units in each tile (if Tiling is on) For Perlin noise functions, Tile Size must be a multiple of three
local UMaterialExpressionVectorNoise = {}

