---@class ULayer : UObject
---@field private LayerName string @The display name of the layer
---@field private bIsVisible boolean @Whether actors associated with the layer are visible in the viewport
---@field private ActorStats TArray<FLayerActorStats> @Basic stats regarding the number of Actors and their types currently assigned to the Layer
local ULayer = {}

