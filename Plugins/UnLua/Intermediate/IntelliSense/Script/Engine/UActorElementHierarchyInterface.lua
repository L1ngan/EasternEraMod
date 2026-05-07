---@class UActorElementHierarchyInterface : UObject
local UActorElementHierarchyInterface = {}

---Get the logical parent of this element, if any.
---eg) A component might return its actor, or a static mesh instance might return its ISM component.
---@param InElementHandle FScriptTypedElementHandle
---@param bAllowCreate boolean @[opt] 
---@return FScriptTypedElementHandle
function UActorElementHierarchyInterface:GetParentElement(InElementHandle, bAllowCreate) end

---Get the logical children of this element, if any.
---eg) An actor might return its component, or an ISM component might return its static mesh instances.
---@param InElementHandle FScriptTypedElementHandle
---@param OutElementHandles TArray_FScriptTypedElementHandle_ @[out] 
---@param bAllowCreate boolean @[opt] 
function UActorElementHierarchyInterface:GetChildElements(InElementHandle, OutElementHandles, bAllowCreate) end

