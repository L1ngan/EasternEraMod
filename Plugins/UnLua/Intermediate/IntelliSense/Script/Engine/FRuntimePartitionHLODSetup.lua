---Holds an HLOD setup for a particular partition class.
---@class FRuntimePartitionHLODSetup
---@field public Name string @Name for this HLOD layer setup
---@field public HLODLayers TArray<UHLODLayer> @Associated HLOD Layer objects
---@field public bIsSpatiallyLoaded boolean @whether this HLOD setup is spatially loaded or not
---@field public PartitionLayer URuntimePartition
local FRuntimePartitionHLODSetup = {}
