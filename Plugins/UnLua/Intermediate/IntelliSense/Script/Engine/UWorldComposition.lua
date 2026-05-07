---WorldComposition represents world structure:
---    - Holds list of all level packages participating in this world and theirs base parameters (bounding boxes, offset from origin)
---    - Holds list of streaming level objects to stream in and out based on distance from current view point
--- - Handles properly levels repositioning during level loading and saving
---@class UWorldComposition : UObject
---@field public TilesStreaming TArray<ULevelStreaming> @Streaming level objects for each tile
---@field public TilesStreamingTimeThreshold number @Time threshold between tile streaming state changes
---@field public bLoadAllTilesDuringCinematic boolean @Whether all distance dependent tiles should be loaded and visible during cinematic
---@field public bRebaseOriginIn3DSpace boolean @Whether to rebase origin in 3D space, otherwise only on XY plane
---@field public bLockTilesLocation boolean @Whether all tiles locations are locked
---@field public RebaseOriginDistance number @Maximum distance to current view point where we should initiate origin rebasing
local UWorldComposition = {}

