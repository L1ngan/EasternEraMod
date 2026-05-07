---Settings for Bounding Box adjustments in the Pattern Tool
---@class UPatternTool_BoundingBoxSettings : UInteractiveToolPropertySet
---@field public bIgnoreTransforms boolean @If true, pattern element bounding boxes are not changed to account for StartScale or StartRotation
---@field public Adjustment number @Value added to the all pattern elements' bounding boxes for adjusting the behavior of packed spacing mode manually
---@field public bVisualize boolean @If true, the bounding boxes of each element are rendered in green and the combined bounding box of all source elements is rendered in red
local UPatternTool_BoundingBoxSettings = {}

