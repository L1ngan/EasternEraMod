---Wrapper class for passing results back from the version upgrade python script.
---@class UUpgradeNiagaraEmitterContext : UObject
---@field public bCancelledByPythonError boolean @Whether the converter process was cancelled due to an unrecoverable error in the python script process.
---@field public OldEmitter UNiagaraPythonEmitter
---@field public NewEmitter UNiagaraPythonEmitter
local UUpgradeNiagaraEmitterContext = {}

