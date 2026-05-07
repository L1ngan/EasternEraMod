---@class UBlueprintMapLibrary : UBlueprintFunctionLibrary
local UBlueprintMapLibrary = {}

---Not exposed to users. Supports setting a map property on an object by name.
---@param Object UObject
---@param PropertyName string
---@param Value TMap_integer__integer_
function UBlueprintMapLibrary.SetMapPropertyByName(Object, PropertyName, Value) end

---Outputs an array of all values present in the map
---@param TargetMap TMap_integer__integer_
---@param Values TArray_integer_ @[out] 
function UBlueprintMapLibrary.Map_Values(TargetMap, Values) end

---Removes a key and its associated value from the map.
---@param TargetMap TMap_integer__integer_
---@param Key integer
---@return boolean
function UBlueprintMapLibrary.Map_Remove(TargetMap, Key) end

---Determines the number of entries in a provided Map
---@param TargetMap TMap_integer__integer_
---@return integer
function UBlueprintMapLibrary.Map_Length(TargetMap) end

---Outputs an array of all keys present in the map
---@param TargetMap TMap_integer__integer_
---@param Keys TArray_integer_ @[out] 
function UBlueprintMapLibrary.Map_Keys(TargetMap, Keys) end

---Check if the map has any entries
---@param TargetMap TMap_integer__integer_
---@return boolean
function UBlueprintMapLibrary.Map_IsNotEmpty(TargetMap) end

---Check if the map does not have any entires
---@param TargetMap TMap_integer__integer_
---@return boolean
function UBlueprintMapLibrary.Map_IsEmpty(TargetMap) end

---Determines the last valid index for a map
---@param TargetMap TMap_integer__integer_
---@return integer
function UBlueprintMapLibrary.Map_GetLastIndex(TargetMap) end

---Given a map and an index, returns a copy of the key and value found at that index.
---Index may differ from the order in which they were added. This function is implemented
---for the purpose of iterating maps by index.
---@param TargetMap TMap_integer__integer_
---@param Index integer
---@param Key integer @[out] 
---@param Value integer @[out] 
function UBlueprintMapLibrary.Map_GetKeyValueByIndex(TargetMap, Index, Key, Value) end

---Finds the value associated with the provided Key
---@param TargetMap TMap_integer__integer_
---@param Key integer
---@param Value integer @[out] 
---@return boolean
function UBlueprintMapLibrary.Map_Find(TargetMap, Key, Value) end

---Checks whether key is in a provided Map
---@param TargetMap TMap_integer__integer_
---@param Key integer
---@return boolean
function UBlueprintMapLibrary.Map_Contains(TargetMap, Key) end

---Clears a map of all entries, resetting it to empty
---@param TargetMap TMap_integer__integer_
function UBlueprintMapLibrary.Map_Clear(TargetMap) end

---Adds a key and value to the map. If something already uses the provided key it will be overwritten with the new value.
---After calling Key is guaranteed to be associated with Value until a subsequent mutation of the Map.
---@param TargetMap TMap_integer__integer_
---@param Key integer
---@param Value integer
function UBlueprintMapLibrary.Map_Add(TargetMap, Key, Value) end

