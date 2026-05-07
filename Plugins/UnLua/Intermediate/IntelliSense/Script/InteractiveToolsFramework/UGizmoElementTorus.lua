---Simple object intended to be used as part of 3D Gizmos.
---Draws a torus based on parameters.
---Note: the LineTrace method does not perform a true ray-torus intersection!
---See comment above LineTrace method below for details of how this intersection is approximated.
---@class UGizmoElementTorus : UGizmoElementCircleBase
---@field protected InnerRadius number @Torus inner radius.
---@field protected NumInnerSlices integer @Number of slices to render in each torus segment.
---@field protected bEndCaps boolean @Whether to render end caps on a partial torus.
local UGizmoElementTorus = {}

