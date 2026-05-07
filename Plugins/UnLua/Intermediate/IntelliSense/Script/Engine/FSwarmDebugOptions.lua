---Debug options for Swarm
---@class FSwarmDebugOptions
---@field public bDistributionEnabled boolean @If true, Swarm will distribute jobs. If false, only the local machine will execute the jobs.
---@field public bForceContentExport boolean @If true, Swarm will force content to re-export rather than using the cached version. If false, Swarm will attempt to use the cached version.
---@field public bInitialized boolean
local FSwarmDebugOptions = {}
