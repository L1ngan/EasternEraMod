---Factory used to pad out each individual tile in a tile sheet texture
---@class UTileSheetPaddingFactory : UFactory
---@field public SourceTileSet UPaperTileSet @Source tile sheet texture
---@field public ExtrusionAmount integer @The amount to extrude out from each tile (in pixels)
---@field public bPadToPowerOf2 boolean @Should we pad the texture to the next power of 2?
---@field public bFillWithTransparentBlack boolean @Should we use transparent black or white when filling the texture areas that aren't covered by tiles?
local UTileSheetPaddingFactory = {}

