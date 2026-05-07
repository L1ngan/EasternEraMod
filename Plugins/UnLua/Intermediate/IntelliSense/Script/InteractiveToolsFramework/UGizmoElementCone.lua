---Simple object intended to be used as part of 3D Gizmos.
---Draws a solid 3D cone based on parameters.
---@class UGizmoElementCone : UGizmoElementBase
---@field protected Origin FVector @Cone tip location.
---@field protected Direction FVector @Cone axis direction pointing from tip toward base of cone.
---@field protected Height number @Cone height.
---@field protected Radius number @Cone radius.
---@field protected NumSides integer @Number of sides for tessellating cone.
---@field protected bEndCaps boolean @Whether to render and end cap on the base of the cone.
local UGizmoElementCone = {}

