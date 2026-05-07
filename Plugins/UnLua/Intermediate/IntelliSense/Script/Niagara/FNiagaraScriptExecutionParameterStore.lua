---Storage class containing actual runtime buffers to be used by the VM and the GPU.
---Is not the actual source for any parameter data, rather just the final place it's gathered from various other places ready for execution.
---@class FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore
---@field public ParameterSize integer @Size of the parameter data not including prev frame values or internal constants. Allows copying into previous parameter values for interpolated spawn scripts.
---@field public bInitialized boolean
local FNiagaraScriptExecutionParameterStore = {}
