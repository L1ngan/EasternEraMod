---@class UTypedElementObjectInterface : UInterface
local UTypedElementObjectInterface = {}

---Gets the object instance's class that the handle represents, if any.
---@param InElementHandle FScriptTypedElementHandle
---@return TSubclassOf_UObject_
function UTypedElementObjectInterface:GetObjectClass(InElementHandle) end

---Get the object instance that this handle represents, if any.
---@param InElementHandle FScriptTypedElementHandle
---@return UObject
function UTypedElementObjectInterface:GetObject(InElementHandle) end

