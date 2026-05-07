---@class UKismetStringTableLibrary : UBlueprintFunctionLibrary
local UKismetStringTableLibrary = {}

---Returns true if the given table ID corresponds to a registered string table.
---@param TableId string
---@return boolean
function UKismetStringTableLibrary.IsRegisteredTableId(TableId) end

---Returns true if the given table ID corresponds to a registered string table, and that table has.
---@param TableId string
---@param Key string
---@return boolean
function UKismetStringTableLibrary.IsRegisteredTableEntry(TableId, Key) end

---Returns the namespace of the given string table.
---@param TableId string
---@return string
function UKismetStringTableLibrary.GetTableNamespace(TableId) end

---Returns the source string of the given string table entry (or an empty string).
---@param TableId string
---@param Key string
---@return string
function UKismetStringTableLibrary.GetTableEntrySourceString(TableId, Key) end

---Returns the specified meta-data of the given string table entry (or an empty string).
---@param TableId string
---@param Key string
---@param MetaDataId string
---@return string
function UKismetStringTableLibrary.GetTableEntryMetaData(TableId, Key, MetaDataId) end

---Returns an array of all registered string table IDs
---@return TArray_string_
function UKismetStringTableLibrary.GetRegisteredStringTables() end

---Returns an array of all meta-data IDs within the given string table entry
---@param TableId string
---@param Key string
---@return TArray_string_
function UKismetStringTableLibrary.GetMetaDataIdsFromStringTableEntry(TableId, Key) end

---Returns an array of all keys within the given string table
---@param TableId string
---@return TArray_string_
function UKismetStringTableLibrary.GetKeysFromStringTable(TableId) end

