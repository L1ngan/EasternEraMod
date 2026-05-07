---This validation rule will check if a system uses emitters that are tagged as Deprecated using the Niagara Asset Tags.
---This is distinct from a Niagara Emitter version that is marked as deprecated, but might have a new, non-deprecated version.
---@class UNiagaraValidationRule_CheckDeprecatedEmitters : UNiagaraValidationRule
---@field public Severity ENiagaraValidationSeverity
local UNiagaraValidationRule_CheckDeprecatedEmitters = {}

