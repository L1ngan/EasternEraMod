---Bookkeeping struct that contains the data that allows linking Client Instances to actual Component Instances
---@class FISMComponentData
---@field public Instances TArray<FISMComponentInstance> @Instances here must match Component instances
---@field public ClientInstances TArray<FISMClientData> @Per Client Instances. Indexed using a Client index that must match the indexing in AISMPartitionActor
---@field public Component UInstancedStaticMeshComponent
local FISMComponentData = {}
