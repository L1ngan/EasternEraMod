---@class FNiagaraParameterBinding
---@field public ResolvedParameter FNiagaraVariableBase @Parameter binding used by the runtime fully resolved, i.e. NamedEmitter.Parameter
---@field public AliasedParameter FNiagaraVariableBase @Parameter binding used in the UI, i.e. Emitter.Parameter
---@field protected AllowedDataInterfaces TArray<TSubclassOf<UObject>> @List of data interfaces we can bind to, matches with a valid Cast<>.
---@field protected AllowedObjects TArray<TSubclassOf<UObject>> @List of UObject types we can bind to, matches with a valid Cast<>.
---@field protected AllowedInterfaces TArray<TSubclassOf<UObject>> @List of Interfaces to look for on Object & DataInterfaces
local FNiagaraParameterBinding = {}
