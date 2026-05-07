---A function library with wrappers around the getter/setter functions for FSubobjectData
---that will make it easier to use within blueprint contexts.
---@class USubobjectDataBlueprintFunctionLibrary : UBlueprintFunctionLibrary
local USubobjectDataBlueprintFunctionLibrary = {}

---@param Data FSubobjectData
---@return boolean
function USubobjectDataBlueprintFunctionLibrary.IsValid(Data) end

---@param Data FSubobjectData
---@return boolean
function USubobjectDataBlueprintFunctionLibrary.IsSceneComponent(Data) end

---@param Data FSubobjectData
---@return boolean
function USubobjectDataBlueprintFunctionLibrary.IsRootComponent(Data) end

---@param Data FSubobjectData
---@return boolean
function USubobjectDataBlueprintFunctionLibrary.IsRootActor(Data) end

---@param Data FSubobjectData
---@return boolean
function USubobjectDataBlueprintFunctionLibrary.IsNativeComponent(Data) end

---@param Data FSubobjectData
---@return boolean
function USubobjectDataBlueprintFunctionLibrary.IsInstancedComponent(Data) end

---@param Data FSubobjectData
---@return boolean
function USubobjectDataBlueprintFunctionLibrary.IsInstancedActor(Data) end

---@param Data FSubobjectData
---@return boolean
function USubobjectDataBlueprintFunctionLibrary.IsInheritedComponent(Data) end

---@param DataHandle FSubobjectDataHandle
---@return boolean
function USubobjectDataBlueprintFunctionLibrary.IsHandleValid(DataHandle) end

---@param Data FSubobjectData
---@return boolean
function USubobjectDataBlueprintFunctionLibrary.IsDefaultSceneRoot(Data) end

---Returns true if this subobject is a component.
---@param Data FSubobjectData
---@return boolean
function USubobjectDataBlueprintFunctionLibrary.IsComponent(Data) end

---@param Data FSubobjectData
---@return boolean
function USubobjectDataBlueprintFunctionLibrary.IsChildActor(Data) end

---@param Data FSubobjectData
---@param InHandle FSubobjectDataHandle
---@return boolean
function USubobjectDataBlueprintFunctionLibrary.IsAttachedTo(Data, InHandle) end

---@param Data FSubobjectData
---@return boolean
function USubobjectDataBlueprintFunctionLibrary.IsActor(Data) end

---@param Data FSubobjectData
---@return string
function USubobjectDataBlueprintFunctionLibrary.GetVariableName(Data) end

---
---@param Data FSubobjectData
---@param OutHandle FSubobjectDataHandle @[out] 
function USubobjectDataBlueprintFunctionLibrary.GetParentHandle(Data, OutHandle) end

---@param Data FSubobjectData
---@param Blueprint UBlueprint
---@return UObject
function USubobjectDataBlueprintFunctionLibrary.GetObjectForBlueprint(Data, Blueprint) end

---@param Data FSubobjectData
---@param bEvenIfPendingKill boolean @[opt] 
---@return UObject
function USubobjectDataBlueprintFunctionLibrary.GetObject(Data, bEvenIfPendingKill) end

---
---@param Data FSubobjectData
---@param OutHandle FSubobjectDataHandle @[out] 
function USubobjectDataBlueprintFunctionLibrary.GetHandle(Data, OutHandle) end

---@param Data FSubobjectData
---@return string
function USubobjectDataBlueprintFunctionLibrary.GetDisplayName(Data) end

---@param DataHandle FSubobjectDataHandle
---@param OutData FSubobjectData @[out] 
function USubobjectDataBlueprintFunctionLibrary.GetData(DataHandle, OutData) end

---@param Data FSubobjectData
---@return UBlueprint
function USubobjectDataBlueprintFunctionLibrary.GetBlueprint(Data) end

---@param Data FSubobjectData
---@return UObject
function USubobjectDataBlueprintFunctionLibrary.GetAssociatedObject(Data) end

---
---be reparented to other subobjects based on its context.
---@param Data FSubobjectData
---@return boolean
function USubobjectDataBlueprintFunctionLibrary.CanReparent(Data) end

---@param Data FSubobjectData
---@return boolean
function USubobjectDataBlueprintFunctionLibrary.CanRename(Data) end

---
---@param Data FSubobjectData
---@return boolean
function USubobjectDataBlueprintFunctionLibrary.CanEdit(Data) end

---
---@param Data FSubobjectData
---@return boolean
function USubobjectDataBlueprintFunctionLibrary.CanDuplicate(Data) end

---
---@param Data FSubobjectData
---@return boolean
function USubobjectDataBlueprintFunctionLibrary.CanDelete(Data) end

---
---@param Data FSubobjectData
---@return boolean
function USubobjectDataBlueprintFunctionLibrary.CanCopy(Data) end

