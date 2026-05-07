---@class UGroupEdgeInsertionProperties : UInteractiveToolPropertySet
---@field public InsertionMode EGroupEdgeInsertionMode @Determines how group edges are added to the geometry
---@field public bContinuousInsertion boolean @If true, edge insertions are chained together so that each end point becomes the new start point
---@field public VertexTolerance number @How close a new loop edge needs to pass next to an existing vertex to use that vertex rather than creating a new one (used for plane cut).
local UGroupEdgeInsertionProperties = {}

