---A component that handles rendering and collision for a single instance of a UPaperTileMap asset.
---This component is created when you drag a tile map asset from the content browser into a Blueprint, or
---contained inside of the actor created when you drag one into the level.
---NOTE: This is an beta preview class.  While not considered production-ready, it is a step beyond
---'experimental' and is being provided as a preview of things to come:
--- - We will try to provide forward-compatibility for content you create.
--- - The classes may change significantly in the future.
--- - The code is in an early state and may not meet the desired polish / quality bar.
--- - There is probably no documentation or example content yet.
--- - They will be promoted out of 'beta' when they are production ready.
---@class UPaperTileMapComponent : UMeshComponent
---@field private TileMapColor FLinearColor @The color of the tile map (multiplied with the per-layer color and passed to the material as a vertex color)
---@field private UseSingleLayerIndex integer @The index of the single layer to use if enabled
---@field private bUseSingleLayer boolean @Should we draw a single layer?
---@field public TileMap UPaperTileMap @The tile map used by this component
---@field public bShowPerTileGridWhenSelected boolean @Should this component show a tile grid when the component is selected?
---@field public bShowPerLayerGridWhenSelected boolean @Should this component show an outline around each layer when the component is selected?
---@field public bShowOutlineWhenUnselected boolean @Should this component show an outline around the first layer when the component is not selected?
---@field public bShowPerTileGridWhenUnselected boolean @Should this component show a tile grid when the component is not selected?
---@field public bShowPerLayerGridWhenUnselected boolean @Should this component show an outline around each layer when the component is not selected?
local UPaperTileMapComponent = {}

---Sets the tile map global color multiplier (multiplied with the per-layer color and passed to the material as a vertex color)
---@param NewColor FLinearColor
function UPaperTileMapComponent:SetTileMapColor(NewColor) end

---Change the PaperTileMap used by this instance.
---@param NewTileMap UPaperTileMap
---@return boolean
function UPaperTileMapComponent:SetTileMap(NewTileMap) end

---Modifies the contents of a specified tile cell (Note: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets)
---Note: Does not update collision by default, call RebuildCollision after all edits have been done in a frame if necessary
---@param X integer
---@param Y integer
---@param Layer integer
---@param NewValue FPaperTileInfo
function UPaperTileMapComponent:SetTile(X, Y, Layer, NewValue) end

---Sets the per-layer color multiplier for a specific layer (multiplied with the tile map color and passed to the material as a vertex color)
---Note: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets
---@param NewColor FLinearColor
---@param Layer integer @[opt] 
function UPaperTileMapComponent:SetLayerColor(NewColor, Layer) end

---Sets the collision thickness for a specific layer
---Note: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets
---@param Layer integer @[opt] 
---@param bHasCollision boolean @[opt] 
---@param bOverrideThickness boolean @[opt] 
---@param CustomThickness number @[opt] 
---@param bOverrideOffset boolean @[opt] 
---@param CustomOffset number @[opt] 
---@param bRebuildCollision boolean @[opt] 
function UPaperTileMapComponent:SetLayerCollision(Layer, bHasCollision, bOverrideThickness, CustomThickness, bOverrideOffset, CustomOffset, bRebuildCollision) end

---Sets the default thickness for any layers that don't override the collision thickness
---Note: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets
---@param Thickness number
---@param bRebuildCollision boolean @[opt] 
function UPaperTileMapComponent:SetDefaultCollisionThickness(Thickness, bRebuildCollision) end

---Resizes the tile map (Note: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets)
---@param NewWidthInTiles integer
---@param NewHeightInTiles integer
function UPaperTileMapComponent:ResizeMap(NewWidthInTiles, NewHeightInTiles) end

---Rebuilds collision for the tile map
function UPaperTileMapComponent:RebuildCollision() end

---Does this component own the tile map (is it instanced instead of being an asset reference)?
---@return boolean
function UPaperTileMapComponent:OwnsTileMap() end

---Makes the tile map asset pointed to by this component editable.  Nothing happens if it was already instanced, but
---if the tile map is an asset reference, it is cloned to make a unique instance.
function UPaperTileMapComponent:MakeTileMapEditable() end

---Returns the polygon for the specified tile (will be 4 or 6 vertices as a rectangle, diamond, or hexagon)
---@param TileX integer
---@param TileY integer
---@param Points TArray_FVector_ @[out] 
---@param LayerIndex integer @[opt] 
---@param bWorldSpace boolean @[opt] 
function UPaperTileMapComponent:GetTilePolygon(TileX, TileY, Points, LayerIndex, bWorldSpace) end

---Gets the tile map global color multiplier (multiplied with the per-layer color and passed to the material as a vertex color)
---@return FLinearColor
function UPaperTileMapComponent:GetTileMapColor() end

---Returns the position of the top left corner of the specified tile
---@param TileX integer
---@param TileY integer
---@param LayerIndex integer @[opt] 
---@param bWorldSpace boolean @[opt] 
---@return FVector
function UPaperTileMapComponent:GetTileCornerPosition(TileX, TileY, LayerIndex, bWorldSpace) end

---Returns the position of the center of the specified tile
---@param TileX integer
---@param TileY integer
---@param LayerIndex integer @[opt] 
---@param bWorldSpace boolean @[opt] 
---@return FVector
function UPaperTileMapComponent:GetTileCenterPosition(TileX, TileY, LayerIndex, bWorldSpace) end

---Returns the contents of a specified tile cell
---@param X integer
---@param Y integer
---@param Layer integer
---@return FPaperTileInfo
function UPaperTileMapComponent:GetTile(X, Y, Layer) end

---Returns the size of the tile map
---@param MapWidth integer @[out] 
---@param MapHeight integer @[out] 
---@param NumLayers integer @[out] 
function UPaperTileMapComponent:GetMapSize(MapWidth, MapHeight, NumLayers) end

---Gets the per-layer color multiplier for a specific layer (multiplied with the tile map color and passed to the material as a vertex color)
---@param Layer integer @[opt] 
---@return FLinearColor
function UPaperTileMapComponent:GetLayerColor(Layer) end

---Creates a new tile map of the specified size, replacing the TileMap reference (or dropping the previous owned one)
---@param MapWidth integer @[opt] 
---@param MapHeight integer @[opt] 
---@param TileWidth integer @[opt] 
---@param TileHeight integer @[opt] 
---@param PixelsPerUnrealUnit number @[opt] 
---@param bCreateLayer boolean @[opt] 
function UPaperTileMapComponent:CreateNewTileMap(MapWidth, MapHeight, TileWidth, TileHeight, PixelsPerUnrealUnit, bCreateLayer) end

---Creates and adds a new layer to the tile map
---Note: This will only work on components that own their own tile map (OwnsTileMap returns true), you cannot modify standalone tile map assets
---@return UPaperTileLayer
function UPaperTileMapComponent:AddNewLayer() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPaperTileMapComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UPaperTileMapComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPaperTileMapComponent:AddAssetUserDataOfClass(InUserDataClass) end

