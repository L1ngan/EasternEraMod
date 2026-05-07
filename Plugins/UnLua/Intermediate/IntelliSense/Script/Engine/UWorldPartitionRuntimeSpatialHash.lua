---@class UWorldPartitionRuntimeSpatialHash : UWorldPartitionRuntimeHash
---@field private Grids TArray<FSpatialHashRuntimeGrid>
---@field private bPreviewGrids boolean @Whether to preview runtime grids.
---@field private PreviewGridLevel integer
---@field private GridPreviewer FWorldPartitionRuntimeSpatialHashGridPreviewer
---@field private UseAlignedGridLevels EWorldPartitionCVarProjectDefaultOverride @Disable to help break the pattern caused by world partition promotion of actors to upper grid levels that are always aligned on child levels.
---@field private SnapNonAlignedGridLevelsToLowerLevels EWorldPartitionCVarProjectDefaultOverride @Disable to avoid snapping higher levels cells to child cells. Only used when bUseAlignedGridLevels is false.
---@field private PlaceSmallActorsUsingLocation EWorldPartitionCVarProjectDefaultOverride @Enable to place actors smaller than a cell size into their corresponding cell using their location instead of their bounding box.
---@field private PlacePartitionActorsUsingLocation EWorldPartitionCVarProjectDefaultOverride @Enable to place partitioned actors into their corresponding cell using their location instead of their bounding box.
---@field private bEnableZCulling boolean @Whether this hash enables Z culling.
---@field protected Settings FSpatialHashSettings
---@field protected StreamingGrids TArray<FSpatialHashStreamingGrid> @Represents the streaming grids (PIE or Game)
---@field protected WorldAssetStreamingObjects TMap<FGuid, URuntimeSpatialHashExternalStreamingObject>
local UWorldPartitionRuntimeSpatialHash = {}

