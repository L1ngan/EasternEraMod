---@class FChildActorComponentInstanceData : FSceneComponentInstanceData
---@field public ChildActorClass TSubclassOf<AActor> @The class of the child actor when the instance data cache was stored
---@field public ChildActorName string @The name of the spawned child actor so it (attempts to) remain constant across construction script reruns
---@field public AttachedActors TArray<FChildActorAttachedActorInfo>
local FChildActorComponentInstanceData = {}
