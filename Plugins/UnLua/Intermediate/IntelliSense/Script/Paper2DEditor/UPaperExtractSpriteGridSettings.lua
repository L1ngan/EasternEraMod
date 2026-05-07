---@class UPaperExtractSpriteGridSettings : UObject
---@field public CellWidth integer @The width of each sprite in grid mode
---@field public CellHeight integer @The height of each sprite in grid mode
---@field public NumCellsX integer @Number of cells extracted horizontally. Can be used to limit the number of sprites extracted. Set to 0 to extract all sprites
---@field public NumCellsY integer @Number of cells extracted vertically. Can be used to limit the number of sprites extracted. Set to 0 to extract all sprites
---@field public MarginX integer @Margin from the left of the texture to the first sprite
---@field public MarginY integer @Margin from the top of the texture to the first sprite
---@field public SpacingX integer @Horizontal spacing between sprites
---@field public SpacingY integer @Vertical spacing between sprites
local UPaperExtractSpriteGridSettings = {}

