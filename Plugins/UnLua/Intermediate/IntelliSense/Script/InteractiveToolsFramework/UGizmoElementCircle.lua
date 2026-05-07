---Simple object intended to be used as part of 3D Gizmos.
---Draws a filled or line circle based on parameters.
---The circle element does not yet support partial circles.
---@class UGizmoElementCircle : UGizmoElementCircleBase
---@field protected bDrawMesh boolean @Whether to render solid circle.
---@field protected bDrawLine boolean @Whether to render line circle.
---@field protected bHitMesh boolean @Whether to perform hit test on mesh.
---@field protected bHitLine boolean @Whether to perform hit test on line.
local UGizmoElementCircle = {}

