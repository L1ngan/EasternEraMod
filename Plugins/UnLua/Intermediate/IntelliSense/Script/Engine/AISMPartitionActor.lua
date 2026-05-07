---Actor base class for instance containers placed on a grid.
---      See UActorPartitionSubsystem.
---@class AISMPartitionActor : APartitionActor
---@field private Clients TArray<FGuid>
---@field private Descriptors TArray<FISMComponentDescriptor>
---@field private DescriptorComponents TArray<FISMComponentData>
---@field private ClientInstanceManagers TMap<FGuid, FISMClientInstanceManagerData>
local AISMPartitionActor = {}

