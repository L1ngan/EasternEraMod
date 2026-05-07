---Simple object intended to be used as part of 3D Gizmos.
---Draws a rectangle based on parameters.
---@class UGizmoElementRectangle : UGizmoElementLineBase
---@field protected Center FVector @Location of rectangle center
---@field protected Width number @Width
---@field protected Height number @Height
---@field protected UpDirection FVector @Up direction
---@field protected SideDirection FVector @Side direction
---@field protected bDrawMesh boolean
---@field protected bDrawLine boolean
---@field protected bHitMesh boolean
---@field protected bHitLine boolean
local UGizmoElementRectangle = {}

