---@class UActorElementEditorSelectionInterface : UActorElementSelectionInterface
local UActorElementEditorSelectionInterface = {}

---Attempt to select the given element.
---@param InElementHandle FScriptTypedElementHandle
---@param InSelectionSet FScriptTypedElementListProxy
---@param InSelectionOptions FTypedElementSelectionOptions
---@return boolean
function UActorElementEditorSelectionInterface:SelectElement(InElementHandle, InSelectionSet, InSelectionOptions) end

---Test to see whether the given element is currently considered selected.
---@param InElementHandle FScriptTypedElementHandle
---@param InSelectionSet FScriptTypedElementListProxy
---@param InSelectionOptions FTypedElementIsSelectedOptions
---@return boolean
function UActorElementEditorSelectionInterface:IsElementSelected(InElementHandle, InSelectionSet, InSelectionOptions) end

---Given an element, return the element that should actually perform a selection operation.
---@param InElementHandle FScriptTypedElementHandle
---@param InCurrentSelection FScriptTypedElementListProxy
---@param InSelectionMethod ETypedElementSelectionMethod
---@return FScriptTypedElementHandle
function UActorElementEditorSelectionInterface:GetSelectionElement(InElementHandle, InCurrentSelection, InSelectionMethod) end

---Attempt to deselect the given element.
---@param InElementHandle FScriptTypedElementHandle
---@param InSelectionSet FScriptTypedElementListProxy
---@param InSelectionOptions FTypedElementSelectionOptions
---@return boolean
function UActorElementEditorSelectionInterface:DeselectElement(InElementHandle, InSelectionSet, InSelectionOptions) end

---Test to see whether the given element can be selected.
---@param InElementHandle FScriptTypedElementHandle
---@param InSelectionOptions FTypedElementSelectionOptions
---@return boolean
function UActorElementEditorSelectionInterface:CanSelectElement(InElementHandle, InSelectionOptions) end

---Test to see whether the given element can be deselected.
---@param InElementHandle FScriptTypedElementHandle
---@param InSelectionOptions FTypedElementSelectionOptions
---@return boolean
function UActorElementEditorSelectionInterface:CanDeselectElement(InElementHandle, InSelectionOptions) end

---Test to see whether selection modifiers (Ctrl or Shift) are allowed while selecting this element.
---@param InElementHandle FScriptTypedElementHandle
---@param InSelectionSet FScriptTypedElementListProxy
---@return boolean
function UActorElementEditorSelectionInterface:AllowSelectionModifiers(InElementHandle, InSelectionSet) end

