---Simple object intended to be used as part of 3D Gizmos.
---Draws a solid 3D sphere based on parameters.
---@class UGizmoElementTriangleList : UGizmoElementBase
---@field protected Vertices TArray<FVector> @The vertices of the triangle list, each tuple of 3 forming a triangle
---@field protected Base FVector @Base location the triangles
---@field protected UpDirection FVector @Up direction
---@field protected SideDirection FVector @Side direction
local UGizmoElementTriangleList = {}

