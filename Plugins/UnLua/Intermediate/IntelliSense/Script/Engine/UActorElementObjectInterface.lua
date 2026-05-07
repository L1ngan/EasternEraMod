---@class UActorElementObjectInterface : UObject
local UActorElementObjectInterface = {}

---Gets the object instance's class that the handle represents, if any.
---@param InElementHandle FScriptTypedElementHandle
---@return TSubclassOf_UObject_
function UActorElementObjectInterface:GetObjectClass(InElementHandle) end

---Get the object instance that this handle represents, if any.
---@param InElementHandle FScriptTypedElementHandle
---@return UObject
function UActorElementObjectInterface:GetObject(InElementHandle) end

