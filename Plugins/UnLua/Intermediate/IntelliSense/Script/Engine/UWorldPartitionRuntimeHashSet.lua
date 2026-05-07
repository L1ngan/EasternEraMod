---@class UWorldPartitionRuntimeHashSet : UWorldPartitionRuntimeHash
---@field private RuntimePartitions TArray<FRuntimePartitionDesc> @Array of runtime partition descriptors
---@field private RuntimeStreamingData TArray<FRuntimePartitionStreamingData>
---@field private WorldAssetStreamingObjects TMap<FGuid, URuntimeHashSetExternalStreamingObject>
---@field private StandaloneHLODActorToSourceCellsMap TMap<FGuid, FGuid>
local UWorldPartitionRuntimeHashSet = {}

