---Can be used to override selected parameters from a Niagara parameter collection with another value.
---The values in the parameter collection instance can be set from Blueprint or C++, same as the regular parameter collection.
---@class UNiagaraParameterCollectionInstance : UObject
---@field public Collection UNiagaraParameterCollection @TODO: Abstract to some interface to allow a hierarchy like UMaterialInstance?
---@field public OverridenParameters TArray<FNiagaraVariable> @When editing instances, we must track which parameters are overridden so we can pull in any changes to the default.
---@field private ParameterStorage FNiagaraParameterStore
---@field private SourceMaterialCollectionInstance UMaterialParameterCollectionInstance
local UNiagaraParameterCollectionInstance = {}

---@param InVariableName string
---@param InValue FVector
function UNiagaraParameterCollectionInstance:SetVectorParameter(InVariableName, InValue) end

---TODO[mg]: add position setter for LWC
---@param InVariableName string
---@param InValue FVector4
function UNiagaraParameterCollectionInstance:SetVector4Parameter(InVariableName, InValue) end

---@param InVariableName string
---@param InValue FVector2D
function UNiagaraParameterCollectionInstance:SetVector2DParameter(InVariableName, InValue) end

---@param InVariableName string
---@param InValue FQuat
function UNiagaraParameterCollectionInstance:SetQuatParameter(InVariableName, InValue) end

---@param InVariableName string
---@param InValue integer
function UNiagaraParameterCollectionInstance:SetIntParameter(InVariableName, InValue) end

---@param InVariableName string
---@param InValue number
function UNiagaraParameterCollectionInstance:SetFloatParameter(InVariableName, InValue) end

---@param InVariableName string
---@param InValue FLinearColor
function UNiagaraParameterCollectionInstance:SetColorParameter(InVariableName, InValue) end

---@param InVariableName string
---@param InValue boolean
function UNiagaraParameterCollectionInstance:SetBoolParameter(InVariableName, InValue) end

---@param InVariableName string
---@return FVector
function UNiagaraParameterCollectionInstance:GetVectorParameter(InVariableName) end

---@param InVariableName string
---@return FVector4
function UNiagaraParameterCollectionInstance:GetVector4Parameter(InVariableName) end

---@param InVariableName string
---@return FVector2D
function UNiagaraParameterCollectionInstance:GetVector2DParameter(InVariableName) end

---@param InVariableName string
---@return FQuat
function UNiagaraParameterCollectionInstance:GetQuatParameter(InVariableName) end

---@param InVariableName string
---@return integer
function UNiagaraParameterCollectionInstance:GetIntParameter(InVariableName) end

---@param InVariableName string
---@return number
function UNiagaraParameterCollectionInstance:GetFloatParameter(InVariableName) end

---@param InVariableName string
---@return FLinearColor
function UNiagaraParameterCollectionInstance:GetColorParameter(InVariableName) end

---Accessors from Blueprint. For now just exposing common types but ideally we can expose any somehow in future.
---@param InVariableName string
---@return boolean
function UNiagaraParameterCollectionInstance:GetBoolParameter(InVariableName) end

