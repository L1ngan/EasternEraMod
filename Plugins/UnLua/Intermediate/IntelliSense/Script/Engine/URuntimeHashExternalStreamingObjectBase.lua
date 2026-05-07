---@class URuntimeHashExternalStreamingObjectBase : UObject
---@field public SubObjectsToCellRemapping TMap<string, string>
---@field public ContainerResolver FWorldPartitionRuntimeContainerResolver
---@field protected OuterWorld TSoftObjectPtr<UWorld>
---@field protected CellToStreamingData TMap<string, FWorldPartitionRuntimeCellStreamingData>
---@field protected DataLayerInstances TSet<UDataLayerInstance>
---@field protected RootExternalDataLayerInstance UExternalDataLayerInstance
---@field protected PackagesToGenerateForCook TMap<string, UWorldPartitionRuntimeCell>
---@field protected ExternalDataLayerAsset UExternalDataLayerAsset
local URuntimeHashExternalStreamingObjectBase = {}

