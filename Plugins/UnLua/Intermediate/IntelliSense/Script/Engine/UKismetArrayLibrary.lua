---@class UKismetArrayLibrary : UBlueprintFunctionLibrary
local UKismetArrayLibrary = {}

---Sorts an array of strings alphabetically.
---@param TargetArray TArray_string_ @[out] 
---@param bStableSort boolean @[opt] 
---@param SortOrder EArraySortOrder @[opt] 
function UKismetArrayLibrary.SortStringArray(TargetArray, bStableSort, SortOrder) end

---Sorts an array of FNames.
---@param TargetArray TArray_string_ @[out] 
---@param bStableSort boolean @[opt] 
---@param bLexicalSort boolean @[opt] 
---@param SortOrder EArraySortOrder @[opt] 
function UKismetArrayLibrary.SortNameArray(TargetArray, bStableSort, bLexicalSort, SortOrder) end

---Sorts an array of integers.
---@param TargetArray TArray_integer_ @[out] 
---@param bStableSort boolean @[opt] 
---@param SortOrder EArraySortOrder @[opt] 
function UKismetArrayLibrary.SortIntArray(TargetArray, bStableSort, SortOrder) end

---Sorts an array of 64-bit integers.
---@param TargetArray TArray_integer_ @[out] 
---@param bStableSort boolean @[opt] 
---@param SortOrder EArraySortOrder @[opt] 
function UKismetArrayLibrary.SortInt64Array(TargetArray, bStableSort, SortOrder) end

---Sorts an array of doubles.
---@param TargetArray TArray_number_ @[out] 
---@param bStableSort boolean @[opt] 
---@param SortOrder EArraySortOrder @[opt] 
function UKismetArrayLibrary.SortFloatArray(TargetArray, bStableSort, SortOrder) end

---Sorts an array of bytes.
---@param TargetArray TArray_integer_ @[out] 
---@param bStableSort boolean @[opt] 
---@param SortOrder EArraySortOrder @[opt] 
function UKismetArrayLibrary.SortByteArray(TargetArray, bStableSort, SortOrder) end

---Not exposed to users. Supports setting an array property on an object by name.
---@param Object UObject
---@param PropertyName string
---@param Value TArray_integer_
function UKismetArrayLibrary.SetArrayPropertyByName(Object, PropertyName, Value) end

---*Filter an array based on a Class derived from Actor.
---*
---*@@param        TargetArray             The array to filter from
---*@@param        FilterClass             The Actor sub-class type that acts as the filter, only objects derived from it will be returned.
---*@@return       An array containing only those objects which are derived from the class specified.
---@param TargetArray TArray_AActor_
---@param FilterClass TSubclassOf_AActor_
---@param FilteredArray TArray_AActor_ @[out] 
function UKismetArrayLibrary.FilterArray(TargetArray, FilterClass, FilteredArray) end

---*Swaps the elements at the specified positions in the specified array
---*If the specified positions are equal, invoking this method leaves the array unchanged
---*
---*@@param        TargetArray             The array to perform the operation on
---*@@param    FirstIndex      The index of one element to be swapped
---*@@param    SecondIndex     The index of the other element to be swapped
---@param TargetArray TArray_integer_
---@param FirstIndex integer
---@param SecondIndex integer
function UKismetArrayLibrary.Array_Swap(TargetArray, FirstIndex, SecondIndex) end

---Shuffle (randomize) the elements of an array from a specific stream of random data, useful for achieving determinism
---@param TargetArray TArray_integer_
---@param RandomStream FRandomStream @[out] 
function UKismetArrayLibrary.Array_ShuffleFromStream(TargetArray, RandomStream) end

---Shuffle (randomize) the elements of an array
---@param TargetArray TArray_integer_
function UKismetArrayLibrary.Array_Shuffle(TargetArray) end

---*Given an array and an index, assigns the item to that array element
---*
---*@@param        TargetArray             The array to perform the operation on
---*@@param        Index                   The index to assign the item to
---*@@param        Item                    The item to assign to the index of the array
---*@@param        bSizeToFit              If true, the array will expand if Index is greater than the current size of the array
---@param TargetArray TArray_integer_
---@param Index integer
---@param Item integer
---@param bSizeToFit boolean
function UKismetArrayLibrary.Array_Set(TargetArray, Index, Item, bSizeToFit) end

---Reverse the elements of an array
---@param TargetArray TArray_integer_
function UKismetArrayLibrary.Array_Reverse(TargetArray) end

---*Resize Array to specified size.
---*
---*@@param        TargetArray             The array to resize
---*@@param        Size                    The new size of the array
---@param TargetArray TArray_integer_
---@param Size integer
function UKismetArrayLibrary.Array_Resize(TargetArray, Size) end

---*Remove all instances of item from array.
---*
---*@@param        TargetArray             The array to remove from
---*@@param        Item                    The item to remove from the array
---*@@return       True if one or more items were removed
---@param TargetArray TArray_integer_
---@param Item integer
---@return boolean
function UKismetArrayLibrary.Array_RemoveItem(TargetArray, Item) end

