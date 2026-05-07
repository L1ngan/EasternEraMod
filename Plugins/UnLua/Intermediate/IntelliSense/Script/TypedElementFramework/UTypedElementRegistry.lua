---Registry of element types and their associated interfaces, along with the elements that represent their instances.
---@class UTypedElementRegistry : UObject
local UTypedElementRegistry = {}

---Get the singleton instance of the registry used in most cases.
---@return UTypedElementRegistry
function UTypedElementRegistry.GetInstance() end

---Get the element interface supported by the given handle, or null if there is no support for this interface or if the handle is invalid.
---@param InElementHandle FScriptTypedElementHandle
---@param InBaseInterfaceType TSubclassOf_UInterface_
---@return UObject
function UTypedElementRegistry:GetElementInterface(InElementHandle, InBaseInterfaceType) end

