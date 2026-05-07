---Editor preferences for the Modeling Components plug-in.
---@class UModelingComponentsEditorSettings : UDeveloperSettings
---@field public GridMode EModelingComponentsPlaneVisualizationMode @The type of grid to draw in the viewport for modeling mode tools
---@field public NumGridLines integer @The number of lines to be drawn for the plane
---@field public GridSpacing number @The space between grid lines in world space
---@field public GridScale number @The base scale used to determine the size of the hierarchical plane
---@field public GridSize number @The fraction of the viewport that the grid should occupy if looking at the plane's center
local UModelingComponentsEditorSettings = {}

