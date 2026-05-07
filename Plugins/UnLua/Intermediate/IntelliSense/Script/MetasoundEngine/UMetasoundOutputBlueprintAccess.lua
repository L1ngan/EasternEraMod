---Blueprint support for core types. If you want to support more core types, add them here.
---If you want to support types introduced in other plugins, create a blueprint library in that plugin.
---@class UMetasoundOutputBlueprintAccess : UBlueprintFunctionLibrary
local UMetasoundOutputBlueprintAccess = {}

---@param Output FMetaSoundOutput
---@return boolean
function UMetasoundOutputBlueprintAccess.IsTime(Output) end

---@param Output FMetaSoundOutput
---@return boolean
function UMetasoundOutputBlueprintAccess.IsString(Output) end

---@param Output FMetaSoundOutput
---@return boolean
function UMetasoundOutputBlueprintAccess.IsInt32(Output) end

---@param Output FMetaSoundOutput
---@return boolean
function UMetasoundOutputBlueprintAccess.IsFloat(Output) end

---@param Output FMetaSoundOutput
---@return boolean
function UMetasoundOutputBlueprintAccess.IsBool(Output) end

---@param Output FMetaSoundOutput
---@param Success boolean @[out] 
---@return number
function UMetasoundOutputBlueprintAccess.GetTimeSeconds(Output, Success) end

---@param Output FMetaSoundOutput
---@param Success boolean @[out] 
---@return string
function UMetasoundOutputBlueprintAccess.GetString(Output, Success) end

---@param Output FMetaSoundOutput
---@param Success boolean @[out] 
---@return integer
function UMetasoundOutputBlueprintAccess.GetInt32(Output, Success) end

---@param Output FMetaSoundOutput
---@param Success boolean @[out] 
---@return number
function UMetasoundOutputBlueprintAccess.GetFloat(Output, Success) end

---@param Output FMetaSoundOutput
---@param Success boolean @[out] 
---@return boolean
function UMetasoundOutputBlueprintAccess.GetBool(Output, Success) end

