---@class USMInstanceElementEditorSelectionInterface : USMInstanceElementSelectionInterface
local USMInstanceElementEditorSelectionInterface = {}

---Attempt to select the given element.
---@param InElementHandle FScriptTypedElementHandle
---@param InSelectionSet FScriptTypedElementListProxy
---@param InSelectionOptions FTypedElementSelectionOptions
---@return boolean
function USMInstanceElementEditorSelectionInterface:SelectElement(InElementHandle, InSelectionSet, InSelectionOptions) end

---Test to see whether the given element is currently considered selected.
---@param InElementHandle FScriptTypedElementHandle
---@param InSelectionSet FScriptTypedElementListProxy
---@param InSelectionOptions FTypedElementIsSelectedOptions
---@return boolean
function USMInstanceElementEditorSelectionInterface:IsElementSelected(InElementHandle, InSelectionSet, InSelectionOptions) end

---Given an element, return the element that should actually perform a selection operation.
---@param InElementHandle FScriptTypedElementHandle
---@param InCurrentSelection FScriptTypedElementListProxy
---@param InSelectionMethod ETypedElementSelectionMethod
---@return FScriptTypedElementHandle
function USMInstanceElementEditorSelectionInterface:GetSelectionElement(InElementHandle, InCurrentSelection, InSelectionMethod) end

---Attempt to deselect the given element.
---@param InElementHandle FScriptTypedElementHandle
---@param InSelectionSet FScriptTypedElementListProxy
---@param InSelectionOptions FTypedElementSelectionOptions
---@return boolean
function USMInstanceElementEditorSelectionInterface:DeselectElement(InElementHandle, InSelectionSet, InSelectionOptions) end

---Test to see whether the given element can be selected.
---@param InElementHandle FScriptTypedElementHandle
---@param InSelectionOptions FTypedElementSelectionOptions
---@return boolean
function USMInstanceElementEditorSelectionInterface:CanSelectElement(InElementHandle, InSelectionOptions) end

---Test to see whether the given element can be deselected.
---@param InElementHandle FScriptTypedElementHandle
---@param InSelectionOptions FTypedElementSelectionOptions
---@return boolean
function USMInstanceElementEditorSelectionInterface:CanDeselectElement(InElementHandle, InSelectionOptions) end

---Test to see whether selection modifiers (Ctrl or Shift) are allowed while selecting this element.
---@param InElementHandle FScriptTypedElementHandle
---@param InSelectionSet FScriptTypedElementListProxy
---@return boolean
function USMInstanceElementEditorSelectionInterface:AllowSelectionModifiers(InElementHandle, InSelectionSet) end

