---@class FNiagaraVariable : FNiagaraVariableBase
---@field private VarData TArray<integer> @This gets serialized but do we need to worry about endianness doing things like this? If not, where does that get handled? TODO: Remove storage here entirely and move everything to an FNiagaraParameterStore.
local FNiagaraVariable = {}
