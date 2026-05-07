---Records necessary information to verify that this will link properly and trace where that linkage dependency exists.
---@class FNiagaraCompileDependency
---@field public LinkerErrorMessage string @The message itself
---@field public NodeGuid FGuid @The node guid that generated the compile event
---@field public PinGuid FGuid @The pin persistent id that generated the compile event
---@field public StackGuids TArray<FGuid> @The compile stack frame of node id's
---@field public DependentVariable FNiagaraVariableBase @The variable we are dependent on.
---@field public bDependentVariableFromCustomIterationNamespace boolean
local FNiagaraCompileDependency = {}
