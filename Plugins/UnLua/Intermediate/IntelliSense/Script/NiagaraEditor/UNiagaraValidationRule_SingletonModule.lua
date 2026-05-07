---This validation rule checks that a module is only used once per emitter/system stack.
---@class UNiagaraValidationRule_SingletonModule : UNiagaraValidationRule
---@field public Severity ENiagaraValidationSeverity @How do we want to repro the error in the stack
---@field public bCheckDetailedUsageContext boolean @If true then the check is not emitter-wide, but only within the same context (e.g. particle update).
local UNiagaraValidationRule_SingletonModule = {}

