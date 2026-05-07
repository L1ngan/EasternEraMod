---A collection of blueprint functions for state tree.
---@class UStateTreeFunctionLibrary : UBlueprintFunctionLibrary
local UStateTreeFunctionLibrary = {}

---@param Reference FStateTreeReference @[out] 
---@param StateTree UStateTree
function UStateTreeFunctionLibrary.SetStateTree(Reference, StateTree) end

---@param StateTree UStateTree
---@return FStateTreeReference
function UStateTreeFunctionLibrary.MakeStateTreeReference(StateTree) end

---@param Reference FStateTreeReference @[out] 
---@param PropertyID FGuid
---@param NewValue integer
function UStateTreeFunctionLibrary.K2_SetParametersProperty(Reference, PropertyID, NewValue) end

---@param Reference FStateTreeReference
---@param PropertyID FGuid
---@param ReturnValue integer @[out] 
function UStateTreeFunctionLibrary.K2_GetParametersProperty(Reference, PropertyID, ReturnValue) end

