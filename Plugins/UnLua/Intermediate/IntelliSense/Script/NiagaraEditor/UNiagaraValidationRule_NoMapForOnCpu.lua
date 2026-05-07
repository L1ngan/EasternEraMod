---This validation rule checks that map for nodes are not used with cpu scripts (as they only work on gpu).
---@class UNiagaraValidationRule_NoMapForOnCpu : UNiagaraValidationRule
---@field public Severity ENiagaraValidationSeverity @How do we want to report the error in the stack
local UNiagaraValidationRule_NoMapForOnCpu = {}

