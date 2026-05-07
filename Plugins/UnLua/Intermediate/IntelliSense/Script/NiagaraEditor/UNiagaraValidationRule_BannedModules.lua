---This validation rule can ban the use of certain modules on all or a subset of platforms.
---@class UNiagaraValidationRule_BannedModules : UNiagaraValidationRule
---@field public Platforms FNiagaraPlatformSet @Platforms this validation rule will apply to.
---@field public bBanOnGpu boolean
---@field public bBanOnCpu boolean
---@field public Severity ENiagaraValidationSeverity
---@field public BannedModules TArray<UNiagaraScript>
local UNiagaraValidationRule_BannedModules = {}

