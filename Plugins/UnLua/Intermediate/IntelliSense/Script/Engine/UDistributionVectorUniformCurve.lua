---@class UDistributionVectorUniformCurve : UDistributionVector
---@field public ConstantCurve FInterpCurveTwoVectors @Keyframe data for how output constant varies over time.
---@field public bLockAxes1 boolean @If true, X == Y == Z ie. only one degree of freedom. If false, each axis is picked independently.
---@field public bLockAxes2 boolean
---@field public LockedAxes integer
---@field public MirrorFlags integer
---@field public bUseExtremes boolean
local UDistributionVectorUniformCurve = {}

