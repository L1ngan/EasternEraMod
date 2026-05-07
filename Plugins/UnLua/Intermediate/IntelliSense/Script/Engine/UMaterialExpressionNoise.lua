---@class UMaterialExpressionNoise : UMaterialExpression
---@field public Position FExpressionInput @3 dimensional vector
---@field public WorldPositionOriginType EPositionOrigin @Defines the reference space for the Position input.
---@field public FilterWidth FExpressionInput @scalar, to clamp the Levels at pixel level, can be computed like this: max(length(ddx(Position)), length(ddy(Position))
---@field public Scale number @can also be done with a multiply on the Position
---@field public Quality integer @Lower numbers are faster and lower quality, higher numbers are slower and higher quality
---@field public NoiseFunction integer @Noise function, affects performance and look
---@field public bTurbulence boolean @How multiple frequencies are getting combined
---@field public Levels integer @1 = fast but little detail, .. larger numbers cost more performance
---@field public OutputMin number
---@field public OutputMax number
---@field public LevelScale number @usually 2 but higher values allow efficient use of few levels
---@field public bTiling boolean @Whether to use tiling noise pattern, useful for baking to seam-free repeating textures
---@field public RepeatSize integer @How many units in each tile (if Tiling is on)
local UMaterialExpressionNoise = {}

