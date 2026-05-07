---@class UTypedElementListLibrary : UObject
local UTypedElementListLibrary = {}

---Shrink this element list storage to avoid slack.
---@param ElementList FScriptTypedElementListProxy
function UTypedElementListLibrary.Shrink(ElementList) end

---Remove all entries from this element list, preserving existing allocations.
---@param ElementList FScriptTypedElementListProxy
function UTypedElementListLibrary.Reset(ElementList) end

---Pre-allocate enough memory in this element list to store the given number of entries.
---@param ElementList FScriptTypedElementListProxy
---@param Size integer
function UTypedElementListLibrary.Reserve(ElementList, Size) end

---Remove the given element handle from this element list, if it is in the list.
---@param ElementList FScriptTypedElementListProxy
---@param ElementHandle FScriptTypedElementHandle
---@return boolean
function UTypedElementListLibrary.Remove(ElementList, ElementHandle) end

---Get the number of entries within this element list.
---@param ElementList FScriptTypedElementListProxy
---@return integer
function UTypedElementListLibrary.Num(ElementList) end

---Is the given index a valid entry within this element list?
---@param ElementList FScriptTypedElementListProxy
---@param Index integer
---@return boolean
function UTypedElementListLibrary.IsValidIndex(ElementList, Index) end

---Test whether there are elements in this list of the given type.
---@param ElementList FScriptTypedElementListProxy
---@param ElementTypeName string
---@return boolean
function UTypedElementListLibrary.HasElementsOfType(ElementList, ElementTypeName) end

---Test whether there are elements in this list, optionally filtering to elements that implement the given interface.
---@param ElementList FScriptTypedElementListProxy
---@param BaseInterfaceType TSubclassOf_UInterface_ @[opt] 
---@return boolean
function UTypedElementListLibrary.HasElements(ElementList, BaseInterfaceType) end

---Get the element interface from the given handle.
---@param ElementList FScriptTypedElementListProxy
---@param ElementHandle FScriptTypedElementHandle
---@param BaseInterfaceType TSubclassOf_UInterface_
---@return UObject
function UTypedElementListLibrary.GetElementInterface(ElementList, ElementHandle, BaseInterfaceType) end

---Get the handle of every element in this list, optionally filtering to elements that implement the given interface.
---@param ElementList FScriptTypedElementListProxy
---@param BaseInterfaceType TSubclassOf_UInterface_
---@return TArray_FScriptTypedElementHandle_
function UTypedElementListLibrary.GetElementHandles(ElementList, BaseInterfaceType) end

---Get the element handle at the given index.
---@param ElementList FScriptTypedElementListProxy
---@param Index integer
---@return FScriptTypedElementHandle
function UTypedElementListLibrary.GetElementHandleAt(ElementList, Index) end

---Remove all entries from this element list, potentially leaving space allocated for the given number of entries.
---@param ElementList FScriptTypedElementListProxy
---@param Slack integer @[opt] 
function UTypedElementListLibrary.Empty(ElementList, Slack) end

---Create an empty list of elements associated with the given registry.
---@param Registry UTypedElementRegistry
---@return FScriptTypedElementListProxy
function UTypedElementListLibrary.CreateScriptElementList(Registry) end

---Count the number of elements in this list of the given type.
---@param ElementList FScriptTypedElementListProxy
---@param ElementTypeName string
---@return integer
function UTypedElementListLibrary.CountElementsOfType(ElementList, ElementTypeName) end

---Count the number of elements in this list, optionally filtering to elements that implement the given interface.
---@param ElementList FScriptTypedElementListProxy
---@param BaseInterfaceType TSubclassOf_UInterface_ @[opt] 
---@return integer
function UTypedElementListLibrary.CountElements(ElementList, BaseInterfaceType) end

---Does this element list contain an entry for the given element handle?
---@param ElementList FScriptTypedElementListProxy
---@param ElementHandle FScriptTypedElementHandle
---@return boolean
function UTypedElementListLibrary.Contains(ElementList, ElementHandle) end

---Clone this list instance.
---@param ElementList FScriptTypedElementListProxy
---@return FScriptTypedElementListProxy
function UTypedElementListLibrary.Clone(ElementList) end

---Append the another element list to this element list.
---@param ElementList FScriptTypedElementListProxy
---@param OtherElementList FScriptTypedElementListProxy
function UTypedElementListLibrary.AppendList(ElementList, OtherElementList) end

---Append the given element handles to this element list.
---@param ElementList FScriptTypedElementListProxy
---@param ElementHandles TArray_FScriptTypedElementHandle_
function UTypedElementListLibrary.Append(ElementList, ElementHandles) end

---Add the given element handle to this element list, if it isn't already in the list.
---@param ElementList FScriptTypedElementListProxy
---@param ElementHandle FScriptTypedElementHandle
---@return boolean
function UTypedElementListLibrary.Add(ElementList, ElementHandle) end

