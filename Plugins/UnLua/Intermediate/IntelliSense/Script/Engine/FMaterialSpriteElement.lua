---@class FMaterialSpriteElement
---@field public Material UMaterialInterface @The material that the sprite is rendered with.
---@field public DistanceToOpacityCurve UCurveFloat @A curve that maps distance on the X axis to the sprite opacity on the Y axis.
---@field public bSizeIsInScreenSpace boolean @Whether the size is defined in screen-space or world-space.
---@field public BaseSizeX number @The base width of the sprite, multiplied with the DistanceToSizeCurve.
---@field public BaseSizeY number @The base height of the sprite, multiplied with the DistanceToSizeCurve.
---@field public DistanceToSizeCurve UCurveFloat @A curve that maps distance on the X axis to the sprite size on the Y axis.
local FMaterialSpriteElement = {}
