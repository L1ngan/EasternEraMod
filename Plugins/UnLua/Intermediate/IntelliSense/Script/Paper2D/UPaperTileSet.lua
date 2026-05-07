---A tile set is a collection of tiles pulled from a texture that can be used to fill out a tile map.
---@class UPaperTileSet : UObject
---@field private TileSize FIntPoint @The width and height of a single tile (in pixels)
---@field private TileSheet UTexture2D @The tile sheet texture associated with this tile set
---@field private AdditionalSourceTextures TArray<UTexture> @Additional source textures for other slots
---@field private BorderMargin FIntMargin @The amount of padding around the border of the tile sheet (in pixels)
---@field private PerTileSpacing FIntPoint @The amount of padding between tiles in the tile sheet (in pixels)
---@field private DrawingOffset FIntPoint @The drawing offset for tiles from this set (in pixels)
---@field private BackgroundColor FLinearColor @The background color displayed in the tile set viewer
---@field private WidthInTiles integer @Cached width of this tile set (in tiles)
---@field private HeightInTiles integer @Cached height of this tile set (in tiles)
---@field private AllocatedWidth integer @Allocated width of the per-tile data
---@field private AllocatedHeight integer @Allocated height of the per-tile data
---@field private PerTileData TArray<FPaperTileMetadata> @Per-tile information
---@field private Terrains TArray<FPaperTileSetTerrain> @Terrain information
local UPaperTileSet = {}

