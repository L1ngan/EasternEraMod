---@class UTypedElementWorldInterface : UInterface
local UTypedElementWorldInterface = {}

---Attempt to set the transform of this element within its owner world.
---@param InElementHandle FScriptTypedElementHandle
---@param InTransform FTransform
---@return boolean
function UTypedElementWorldInterface:SetWorldTransform(InElementHandle, InTransform) end

---Attempt to set the transform of this element relative to its parent.
---@param InElementHandle FScriptTypedElementHandle
---@param InTransform FTransform
---@return boolean
function UTypedElementWorldInterface:SetRelativeTransform(InElementHandle, InTransform) end

---Attempt to set the local space offset of this element that should be added to its pivot location.
---@param InElementHandle FScriptTypedElementHandle
---@param InPivotOffset FVector
---@return boolean
function UTypedElementWorldInterface:SetPivotOffset(InElementHandle, InPivotOffset) end

---Promote an element when possible
---Generally available when the element is a lighter representation of another element.
---Like an instance for example.
---@param InElementHandle FScriptTypedElementHandle
---@param OverrideWorld UWorld @[opt] 
---@return FScriptTypedElementHandle
function UTypedElementWorldInterface:PromoteElement(InElementHandle, OverrideWorld) end

---Notify that this element is about to be moved.
---@param InElementHandle FScriptTypedElementHandle
function UTypedElementWorldInterface:NotifyMovementStarted(InElementHandle) end

---Notify that this element is currently being moved.
---@param InElementHandle FScriptTypedElementHandle
function UTypedElementWorldInterface:NotifyMovementOngoing(InElementHandle) end

---Notify that this element is done being moved.
---@param InElementHandle FScriptTypedElementHandle
function UTypedElementWorldInterface:NotifyMovementEnded(InElementHandle) end

---Is this element considered a template within its world (eg, a CDO or archetype).
---@param InElementHandle FScriptTypedElementHandle
---@return boolean
function UTypedElementWorldInterface:IsTemplateElement(InElementHandle) end

---Get the transform of this element within its owner world, if any.
---@param InElementHandle FScriptTypedElementHandle
---@param OutTransform FTransform @[out] 
---@return boolean
function UTypedElementWorldInterface:GetWorldTransform(InElementHandle, OutTransform) end

---Get the transform of this element relative to its parent, if any.
---@param InElementHandle FScriptTypedElementHandle
---@param OutTransform FTransform @[out] 
---@return boolean
function UTypedElementWorldInterface:GetRelativeTransform(InElementHandle, OutTransform) end

---Get the local space offset of this element that should be added to its pivot location, if any.
---@param InElementHandle FScriptTypedElementHandle
---@param OutPivotOffset FVector @[out] 
---@return boolean
function UTypedElementWorldInterface:GetPivotOffset(InElementHandle, OutPivotOffset) end

---Get the owner world associated with this element, if any.
---@param InElementHandle FScriptTypedElementHandle
---@return UWorld
function UTypedElementWorldInterface:GetOwnerWorld(InElementHandle) end

---Get the owner level associated with this element, if any.
---@param InElementHandle FScriptTypedElementHandle
---@return ULevel
function UTypedElementWorldInterface:GetOwnerLevel(InElementHandle) end

---Get the bounds of this element, if any.
---@param InElementHandle FScriptTypedElementHandle
---@param OutBounds FBoxSphereBounds @[out] 
---@return boolean
function UTypedElementWorldInterface:GetBounds(InElementHandle, OutBounds) end

---Duplicate the given element.
---@param InElementHandle FScriptTypedElementHandle
---@param InWorld UWorld
---@param InLocationOffset FVector
---@return FScriptTypedElementHandle
function UTypedElementWorldInterface:DuplicateElement(InElementHandle, InWorld, InLocationOffset) end

---Delete the given element.
---@param InElementHandle FScriptTypedElementHandle
---@param InWorld UWorld
---@param InSelectionSet UTypedElementSelectionSet
---@param InDeletionOptions FTypedElementDeletionOptions
---@return boolean
function UTypedElementWorldInterface:DeleteElement(InElementHandle, InWorld, InSelectionSet, InDeletionOptions) end

---Can the given element be scaled?
---@param InElementHandle FScriptTypedElementHandle
---@return boolean
function UTypedElementWorldInterface:CanScaleElement(InElementHandle) end

---Can the element be promoted
---Generally available when the element is a lighter representation of another element.
---Like an instance for example.
---@param InElementHandle FScriptTypedElementHandle
---@return boolean
function UTypedElementWorldInterface:CanPromoteElement(InElementHandle) end

---Can the given element be moved within the world?
---@param InElementHandle FScriptTypedElementHandle
---@param InWorldType ETypedElementWorldType
---@return boolean
function UTypedElementWorldInterface:CanMoveElement(InElementHandle, InWorldType) end

---Can this element actually be edited in the world?
---@param InElementHandle FScriptTypedElementHandle
---@return boolean
function UTypedElementWorldInterface:CanEditElement(InElementHandle) end

---Can the given element be duplicated?
---@param InElementHandle FScriptTypedElementHandle
---@return boolean
function UTypedElementWorldInterface:CanDuplicateElement(InElementHandle) end

---Can the given element be deleted?
---@param InElementHandle FScriptTypedElementHandle
---@return boolean
function UTypedElementWorldInterface:CanDeleteElement(InElementHandle) end

