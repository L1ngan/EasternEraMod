---@class ULightWeightInstanceBlueprintFunctionLibrary : UBlueprintFunctionLibrary
local ULightWeightInstanceBlueprintFunctionLibrary = {}

---Returns a handle to a new light weight instance that represents an object of type ActorClass
---@param ActorClass TSubclassOf_UObject_
---@param Transform FTransform
---@param Layer UDataLayerInstance
---@param World UWorld
---@return FActorInstanceHandle
function ULightWeightInstanceBlueprintFunctionLibrary.CreateNewLightWeightInstance(ActorClass, Transform, Layer, World) end

---Returns a handle to the light weight representation and destroys Actor if successful; Returns a handle to Actor otherwise
---@param Actor AActor
---@return FActorInstanceHandle
function ULightWeightInstanceBlueprintFunctionLibrary.ConvertActorToLightWeightInstance(Actor) end

