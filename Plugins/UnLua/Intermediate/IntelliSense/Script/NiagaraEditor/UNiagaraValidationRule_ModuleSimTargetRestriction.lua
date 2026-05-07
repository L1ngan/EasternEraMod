---This validation rule checks that a module is only used in emitters with the configured runtime target.
---@class UNiagaraValidationRule_ModuleSimTargetRestriction : UNiagaraValidationRule
---@field public Severity ENiagaraValidationSeverity @How do we want to report the error in the stack
---@field public SupportedSimTarget ENiagaraSimTarget
local UNiagaraValidationRule_ModuleSimTargetRestriction = {}

