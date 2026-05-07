---Edit layer renderer added at the top of the stack to generate the normals, right before resolving the textures.
--- For now, the rendered components require (up to) their 8 immediate neighbors to generate adequate normals on the border so the renderer inserts that strong dependency, so that the components
--- that are needed in the batch are guaranteed to have their neighbors present in the same batch :
---@class ULandscapeHeightmapNormalsEditLayerRenderer : UObject
local ULandscapeHeightmapNormalsEditLayerRenderer = {}

