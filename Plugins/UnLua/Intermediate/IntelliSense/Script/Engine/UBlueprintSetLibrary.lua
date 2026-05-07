---@class UBlueprintSetLibrary : UBlueprintFunctionLibrary
local UBlueprintSetLibrary = {}

---Not exposed to users. Supports setting a set property on an object by name.
---@param Object UObject
---@param PropertyName string
---@param Value TSet_integer_
function UBlueprintSetLibrary.SetSetPropertyByName(Object, PropertyName, Value) end

---Assigns Result to the union of two sets, A and B. That is, Result will contain
---all elements that are in Set A and in addition all elements in Set B. Note that
---a Set is a collection of unique elements, so duplicates will be eliminated.
---@param A TSet_integer_
---@param B TSet_integer_
---@param Result TSet_integer_ @[out] 
function UBlueprintSetLibrary.Set_Union(A, B, Result) end

---Outputs an Array containing copies of the entries of a Set.
---@param A TSet_integer_
---@param Result TArray_integer_ @[out] 
function UBlueprintSetLibrary.Set_ToArray(A, Result) end

---Removes all elements in an Array from a set.
---@param TargetSet TSet_integer_
---@param Items TArray_integer_
function UBlueprintSetLibrary.Set_RemoveItems(TargetSet, Items) end

---Remove item from set. Output value indicates if something was actually removed. False
---indicates no equivalent item was found.
---@param TargetSet TSet_integer_
---@param Item integer
---@return boolean
function UBlueprintSetLibrary.Set_Remove(TargetSet, Item) end

---Get the number of items in a set.
---@param TargetSet TSet_integer_
---@return integer
function UBlueprintSetLibrary.Set_Length(TargetSet) end

---Check if the set has any elements
---@param TargetSet TSet_integer_
---@return boolean
function UBlueprintSetLibrary.Set_IsNotEmpty(TargetSet) end

---Check if the set is empty
---@param TargetSet TSet_integer_
---@return boolean
function UBlueprintSetLibrary.Set_IsEmpty(TargetSet) end

---Assigns Result to the intersection of Set A and Set B. That is, Result will contain
---all elements that are in both Set A and Set B. To intersect with the empty set use
---Clear.
---@param A TSet_integer_
---@param B TSet_integer_
---@param Result TSet_integer_ @[out] 
function UBlueprintSetLibrary.Set_Intersection(A, B, Result) end

---Retrieves the last valid index for a set
---@param TargetSet TSet_integer_
---@return integer
function UBlueprintSetLibrary.Set_GetLastIndex(TargetSet) end

---Given a set and an index, returns a copy of the item found at that index.
---Index may differ from the order in which they were added. This function is implemented
---for the purpose of iterating sets by index.
---@param TargetSet TSet_integer_
---@param Index integer
---@param Item integer @[out] 
function UBlueprintSetLibrary.Set_GetItemByIndex(TargetSet, Index, Item) end

---Assigns Result to the relative difference of two sets, A and B. That is, Result will
---contain  all elements that are in Set A but are not found in Set B. Note that the
---difference between two sets  is not commutative. The Set whose elements you wish to
---preserve should be the first (top) parameter. Also called the relative complement.
---@param A TSet_integer_
---@param B TSet_integer_
---@param Result TSet_integer_ @[out] 
function UBlueprintSetLibrary.Set_Difference(A, B, Result) end

---Returns true if the set contains the given item.
---@param TargetSet TSet_integer_
---@param ItemToFind integer
---@return boolean
function UBlueprintSetLibrary.Set_Contains(TargetSet, ItemToFind) end

---Clear a set, removes all content.
---@param TargetSet TSet_integer_
function UBlueprintSetLibrary.Set_Clear(TargetSet) end

---Adds all elements from an Array to a Set
---@param TargetSet TSet_integer_
---@param NewItems TArray_integer_
function UBlueprintSetLibrary.Set_AddItems(TargetSet, NewItems) end

---Adds item to set
---@param TargetSet TSet_integer_
---@param NewItem integer
function UBlueprintSetLibrary.Set_Add(TargetSet, NewItem) end

