---Asset containing a collection of global parameters usable by Niagara. Similar to Material parameter collections,
---any number of Niagara assets may reference attributes from this parameter collection and will get new values when they are changed.
---A Niagara parameter collection can reference a Material parameter collection, so it is in sync with the values provided to a Material.
---To use a value from a parameter collection in a Niagara system or emitter, add a reference to it from the Parameters panel (in the Niagara Parameter Collection section).
---@class UNiagaraParameterCollection : UObject
---@field protected Namespace string @Namespace for this parameter collection. Is enforced to be unique across all parameter collections.
---@field protected Parameters TArray<FNiagaraVariable>
---@field protected SourceMaterialCollection UMaterialParameterCollection @Optional set of MPC that can drive scalar and vector parameters
---@field protected DefaultInstance UNiagaraParameterCollectionInstance
---@field protected CompileId FGuid @Used to track whenever something of note changes in this parameter collection that might invalidate a compilation downstream of a script/emitter/system.
local UNiagaraParameterCollection = {}

