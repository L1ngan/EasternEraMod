---@class UObjectElementObjectInterface : UObject
local UObjectElementObjectInterface = {}

---Gets the object instance's class that the handle represents, if any.
---@param InElementHandle FScriptTypedElementHandle
---@return TSubclassOf_UObject_
function UObjectElementObjectInterface:GetObjectClass(InElementHandle) end

---Get the object instance that this handle represents, if any.
---@param InElementHandle FScriptTypedElementHandle
---@return UObject
function UObjectElementObjectInterface:GetObject(InElementHandle) end

