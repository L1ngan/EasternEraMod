---@class FStreamingSourceShape
---@field public bUseGridLoadingRange boolean @If True, streaming source shape radius is bound to loading range radius.
---@field public LoadingRangeScale number @Applies a scale to the grid's loading range (used if bUseGridLoadingRange is True).
---@field public Radius number @Custom streaming source shape radius (not used if bUseGridLoadingRange is True).
---@field public bIsSector boolean @Whether the source shape is a spherical sector instead of a regular sphere source.
---@field public SectorAngle number @Shape's spherical sector angle in degree (not used if bIsSector is False).
---@field public Location FVector @Streaming source shape location (local to streaming source).
---@field public Rotation FRotator @Streaming source shape rotation (local to streaming source).
local FStreamingSourceShape = {}
