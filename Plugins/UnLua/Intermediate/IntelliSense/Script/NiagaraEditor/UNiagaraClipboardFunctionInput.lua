---@class UNiagaraClipboardFunctionInput : UObject
---@field public InputName string
---@field public InputType FNiagaraTypeDefinition
---@field public bHasEditCondition boolean
---@field public bEditConditionValue boolean
---@field public ValueMode ENiagaraClipboardFunctionInputValueMode
---@field public Local TArray<integer>
---@field public Linked FNiagaraVariableBase
---@field public Data UNiagaraDataInterface
---@field public ObjectAsset UObject
---@field public Expression string
---@field public Dynamic UNiagaraClipboardFunction
---@field public ChildrenInputs TArray<UNiagaraClipboardFunctionInput>
local UNiagaraClipboardFunctionInput = {}

