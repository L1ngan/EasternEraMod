---UWorldTileDetails
---Helper class to hold world tile information
---Holding this information in UObject gives us ability to use property editors and support undo operations
---@class UWorldTileDetails : UObject
---@field public bTileEditable boolean @Whether this tile properties can be edited via details panel
---@field public PackageName string @Tile long package name (readonly)
---@field public ParentPackageName string @Parent tile long package name
---@field public Position FIntVector @Tile position in the world, relative to parent
---@field public AbsolutePosition FIntVector @Tile absolute position in the world (readonly)
---@field public ZOrder integer @Tile sorting order
---@field public bHideInTileView boolean @Whether to hide tile in the world composition tile view
---@field public NumLOD integer @LOD entries number
---@field public LOD1 FTileLODEntryDetails
---@field public LOD2 FTileLODEntryDetails
---@field public LOD3 FTileLODEntryDetails
---@field public LOD4 FTileLODEntryDetails
local UWorldTileDetails = {}

