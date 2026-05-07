---@class UEdgeLoopInsertionProperties : UInteractiveToolPropertySet
---@field public PositionMode EEdgeLoopPositioningMode @Determines how edge loops position themselves vertically relative to loop direction.
---@field public InsertionMode EEdgeLoopInsertionMode @Determines how edge loops are added to the geometry
---@field public NumLoops integer @How many loops to insert at a time. Only used with "even" positioning mode.
---@field public ProportionOffset number
---@field public DistanceOffset number
---@field public bInteractive boolean @When false, the distance/proportion offset is numerically specified, and mouse clicks just choose the edge.
---@field public bFlipOffsetDirection boolean @Measure the distance offset from the opposite side of the edges.
---@field public bHighlightProblemGroups boolean @When true, non-quad-like groups that stop the loop will be highlighted, with X's marking the corners.
---@field public VertexTolerance number @How close a new loop edge needs to pass next to an existing vertex to use that vertex rather than creating a new one.
local UEdgeLoopInsertionProperties = {}

