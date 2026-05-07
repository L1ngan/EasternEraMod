---Paper Terrain Material
---'Material' setup for a 2D terrain spline (stores references to sprites that will be instanced along the spline path, not actually related to UMaterialInterface).
---@class UPaperTerrainMaterial : UDataAsset
---@field public Rules TArray<FPaperTerrainMaterialRule>
---@field public InteriorFill UPaperSprite @The sprite to use for an interior region fill
local UPaperTerrainMaterial = {}

