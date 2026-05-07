---Library of functions for the scripting of Typed Elements that use both a selection set and a element list
---Note: These functions should only be used for scripting purposes only as they come at higher performance cost then their non script implementation
---@class UTypedElementSelectionSetLibrary : UObject
local UTypedElementSelectionSetLibrary = {}

---Attempt to make the selection the given elements.
---@param SelectionSet UTypedElementSelectionSet
---@param ElementList FScriptTypedElementListProxy
---@param SelectionOptions FTypedElementSelectionOptions
---@return boolean
function UTypedElementSelectionSetLibrary.SetSelectionFromList(SelectionSet, ElementList, SelectionOptions) end

---Attempt to select the given elements.
---@param SelectionSet UTypedElementSelectionSet
---@param ElementList FScriptTypedElementListProxy
---@param SelectionOptions FTypedElementSelectionOptions
---@return boolean
function UTypedElementSelectionSetLibrary.SelectElementsFromList(SelectionSet, ElementList, SelectionOptions) end

---Get a normalized version of this selection set that can be used to perform operations like gizmo manipulation, deletion, copying, etc.
---This will do things like expand out groups, and resolve any parent<->child elements so that duplication operations aren't performed on both the parent and the child.
---@param SelectionSet UTypedElementSelectionSet
---@param NormalizationOptions FTypedElementSelectionNormalizationOptions
---@return FScriptTypedElementListProxy
function UTypedElementSelectionSetLibrary.GetNormalizedSelection(SelectionSet, NormalizationOptions) end

---Get a normalized version of the given element list that can be used to perform operations like gizmo manipulation, deletion, copying, etc.
---This will do things like expand out groups, and resolve any parent<->child elements so that duplication operations aren't performed on both the parent and the child.
---@param SelectionSet UTypedElementSelectionSet
---@param ElementList FScriptTypedElementListProxy
---@param NormalizationOptions FTypedElementSelectionNormalizationOptions
---@return FScriptTypedElementListProxy
function UTypedElementSelectionSetLibrary.GetNormalizedElementList(SelectionSet, ElementList, NormalizationOptions) end

---Attempt to deselect the given elements.
---@param SelectionSet UTypedElementSelectionSet
---@param ElementList FScriptTypedElementListProxy
---@param SelectionOptions FTypedElementSelectionOptions
---@return boolean
function UTypedElementSelectionSetLibrary.DeselectElementsFromList(SelectionSet, ElementList, SelectionOptions) end

