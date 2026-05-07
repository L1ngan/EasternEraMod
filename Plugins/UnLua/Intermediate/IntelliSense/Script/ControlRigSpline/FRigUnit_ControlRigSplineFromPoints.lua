---* Creates a Spline curve from an array of positions
---@class FRigUnit_ControlRigSplineFromPoints : FRigUnit_ControlRigSplineBase
---@field public Points TArray<FVector>
---@field public SplineMode ESplineType
---@field public bClosed boolean
---@field public SamplesPerSegment integer
---@field public Compression number
---@field public Stretch number
---@field public Spline FControlRigSpline
local FRigUnit_ControlRigSplineFromPoints = {}
