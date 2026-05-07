---A utility to handle higher-level common actions, but default via UTypedElementWorldInterface,
---but asset editors can customize this behavior via FTypedElementCommonActionsCustomization.
---@class UTypedElementCommonActions : UObject
local UTypedElementCommonActions = {}

---Paste any elements from the given string
---@param ElementList FScriptTypedElementListProxy
---@param World UWorld
---@param PasteOption FTypedElementPasteOptions
---@param InputString string
---@return TArray_FScriptTypedElementHandle_
function UTypedElementCommonActions:PasteNormalizedElementsFromString(ElementList, World, PasteOption, InputString) end

---Paste any elements from the given string
---@param SelectionSet UTypedElementSelectionSet
---@param World UWorld
---@param PasteOption FTypedElementPasteOptions
---@param InputString string
---@return TArray_FScriptTypedElementHandle_
function UTypedElementCommonActions:PasteElementsFromString(SelectionSet, World, PasteOption, InputString) end

---Paste any elements from the clipboard
---@param ElementList FScriptTypedElementListProxy
---@param World UWorld
---@param PasteOption FTypedElementPasteOptions
---@return TArray_FScriptTypedElementHandle_
function UTypedElementCommonActions:K2_PasteNormalizedElements(ElementList, World, PasteOption) end

---Paste any elements from the clipboard
---@param SelectionSet UTypedElementSelectionSet
---@param World UWorld
---@param PasteOption FTypedElementPasteOptions
---@return TArray_FScriptTypedElementHandle_
function UTypedElementCommonActions:K2_PasteElements(SelectionSet, World, PasteOption) end

---Duplicate any elements from the given selection set that can be duplicated.
---@param SelectionSet UTypedElementSelectionSet
---@param World UWorld
---@param LocationOffset FVector
---@return TArray_FScriptTypedElementHandle_
function UTypedElementCommonActions:K2_DuplicateSelectedElements(SelectionSet, World, LocationOffset) end

---Duplicate any elements from the given list that can be duplicated.
---@param ElementList FScriptTypedElementListProxy
---@param World UWorld
---@param LocationOffset FVector
---@return TArray_FScriptTypedElementHandle_
function UTypedElementCommonActions:DuplicateNormalizedElements(ElementList, World, LocationOffset) end

---Delete any elements from the given selection set that can be deleted.
---@param SelectionSet UTypedElementSelectionSet
---@param World UWorld
---@param DeletionOptions FTypedElementDeletionOptions
---@return boolean
function UTypedElementCommonActions:DeleteSelectedElements(SelectionSet, World, DeletionOptions) end

---Delete any elements from the given list that can be deleted.
---@param ElementList FScriptTypedElementListProxy
---@param World UWorld
---@param InSelectionSet UTypedElementSelectionSet
---@param DeletionOptions FTypedElementDeletionOptions
---@return boolean
function UTypedElementCommonActions:DeleteNormalizedElements(ElementList, World, InSelectionSet, DeletionOptions) end

---Copy any elements from the given selection set that can be copied into the string
---@param SelectionSet UTypedElementSelectionSet
---@param OutputString string @[out] 
---@return boolean
function UTypedElementCommonActions:CopySelectedElementsToString(SelectionSet, OutputString) end

---Copy any elements from the given selection set that can be copied into the clipboard
---@param SelectionSet UTypedElementSelectionSet
---@return boolean
function UTypedElementCommonActions:CopySelectedElements(SelectionSet) end

---* Copy any elements from the given selection set that can be copied into the clipboard.
---* @@note This list should have been pre-normalized via UTypedElementSelectionSet::GetNormalizedSelection or UTypedElementSelectionSet::GetNormalizedElementList.
---@param ElementList FScriptTypedElementListProxy
---@param OutputString string @[out] 
---@return boolean
function UTypedElementCommonActions:CopyNormalizedElementsToString(ElementList, OutputString) end

---* Copy any elements from the given selection set that can be copied into the clipboard.
---* @@note This list should have been pre-normalized via UTypedElementSelectionSet::GetNormalizedSelection or UTypedElementSelectionSet::GetNormalizedElementList.
---@param ElementList FScriptTypedElementListProxy
---@return boolean
function UTypedElementCommonActions:CopyNormalizedElements(ElementList) end

