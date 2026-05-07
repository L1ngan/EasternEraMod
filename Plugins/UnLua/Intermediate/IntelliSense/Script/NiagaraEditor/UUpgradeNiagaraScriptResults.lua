---Wrapper class for passing results back from the version upgrade python script.
---@class UUpgradeNiagaraScriptResults : UObject
---@field public bCancelledByPythonError boolean @Whether the converter process was cancelled due to an unrecoverable error in the python script process.
---@field public OldInputs TArray<UNiagaraPythonScriptModuleInput>
---@field public NewInputs TArray<UNiagaraPythonScriptModuleInput>
---@field private DummyInput UNiagaraPythonScriptModuleInput @This is used as a placeholder object for python to interact with when a module input could not be found. Returning a nullptr instead would crash the script.
local UUpgradeNiagaraScriptResults = {}

---@param InputName string
---@param Value FVector4
function UUpgradeNiagaraScriptResults:SetVec4Input(InputName, Value) end

---@param InputName string
---@param Value FVector
function UUpgradeNiagaraScriptResults:SetVec3Input(InputName, Value) end

---@param InputName string
---@param Value FVector2D
function UUpgradeNiagaraScriptResults:SetVec2Input(InputName, Value) end

---@param InputName string
---@param Value FQuat
function UUpgradeNiagaraScriptResults:SetQuatInput(InputName, Value) end

---@param InputName string
---@param Value UNiagaraPythonScriptModuleInput
function UUpgradeNiagaraScriptResults:SetNewInput(InputName, Value) end

---@param InputName string
---@param Value string
function UUpgradeNiagaraScriptResults:SetLinkedInput(InputName, Value) end

---@param InputName string
---@param Value integer
function UUpgradeNiagaraScriptResults:SetIntInput(InputName, Value) end

---@param InputName string
---@param Value number
function UUpgradeNiagaraScriptResults:SetFloatInput(InputName, Value) end

---@param InputName string
---@param Value integer
function UUpgradeNiagaraScriptResults:SetEnumInputFromInt(InputName, Value) end

---@param InputName string
---@param Value string
function UUpgradeNiagaraScriptResults:SetEnumInput(InputName, Value) end

---@param InputName string
---@param Value FLinearColor
function UUpgradeNiagaraScriptResults:SetColorInput(InputName, Value) end

---@param InputName string
---@param Value boolean
function UUpgradeNiagaraScriptResults:SetBoolInput(InputName, Value) end

---@param InputName string
function UUpgradeNiagaraScriptResults:ResetToDefault(InputName) end

---@param InputName string
---@return UNiagaraPythonScriptModuleInput
function UUpgradeNiagaraScriptResults:GetOldInput(InputName) end

