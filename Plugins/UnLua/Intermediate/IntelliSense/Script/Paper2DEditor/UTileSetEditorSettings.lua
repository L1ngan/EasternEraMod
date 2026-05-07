---Settings for the Paper2D tile set editor
---@class UTileSetEditorSettings : UObject
---@field public DefaultBackgroundColor FColor @Default background color for new tile set assets
---@field public bShowGridByDefault boolean @Should the grid be shown by default when the editor is opened?
---@field public ExtrusionAmount integer @The amount to extrude out from the edge of each tile (in pixels)
---@field public bPadToPowerOf2 boolean @Should we pad the conditioned texture to the next power of 2?
---@field public bFillWithTransparentBlack boolean @Should we use transparent black or white when filling the texture areas that aren't covered by tiles?
local UTileSetEditorSettings = {}

