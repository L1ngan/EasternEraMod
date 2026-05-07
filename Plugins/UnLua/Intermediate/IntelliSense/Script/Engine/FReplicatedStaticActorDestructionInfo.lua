---Stored information about replicated static/placed actors that have been destroyed in a level.
---This information is cached in ULevel so that any net drivers that are created after these actors
---are destroyed can access this info and correctly replicate the destruction to their clients.
---@class FReplicatedStaticActorDestructionInfo
---@field public ObjClass TSubclassOf<UObject>
local FReplicatedStaticActorDestructionInfo = {}
