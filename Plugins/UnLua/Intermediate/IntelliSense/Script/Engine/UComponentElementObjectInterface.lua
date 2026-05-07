---@class UComponentElementObjectInterface : UObject
local UComponentElementObjectInterface = {}

---Gets the object instance's class that the handle represents, if any.
---@param InElementHandle FScriptTypedElementHandle
---@return TSubclassOf_UObject_
function UComponentElementObjectInterface:GetObjectClass(InElementHandle) end

---Get the object instance that this handle represents, if any.
---@param InElementHandle FScriptTypedElementHandle
---@return UObject
function UComponentElementObjectInterface:GetObject(InElementHandle) end