---*Remove item at the given index from the array.
---*
---*@@param        TargetArray             The array to remove from
---*@@param        IndexToRemove   The index into the array to remove from
---@param TargetArray TArray_integer_
---@param IndexToRemove integer
function UKismetArrayLibrary.Array_Remove(TargetArray, IndexToRemove) end

---Gets a random item from specified array (using random stream)
---@param TargetArray TArray_integer_
---@param RandomStream FRandomStream @[out] 
---@param OutItem integer @[out] 
---@param OutIndex integer @[out] 
function UKismetArrayLibrary.Array_RandomFromStream(TargetArray, RandomStream, OutItem, OutIndex) end

---Gets a random item from specified array
---@param TargetArray TArray_integer_
---@param OutItem integer @[out] 
---@param OutIndex integer @[out] 
function UKismetArrayLibrary.Array_Random(TargetArray, OutItem, OutIndex) end

---*Get the number of items in an array
---*
---*@@param        TargetArray             The array to get the length of
---*@@return       The length of the array
---@param TargetArray TArray_integer_
---@return integer
function UKismetArrayLibrary.Array_Length(TargetArray) end

---*Get the last valid index into an array
---*
---*@@param        TargetArray             The array to perform the operation on
---*@@return       The last valid index of the array
---@param TargetArray TArray_integer_
---@return integer
function UKismetArrayLibrary.Array_LastIndex(TargetArray) end

---*Tests if IndexToTest is valid, i.e. greater than or equal to zero, and less than the number of elements in TargetArray.
---*
---*@@param        TargetArray             Array to use for the IsValidIndex test
---*@@param        IndexToTest             The Index, that we want to test for being valid
---*@@return       True if the Index is Valid, i.e. greater than or equal to zero, and less than the number of elements in TargetArray.
---@param TargetArray TArray_integer_
---@param IndexToTest integer
---@return boolean
function UKismetArrayLibrary.Array_IsValidIndex(TargetArray, IndexToTest) end

---*Check if the array has any elements
---*
---*@@param        TargetArray             The array to check
---*@@return       A boolean indicating if the array has any elements
---@param TargetArray TArray_integer_
---@return boolean
function UKismetArrayLibrary.Array_IsNotEmpty(TargetArray) end

---*Check if the array is empty
---*
---*@@param        TargetArray             The array to check
---*@@return       A boolean indicating if the array is empty
---@param TargetArray TArray_integer_
---@return boolean
function UKismetArrayLibrary.Array_IsEmpty(TargetArray) end

---*Insert item at the given index into the array.
---*
---*@@param        TargetArray             The array to insert into
---*@@param        NewItem                 The item to insert into the array
---*@@param        Index                   The index at which to insert the item into the array
---@param TargetArray TArray_integer_
---@param NewItem integer
---@param Index integer
function UKismetArrayLibrary.Array_Insert(TargetArray, NewItem, Index) end

---Checks if two arrays are memberwise identical
---@param ArrayA TArray_integer_
---@param ArrayB TArray_integer_
---@return boolean
function UKismetArrayLibrary.Array_Identical(ArrayA, ArrayB) end

---*Given an array and an index, returns a copy of the item found at that index
---*
---*@@param        TargetArray             The array to get an item from
---*@@param        Index                   The index in the array to get an item from
---*@@return       A copy of the item stored at the index
---@param TargetArray TArray_integer_
---@param Index integer
---@param Item integer @[out] 
function UKismetArrayLibrary.Array_Get(TargetArray, Index, Item) end

---*Finds the index of the first instance of the item within the array
---*
---*@@param        TargetArray             The array to search for the item
---*@@param        ItemToFind              The item to look for
---*@@return       The index the item was found at, or -1 if not found
---@param TargetArray TArray_integer_
---@param ItemToFind integer
---@return integer
function UKismetArrayLibrary.Array_Find(TargetArray, ItemToFind) end

---*Returns true if the array contains the given item
---*
---*@@param        TargetArray             The array to search for the item
---*@@param        ItemToFind              The item to look for
---*@@return       True if the item was found within the array
---@param TargetArray TArray_integer_
---@param ItemToFind integer
---@return boolean
function UKismetArrayLibrary.Array_Contains(TargetArray, ItemToFind) end

---*Clear an array, removes all content
---*
---*@@param        TargetArray             The array to clear
---@param TargetArray TArray_integer_
function UKismetArrayLibrary.Array_Clear(TargetArray) end

---Append an array to another array
---@param TargetArray TArray_integer_
---@param SourceArray TArray_integer_
function UKismetArrayLibrary.Array_Append(TargetArray, SourceArray) end

---Add item to array (unique)
---@param TargetArray TArray_integer_
---@param NewItem integer
---@return integer
function UKismetArrayLibrary.Array_AddUnique(TargetArray, NewItem) end

---Add item to array
---@param TargetArray TArray_integer_
---@param NewItem integer
---@return integer
function UKismetArrayLibrary.Array_Add(TargetArray, NewItem) end

