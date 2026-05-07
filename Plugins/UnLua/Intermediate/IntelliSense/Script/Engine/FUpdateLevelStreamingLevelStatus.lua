---This structure is used to pass arguments to ClientUpdateMultipleLevelsStreamingStatus() client RPC function
---@class FUpdateLevelStreamingLevelStatus
---@field public PackageName string @Name of the level package name used for loading.
---@field public LODIndex integer @Current LOD index for a streaming level
---@field public bNewShouldBeLoaded boolean @Whether the level should be loaded
---@field public bNewShouldBeVisible boolean @Whether the level should be visible if it is loaded
---@field public bNewShouldBlockOnLoad boolean @Whether we want to force a blocking load
---@field public bNewShouldBlockOnUnload boolean @Whether we want to force a blocking unload
local FUpdateLevelStreamingLevelStatus = {}
