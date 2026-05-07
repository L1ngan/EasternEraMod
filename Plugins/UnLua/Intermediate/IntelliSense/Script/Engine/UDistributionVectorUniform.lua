---@class UDistributionVectorUniform : UDistributionVector
---@field public Max FVector @Upper end of FVector magnitude range.
---@field public Min FVector @Lower end of FVector magnitude range.
---@field public bLockAxes boolean @If true, X == Y == Z ie. only one degree of freedom. If false, each axis is picked independently.
---@field public LockedAxes integer
---@field public MirrorFlags integer
---@field public bUseExtremes boolean
local UDistributionVectorUniform = {}

