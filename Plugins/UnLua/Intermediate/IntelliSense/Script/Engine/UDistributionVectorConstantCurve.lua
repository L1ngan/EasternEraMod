---@class UDistributionVectorConstantCurve : UDistributionVector
---@field public ConstantCurve FInterpCurveVector @Keyframe data for each component (X,Y,Z) over time.
---@field public bLockAxes boolean @If true, X == Y == Z ie. only one degree of freedom. If false, each axis is picked independently.
---@field public LockedAxes integer
local UDistributionVectorConstantCurve = {}

