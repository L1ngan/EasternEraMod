---Simple object intended to be used as part of 3D Gizmos.
---Draws a solid 3D cylinder based on parameters.
---@class UGizmoElementCylinder : UGizmoElementBase
---@field protected Base FVector @Location of center of cylinder's base circle.
---@field protected Direction FVector @Cylinder axis direction.
---@field protected Height number @Cylinder height.
---@field protected Radius number @Cylinder radius.
---@field protected NumSides integer @Number of sides for tessellating cylinder.
local UGizmoElementCylinder = {}

