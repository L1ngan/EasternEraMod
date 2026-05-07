---@class FNiagaraScriptDataInterfaceCompileInfo
---@field public Name string
---@field public UserPtrIdx integer @Index of the user pointer for this data interface.
---@field public Type FNiagaraTypeDefinition
---@field public RegisteredFunctions TArray<FNiagaraFunctionSignature>
---@field public RegisteredParameterMapRead string
---@field public RegisteredParameterMapWrite string
---@field public bIsPlaceholder boolean
---@field public SourceEmitterName string
local FNiagaraScriptDataInterfaceCompileInfo = {}
