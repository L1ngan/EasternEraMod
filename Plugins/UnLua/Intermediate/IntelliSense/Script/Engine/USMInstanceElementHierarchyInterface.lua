---@class USMInstanceElementHierarchyInterface : UObject
local USMInstanceElementHierarchyInterface = {}

---Get the logical parent of this element, if any.
---eg) A component might return its actor, or a static mesh instance might return its ISM component.
---@param InElementHandle FScriptTypedElementHandle
---@param bAllowCreate boolean @[opt] 
---@return FScriptTypedElementHandle
function USMInstanceElementHierarchyInterface:GetParentElement(InElementHandle, bAllowCreate) end

---Get the logical children of this element, if any.
---eg) An actor might return its component, or an ISM component might return its static mesh instances.
---@param InElementHandle FScriptTypedElementHandle
---@param OutElementHandles TArray_FScriptTypedElementHandle_ @[out] 
---@param bAllowCreate boolean @[opt] 
function USMInstanceElementHierarchyInterface:GetChildElements(InElementHandle, OutElementHandles, bAllowCreate) end

