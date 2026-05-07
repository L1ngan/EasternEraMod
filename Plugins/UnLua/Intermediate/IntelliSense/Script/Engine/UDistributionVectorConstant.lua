---@class UDistributionVectorConstant : UDistributionVector
---@field public Constant FVector @This FVector will be returned for all input times.
---@field public bLockAxes boolean @If true, X == Y == Z ie. only one degree of freedom. If false, each axis is picked independently.
---@field public LockedAxes integer
local UDistributionVectorConstant = {}

