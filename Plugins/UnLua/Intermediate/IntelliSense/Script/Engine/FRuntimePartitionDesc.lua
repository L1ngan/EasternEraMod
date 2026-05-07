---Holds settings for a runtime partition instance.
---@class FRuntimePartitionDesc
---@field public Name string @Name for this partition, used to map actors to it through the Actor.RuntimeGrid property
---@field public Class TSubclassOf<URuntimePartition> @Partition class
---@field public MainLayer URuntimePartition @Main partition object
---@field public HLODSetups TArray<FRuntimePartitionHLODSetup> @HLOD setups used by this partition, one for each layers in the hierarchy
local FRuntimePartitionDesc = {}
