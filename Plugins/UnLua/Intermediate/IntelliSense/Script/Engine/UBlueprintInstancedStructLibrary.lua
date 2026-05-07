---@class UBlueprintInstancedStructLibrary : UBlueprintFunctionLibrary
local UBlueprintInstancedStructLibrary = {}

---Sets the value of InstancedStruct from the given source value.
---@param InstancedStruct FInstancedStruct @[out] 
---@param Value integer
function UBlueprintInstancedStructLibrary.SetInstancedStructValue(InstancedStruct, Value) end

---Resets an InstancedStruct.
---@param InstancedStruct FInstancedStruct @[out] 
---@param StructType UScriptStruct @[opt] 
function UBlueprintInstancedStructLibrary.Reset(InstancedStruct, StructType) end

---Checks whether two InstancedStructs are not equal.
---@param A FInstancedStruct
---@param B FInstancedStruct
---@return boolean
function UBlueprintInstancedStructLibrary.NotEqual_InstancedStruct(A, B) end

---Create a new InstancedStruct from the given source value.
---@param Value integer
---@return FInstancedStruct
function UBlueprintInstancedStructLibrary.MakeInstancedStruct(Value) end

---Checks whether the InstancedStruct contains value.
---@param InstancedStruct FInstancedStruct
---@return boolean
function UBlueprintInstancedStructLibrary.IsValid_InstancedStruct(InstancedStruct) end

---Checks whether an InstancedStruct contains value.
---@param InstancedStruct FInstancedStruct
---@return EStructUtilsResult
function UBlueprintInstancedStructLibrary.IsInstancedStructValid(InstancedStruct) end

---Retrieves data from an InstancedStruct if it matches the output type.
---@param ExecResult EStructUtilsResult @[out] 
---@param InstancedStruct FInstancedStruct
---@param Value integer @[out] 
function UBlueprintInstancedStructLibrary.GetInstancedStructValue(ExecResult, InstancedStruct, Value) end

---Checks whether two InstancedStructs (and the values contained within) are equal.
---@param A FInstancedStruct
---@param B FInstancedStruct
---@return boolean
function UBlueprintInstancedStructLibrary.EqualEqual_InstancedStruct(A, B) end

