---@class UNiagaraNodeUsageSelector : UNiagaraNodeWithDynamicPins
---@field public OutputVars TArray<FNiagaraVariable>
---@field public OutputVarGuids TArray<FGuid>
---@field public SelectorGuid FGuid
---@field protected NumOptionsPerVariable integer @Primarily used for integer options where the number of entries is not derivable from something else (i.e. enum or bool which clearly define entries)
local UNiagaraNodeUsageSelector = {}

