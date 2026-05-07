---Simple object intended to be used as part of 3D Gizmos.
---Draws a rectangle based on parameters.
---@class UGizmoElementLineStrip : UGizmoElementLineBase
---@field protected Vertices TArray<FVector> @The vertices of the line strip
---@field protected Base FVector @Base Location of the line strip
---@field protected UpDirection FVector @Up direction
---@field protected SideDirection FVector @Side direction
---@field protected bDrawLineStrip boolean @Defines if the vertices should be treated as a connected strip or separate line segments
local UGizmoElementLineStrip = {}

