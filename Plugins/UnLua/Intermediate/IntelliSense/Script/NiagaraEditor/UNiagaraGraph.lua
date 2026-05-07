---@class UNiagaraGraph : UEdGraph
---@field private ChangeId FGuid @The current change identifier for this graph overall. Used to sync status with UNiagaraScripts.
---@field private ForceRebuildId FGuid @Internal value used to invalidate a DDC key for the script no matter what.
---@field private LastBuiltTraversalDataChangeId FGuid
---@field private LastBuiltScriptVersionId FGuid @The script version that was used when the cached CompileId was generated, a change     in script version will invalidate the cached CompileId and a new one will be generated.     Will be initialized to an invalid guid but it won't be used until a valid script has been     assigned (as dictated by bHasValidLastBuiltScriptVersionId)
---@field private CachedUsageInfo TArray<FNiagaraGraphScriptUsageInfo>
---@field private VariableToScriptVariable TMap<FNiagaraVariable, UNiagaraScriptVariable> @Storage of variables defined for use with this graph.
---@field private ParameterHierarchyRoot UHierarchyRoot
---@field private ParameterToReferencesMap TMap<FNiagaraVariable, FNiagaraGraphParameterReferenceCollection> @A map of parameters in the graph to their referencers.
---@field private CompilationScriptVariables TArray<FNiagaraScriptVariableData>
---@field private bHasValidLastBuiltScriptVersionId boolean @Used in conjunction with LastBuiltScriptVersionId to note that we've got a valid script Id stored.     Works around things without having to add a custom version.
local UNiagaraGraph = {}

