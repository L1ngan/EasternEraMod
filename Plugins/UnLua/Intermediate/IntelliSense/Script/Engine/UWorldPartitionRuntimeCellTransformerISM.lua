---@class UWorldPartitionRuntimeCellTransformerISM : UWorldPartitionRuntimeCellTransformer
---@field public AllowedClasses TArray<TSubclassOf<AActor>> @Allowed classes (recursive) to convert to instances
---@field public DisallowedClasses TArray<TSubclassOf<AActor>> @Disallowed classes (non-recursive) to convert to instances
---@field public MinNumInstances integer @Minimum number of instances required to allow converting actors to ISM
local UWorldPartitionRuntimeCellTransformerISM = {}

