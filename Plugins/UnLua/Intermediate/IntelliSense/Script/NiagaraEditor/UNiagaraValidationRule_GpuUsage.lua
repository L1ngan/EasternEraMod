---This validation rule that can be used to ban GPU usage on the provided platforms or warn that GPU emitters might now work correctly.
---@class UNiagaraValidationRule_GpuUsage : UNiagaraValidationRule
---@field public Severity ENiagaraValidationSeverity
---@field public Platforms FNiagaraPlatformSet
local UNiagaraValidationRule_GpuUsage = {}

