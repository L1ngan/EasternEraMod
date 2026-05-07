---@class UDatasmithContentBlueprintLibrary : UBlueprintFunctionLibrary
local UDatasmithContentBlueprintLibrary = {}

---Get the values of the given key for the Datasmith User Data of the given object.
---@param Object UObject
---@param Key string
---@param bPartialMatchKey boolean @[opt] 
---@return TArray_string_
function UDatasmithContentBlueprintLibrary.GetDatasmithUserDataValuesForKey(Object, Key, bPartialMatchKey) end

---Get the value of the given key for the Datasmith User Data of the given object.
---@param Object UObject
---@param Key string
---@param bPartialMatchKey boolean @[opt] 
---@return string
function UDatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey(Object, Key, bPartialMatchKey) end

---Get the keys and values for which the associated value contains the string to match for the Datasmith User Data of the given object.
---@param Object UObject
---@param StringToMatch string
---@param OutKeys TArray_string_ @[out] 
---@param OutValues TArray_string_ @[out] 
function UDatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue(Object, StringToMatch, OutKeys, OutValues) end

---Get the Datasmith User Data of a given object
---@param Object UObject
---@return UDatasmithAssetUserData
function UDatasmithContentBlueprintLibrary.GetDatasmithUserData(Object) end

---Find all loaded objects of the given type that have a Datasmith User Data that contains the given key and their associated values.
---This is a slow operation, so editor only.
---@param Key string
---@param ObjectClass TSubclassOf_UObject_
---@param OutObjects TArray_UObject_ @[out] 
---@param OutValues TArray_string_ @[out] 
function UDatasmithContentBlueprintLibrary.GetAllObjectsAndValuesForKey(Key, ObjectClass, OutObjects, OutValues) end

---Find all Datasmith User Data of loaded objects of the given type.
---This is a slow operation, so editor only.
---@param ObjectClass TSubclassOf_UObject_
---@param OutUserData TArray_UDatasmithAssetUserData_ @[out] 
function UDatasmithContentBlueprintLibrary.GetAllDatasmithUserData(ObjectClass, OutUserData) end

