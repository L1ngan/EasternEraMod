---@class UDrawPolygonToolStandardProperties : UInteractiveToolPropertySet
---@field public PolygonDrawMode EDrawPolygonDrawMode @Type of polygon to draw in the viewport
---@field public bAllowSelfIntersections boolean @Allow freehand drawn polygons to self-intersect
---@field public FeatureSizeRatio number @Size of secondary features, e.g. the rounded corners of a rounded rectangle, as fraction of the overall shape size
---@field public RadialSlices integer @Number of radial subdivisions in round features, e.g. circles or rounded corners
---@field public Distance number @Distance between the last clicked point and the current point
---@field public bShowGridGizmo boolean @If true, shows a gizmo to manipulate the additional grid used to draw the polygon on
---@field public ExtrudeMode EDrawPolygonExtrudeMode @If and how the drawn polygon gets extruded
---@field public ExtrudeHeight number @Extrude distance when using the Fixed extrude mode
local UDrawPolygonToolStandardProperties = {}

