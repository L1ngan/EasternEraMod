---* Creates a Spline curve from an array of positions
---@class FRigUnit_ControlRigSplineFromTransforms : FRigUnit_ControlRigSplineBase
---@field public Transforms TArray<FTransform>
---@field public SplineMode ESplineType
---@field public bClosed boolean
---@field public SamplesPerSegment integer
---@field public Compression number
---@field public Stretch number
---@field public Spline FControlRigSpline
local FRigUnit_ControlRigSplineFromTransforms = {}
