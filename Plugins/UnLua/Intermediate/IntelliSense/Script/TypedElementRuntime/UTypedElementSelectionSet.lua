---A wrapper around an element list that ensures mutation goes via the selection
---interfaces, as well as providing some utilities for batching operations.
---@class UTypedElementSelectionSet : UObject
---@field public OnPreSelectionChange MulticastDelegate @Delegate that is invoked whenever the underlying element list is potentially about to change.
---@field public OnSelectionChange MulticastDelegate @Delegate that is invoked whenever the underlying element list has been changed.
local UTypedElementSelectionSet = {}

---Attempt to make the selection the given elements.
---@param InElementHandles TArray_FScriptTypedElementHandle_
---@param InSelectionOptions FTypedElementSelectionOptions
---@return boolean
function UTypedElementSelectionSet:SetSelection(InElementHandles, InSelectionOptions) end

---Attempt to select the given elements.
---@param InElementHandles TArray_FScriptTypedElementHandle_
---@param InSelectionOptions FTypedElementSelectionOptions
---@return boolean
function UTypedElementSelectionSet:SelectElements(InElementHandles, InSelectionOptions) end

---Attempt to select the given element.
---@param InElementHandle FScriptTypedElementHandle
---@param InSelectionOptions FTypedElementSelectionOptions
---@return boolean
function UTypedElementSelectionSet:SelectElement(InElementHandle, InSelectionOptions) end

---Restores the selection set from the given state.
---The calling code is responsible for managing any undo state.
---@param InSelectionState FTypedElementSelectionSetState
function UTypedElementSelectionSet:RestoreSelectionState(InSelectionState) end

---@param SelectionSet UTypedElementSelectionSet
function UTypedElementSelectionSet:OnPreChangeDynamic__DelegateSignature(SelectionSet) end

---@param SelectionSet UTypedElementSelectionSet
function UTypedElementSelectionSet:OnChangeDynamic__DelegateSignature(SelectionSet) end

---Get the handle of every selected element, optionally filtering to elements that implement the given interface.
---@param InBaseInterfaceType TSubclassOf_UInterface_ @[opt] 
---@return TArray_FScriptTypedElementHandle_
function UTypedElementSelectionSet:K2_GetSelectedElementHandles(InBaseInterfaceType) end

---Test to see whether the given element is currently considered selected.
---@param InElementHandle FScriptTypedElementHandle
---@param InSelectionOptions FTypedElementIsSelectedOptions
---@return boolean
function UTypedElementSelectionSet:IsElementSelected(InElementHandle, InSelectionOptions) end

---Test whether there are any selected objects.
---@param InRequiredClass TSubclassOf_UObject_ @[opt] 
---@return boolean
function UTypedElementSelectionSet:HasSelectedObjects(InRequiredClass) end

---Test whether there selected elements, optionally filtering to elements that implement the given interface.
---@param InBaseInterfaceType TSubclassOf_UInterface_ @[opt] 
---@return boolean
function UTypedElementSelectionSet:HasSelectedElements(InBaseInterfaceType) end

---Get the first selected object of the given type.
---@param InRequiredClass TSubclassOf_UObject_ @[opt] 
---@return UObject
function UTypedElementSelectionSet:GetTopSelectedObject(InRequiredClass) end

---Given an element, return the element that should actually perform a selection operation.
---@param InElementHandle FScriptTypedElementHandle
---@param InSelectionMethod ETypedElementSelectionMethod
---@return FScriptTypedElementHandle
function UTypedElementSelectionSet:GetSelectionElement(InElementHandle, InSelectionMethod) end

---Get the array of selected objects from the currently selected elements.
---@param InRequiredClass TSubclassOf_UObject_ @[opt] 
---@return TArray_UObject_
function UTypedElementSelectionSet:GetSelectedObjects(InRequiredClass) end

---Get the number of selected elements.
---@return integer
function UTypedElementSelectionSet:GetNumSelectedElements() end

---Serializes the current selection set.
---The calling code is responsible for storing any state information. The selection set can be returned to a prior state using RestoreSelectionState.
---@return FTypedElementSelectionSetState
function UTypedElementSelectionSet:GetCurrentSelectionState() end

---Get the last selected object of the given type.
---@param InRequiredClass TSubclassOf_UObject_ @[opt] 
---@return UObject
function UTypedElementSelectionSet:GetBottomSelectedObject(InRequiredClass) end

---Attempt to deselect the given elements.
---@param InElementHandles TArray_FScriptTypedElementHandle_
---@param InSelectionOptions FTypedElementSelectionOptions
---@return boolean
function UTypedElementSelectionSet:DeselectElements(InElementHandles, InSelectionOptions) end

---Attempt to deselect the given element.
---@param InElementHandle FScriptTypedElementHandle
---@param InSelectionOptions FTypedElementSelectionOptions
---@return boolean
function UTypedElementSelectionSet:DeselectElement(InElementHandle, InSelectionOptions) end

---Count the number of selected objects.
---@param InRequiredClass TSubclassOf_UObject_ @[opt] 
---@return integer
function UTypedElementSelectionSet:CountSelectedObjects(InRequiredClass) end

---Count the number of selected elements, optionally filtering to elements that implement the given interface.
---@param InBaseInterfaceType TSubclassOf_UInterface_ @[opt] 
---@return integer
function UTypedElementSelectionSet:CountSelectedElements(InBaseInterfaceType) end

---Clear the current selection.
---@param InSelectionOptions FTypedElementSelectionOptions
---@return boolean
function UTypedElementSelectionSet:ClearSelection(InSelectionOptions) end

---Test to see whether the given element can be selected.
---@param InElementHandle FScriptTypedElementHandle
---@param InSelectionOptions FTypedElementSelectionOptions
---@return boolean
function UTypedElementSelectionSet:CanSelectElement(InElementHandle, InSelectionOptions) end

---Test to see whether the given element can be deselected.
---@param InElementHandle FScriptTypedElementHandle
---@param InSelectionOptions FTypedElementSelectionOptions
---@return boolean
function UTypedElementSelectionSet:CanDeselectElement(InElementHandle, InSelectionOptions) end

---Test to see whether selection modifiers (Ctrl or Shift) are allowed while selecting this element.
---@param InElementHandle FScriptTypedElementHandle
---@return boolean
function UTypedElementSelectionSet:AllowSelectionModifiers(InElementHandle) end

