---@class UComponentElementWorldInterface : UObject
local UComponentElementWorldInterface = {}

---Attempt to set the transform of this element within its owner world.
---@param InElementHandle FScriptTypedElementHandle
---@param InTransform FTransform
---@return boolean
function UComponentElementWorldInterface:SetWorldTransform(InElementHandle, InTransform) end

---Attempt to set the transform of this element relative to its parent.
---@param InElementHandle FScriptTypedElementHandle
---@param InTransform FTransform
---@return boolean
function UComponentElementWorldInterface:SetRelativeTransform(InElementHandle, InTransform) end

---Attempt to set the local space offset of this element that should be added to its pivot location.
---@param InElementHandle FScriptTypedElementHandle
---@param InPivotOffset FVector
---@return boolean
function UComponentElementWorldInterface:SetPivotOffset(InElementHandle, InPivotOffset) end

---Promote an element when possible
---Generally available when the element is a lighter representation of another element.
---Like an instance for example.
---@param InElementHandle FScriptTypedElementHandle
---@param OverrideWorld UWorld @[opt] 
---@return FScriptTypedElementHandle
function UComponentElementWorldInterface:PromoteElement(InElementHandle, OverrideWorld) end

---Notify that this element is about to be moved.
---@param InElementHandle FScriptTypedElementHandle
function UComponentElementWorldInterface:NotifyMovementStarted(InElementHandle) end

---Notify that this element is currently being moved.
---@param InElementHandle FScriptTypedElementHandle
function UComponentElementWorldInterface:NotifyMovementOngoing(InElementHandle) end

---Notify that this element is done being moved.
---@param InElementHandle FScriptTypedElementHandle
function UComponentElementWorldInterface:NotifyMovementEnded(InElementHandle) end

---Is this element considered a template within its world (eg, a CDO or archetype).
---@param InElementHandle FScriptTypedElementHandle
---@return boolean
function UComponentElementWorldInterface:IsTemplateElement(InElementHandle) end

---Get the transform of this element within its owner world, if any.
---@param InElementHandle FScriptTypedElementHandle
---@param OutTransform FTransform @[out] 
---@return boolean
function UComponentElementWorldInterface:GetWorldTransform(InElementHandle, OutTransform) end

---Get the transform of this element relative to its parent, if any.
---@param InElementHandle FScriptTypedElementHandle
---@param OutTransform FTransform @[out] 
---@return boolean
function UComponentElementWorldInterface:GetRelativeTransform(InElementHandle, OutTransform) end

---Get the local space offset of this element that should be added to its pivot location, if any.
---@param InElementHandle FScriptTypedElementHandle
---@param OutPivotOffset FVector @[out] 
---@return boolean
function UComponentElementWorldInterface:GetPivotOffset(InElementHandle, OutPivotOffset) end

---Get the owner world associated with this element, if any.
---@param InElementHandle FScriptTypedElementHandle
---@return UWorld
function UComponentElementWorldInterface:GetOwnerWorld(InElementHandle) end

---Get the owner level associated with this element, if any.
---@param InElementHandle FScriptTypedElementHandle
---@return ULevel
function UComponentElementWorldInterface:GetOwnerLevel(InElementHandle) end

---Get the bounds of this element, if any.
---@param InElementHandle FScriptTypedElementHandle
---@param OutBounds FBoxSphereBounds @[out] 
---@return boolean
function UComponentElementWorldInterface:GetBounds(InElementHandle, OutBounds) end

---Duplicate the given element.
---@param InElementHandle FScriptTypedElementHandle
---@param InWorld UWorld
---@param InLocationOffset FVector
---@return FScriptTypedElementHandle
function UComponentElementWorldInterface:DuplicateElement(InElementHandle, InWorld, InLocationOffset) end

---Delete the given element.
---@param InElementHandle FScriptTypedElementHandle
---@param InWorld UWorld
---@param InSelectionSet UTypedElementSelectionSet
---@param InDeletionOptions FTypedElementDeletionOptions
---@return boolean
function UComponentElementWorldInterface:DeleteElement(InElementHandle, InWorld, InSelectionSet, InDeletionOptions) end

---Can the given element be scaled?
---@param InElementHandle FScriptTypedElementHandle
---@return boolean
function UComponentElementWorldInterface:CanScaleElement(InElementHandle) end

---Can the element be promoted
---Generally available when the element is a lighter representation of another element.
---Like an instance for example.
---@param InElementHandle FScriptTypedElementHandle
---@return boolean
function UComponentElementWorldInterface:CanPromoteElement(InElementHandle) end

---Can the given element be moved within the world?
---@param InElementHandle FScriptTypedElementHandle
---@param InWorldType ETypedElementWorldType
---@return boolean
function UComponentElementWorldInterface:CanMoveElement(InElementHandle, InWorldType) end

---Can this element actually be edited in the world?
---@param InElementHandle FScriptTypedElementHandle
---@return boolean
function UComponentElementWorldInterface:CanEditElement(InElementHandle) end

---Can the given element be duplicated?
---@param InElementHandle FScriptTypedElementHandle
---@return boolean
function UComponentElementWorldInterface:CanDuplicateElement(InElementHandle) end

---Can the given element be deleted?
---@param InElementHandle FScriptTypedElementHandle
---@return boolean
function UComponentElementWorldInterface:CanDeleteElement(InElementHandle) end

