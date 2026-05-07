---@class FDataflowPreviewCacheParams
---@field public FrameRate integer @Number of sampling frames per second for caching
---@field public SubframeRate integer @Number of subframes per frame for timeline clamping
---@field public bCanEditSubframeRate boolean
---@field public TimeRange FVector2f @Time range of the simulation
---@field public bRestartSimulation boolean @If enabled, the simulation will restart on Time Range without modifying anything outside of Time Range
---@field public RestartTimeRange FVector2f @Time range of the restarted simulation
---@field public bAsyncCaching boolean @Boolean to check if the caching will be done on an async thread (if yes no GT dependency)
local FDataflowPreviewCacheParams = {}
