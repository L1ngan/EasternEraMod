---A collection of utility methods for working with tile map components
---@class UTileMapBlueprintLibrary : UBlueprintFunctionLibrary
local UTileMapBlueprintLibrary = {}

---Creates a tile from the specified information
---@param TileIndex integer
---@param TileSet UPaperTileSet
---@param bFlipH boolean
---@param bFlipV boolean
---@param bFlipD boolean
---@return FPaperTileInfo
function UTileMapBlueprintLibrary.MakeTile(TileIndex, TileSet, bFlipH, bFlipV, bFlipD) end

---Returns the user data name for the specified tile, or NAME_None if there is no user-specified data
---@param Tile FPaperTileInfo
---@return string
function UTileMapBlueprintLibrary.GetTileUserData(Tile) end

---Returns the transform for a tile
---@param Tile FPaperTileInfo
---@return FTransform
function UTileMapBlueprintLibrary.GetTileTransform(Tile) end

---Breaks out the information for a tile
---@param Tile FPaperTileInfo
---@param TileIndex integer @[out] 
---@param TileSet UPaperTileSet @[out] 
---@param bFlipH boolean @[out] 
---@param bFlipV boolean @[out] 
---@param bFlipD boolean @[out] 
function UTileMapBlueprintLibrary.BreakTile(Tile, TileIndex, TileSet, bFlipH, bFlipV, bFlipD) end

