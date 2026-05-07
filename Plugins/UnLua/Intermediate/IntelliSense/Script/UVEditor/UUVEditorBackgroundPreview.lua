---Serves as a container for the background texture/material display in the UVEditor. This class is responsible for managing the quad
---drawn behind the grid, as well as maintaining the texture and material choices from the user to display.
---@class UUVEditorBackgroundPreview : UPreviewGeometry
---@field public Settings UUVEditorBackgroundPreviewProperties @Visualization settings
---@field public BackgroundComponent UTriangleSetComponent @The component containing the quad visualization
---@field public BackgroundMaterial UMaterialInstanceDynamic @The active material being displayed for the background
local UUVEditorBackgroundPreview = {}

