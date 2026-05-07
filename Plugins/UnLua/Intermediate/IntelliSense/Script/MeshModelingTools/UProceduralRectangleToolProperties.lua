---@class UProceduralRectangleToolProperties : UProceduralShapeToolProperties
---@field public RectangleType EProceduralRectType @Type of rectangle
---@field public Width number @Width of the rectangle
---@field public Depth number @Depth of the rectangle
---@field public WidthSubdivisions integer @Number of subdivisions along the width
---@field public DepthSubdivisions integer @Number of subdivisions along the depth
---@field public bMaintainDimension boolean @Whether to preserve the overall Width and Depth for a Rounded Rectangle, or to allow the rounded corners to extend outside those dimensions.
---@field public CornerRadius number @Radius of rounded corners. This is only available for Rounded Rectangles.
---@field public CornerSlices integer @Number of radial slices for each rounded corner. This is only available for Rounded Rectangles.
local UProceduralRectangleToolProperties = {}

