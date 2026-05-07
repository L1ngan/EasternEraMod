---@class UWorldPartitionBlueprintLibrary : UBlueprintFunctionLibrary
local UWorldPartitionBlueprintLibrary = {}

---Unpin actors
---@param InActorsToUnpin TArray_FGuid_
function UWorldPartitionBlueprintLibrary.UnpinActors(InActorsToUnpin) end

---Unload actors
---@param InActorsToUnload TArray_FGuid_
function UWorldPartitionBlueprintLibrary.UnloadActors(InActorsToUnload) end

---Pin actors
---@param InActorsToPin TArray_FGuid_
function UWorldPartitionBlueprintLibrary.PinActors(InActorsToPin) end

---Load actors
---@param InActorsToLoad TArray_FGuid_
function UWorldPartitionBlueprintLibrary.LoadActors(InActorsToLoad) end

---Gets the runtime world bounds, which only includes actor descriptors that aren't editor only.
---@return FBox
function UWorldPartitionBlueprintLibrary.GetRuntimeWorldBounds() end

---Gets all the actor descriptors intersecting the provided box into the provided array, recursing into actor containers.
---@param InBox FBox
---@param OutActorDescs TArray_FActorDesc_ @[out] 
---@return boolean
function UWorldPartitionBlueprintLibrary.GetIntersectingActorDescs(InBox, OutActorDescs) end

---Gets the editor world bounds, which includes all actor descriptors.
---@return FBox
function UWorldPartitionBlueprintLibrary.GetEditorWorldBounds() end

---Returns the Data Layer Manager for this object.
---@param WorldContextObject UObject
---@return UDataLayerManager
function UWorldPartitionBlueprintLibrary.GetDataLayerManager(WorldContextObject) end

---Gets all the actor descriptors from the provided actor pointers, which represents descriptors on disk, e.g. will not
---reflect properties of unsaved actors.
---@param InActors TArray_AActor_
---@param OutActorDescs TArray_FActorDesc_ @[out] 
---@return boolean
function UWorldPartitionBlueprintLibrary.GetActorDescsForActors(InActors, OutActorDescs) end

---Gets all the actor descriptors into the provided array, recursing into actor containers.
---@param OutActorDescs TArray_FActorDesc_ @[out] 
---@return boolean
function UWorldPartitionBlueprintLibrary.GetActorDescs(OutActorDescs) end

