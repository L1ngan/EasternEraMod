---The source from which a script execution state was set. Used to allow scalability etc to change the state but only if the state has not been defined by something with higher precedence.
---If this changes, all scripts must be recompiled by bumping the NiagaraCustomVersion
---@class ENiagaraExecutionStateSource
---@field public Scalability integer
---@field public Internal integer
---@field public Owner integer
---@field public InternalCompletion integer
---@field public ENiagaraExecutionStateSource_MAX integer
local ENiagaraExecutionStateSource = {}
