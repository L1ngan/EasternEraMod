---Wrapper for setting the value on a parameter of a UNiagaraScript, applied through a UUpgradeNiagaraScriptResults.
---@class UNiagaraPythonScriptModuleInput : UObject
---@field public Input UNiagaraClipboardFunctionInput
local UNiagaraPythonScriptModuleInput = {}

---@return boolean
function UNiagaraPythonScriptModuleInput:IsSet() end

---@return boolean
function UNiagaraPythonScriptModuleInput:IsLocalValue() end

---@return boolean
function UNiagaraPythonScriptModuleInput:IsLinkedValue() end

---@return FVector4
function UNiagaraPythonScriptModuleInput:AsVec4() end

---@return FVector
function UNiagaraPythonScriptModuleInput:AsVec3() end

---@return FVector2D
function UNiagaraPythonScriptModuleInput:AsVec2() end

---@return FQuat
function UNiagaraPythonScriptModuleInput:AsQuat() end

---@return string
function UNiagaraPythonScriptModuleInput:AsLinkedValue() end

---@return integer
function UNiagaraPythonScriptModuleInput:AsInt() end

---@return number
function UNiagaraPythonScriptModuleInput:AsFloat() end

---@return string
function UNiagaraPythonScriptModuleInput:AsEnum() end

---@return FLinearColor
function UNiagaraPythonScriptModuleInput:AsColor() end

---@return boolean
function UNiagaraPythonScriptModuleInput:AsBool() end

