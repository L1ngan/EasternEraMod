---Settings for the Paper2D tile map editor
---@class UTileMapEditorSettings : UObject
---@field public DefaultBackgroundColor FColor @Default background color for new tile map assets
---@field public bShowGridByDefault boolean @Should the grid be shown by default when the editor is opened?
---@field public DefaultTileGridColor FColor @Default per tile grid color for new tile map assets
---@field public DefaultMultiTileGridColor FColor @Default multi tile grid color for new tile map assets
---@field public DefaultMultiTileGridWidth integer @Default number of tiles the multi tile grid spans horizontally for new tile map assets. 0 removes vertical lines
---@field public DefaultMultiTileGridHeight integer @Default number of tiles the multi tile grid spans vertically for new tile map assets. 0 removes horizontal lines
---@field public DefaultMultiTileGridOffsetX integer @Default number of tiles the multi tile grid is shifted to the right for new tile map assets
---@field public DefaultMultiTileGridOffsetY integer @Default number of tiles the multi tile grid is shifted downwards for new tile map assets
---@field public DefaultLayerGridColor FColor @Default layer grid color for new tile map assets
local UTileMapEditorSettings = {}

