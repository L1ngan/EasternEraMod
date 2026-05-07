---Function library containing methods for interacting with editor layers
---@class ULayersBlueprintLibrary : UBlueprintFunctionLibrary
local ULayersBlueprintLibrary = {}

---Removes the actor from the specified layer
---@param InActor AActor
---@param Layer FActorLayer
function ULayersBlueprintLibrary.RemoveActorFromLayer(InActor, Layer) end

---Get all the actors in this layer
---@param WorldContextObject UObject
---@param ActorLayer FActorLayer
---@return TArray_AActor_
function ULayersBlueprintLibrary.GetActors(WorldContextObject, ActorLayer) end

---Adds the actor to the specified layer
---@param InActor AActor
---@param Layer FActorLayer
function ULayersBlueprintLibrary.AddActorToLayer(InActor, Layer) end

