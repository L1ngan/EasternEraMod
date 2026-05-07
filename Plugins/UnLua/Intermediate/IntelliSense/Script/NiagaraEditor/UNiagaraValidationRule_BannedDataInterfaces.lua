---This validation rule can ban the use of certain data interfaces on all or a subset of platforms.
---@class UNiagaraValidationRule_BannedDataInterfaces : UNiagaraValidationRule
---@field public Severity ENiagaraValidationSeverity
---@field public bBanOnGpu boolean
---@field public bBanOnCpu boolean
---@field public Platforms FNiagaraPlatformSet
---@field public BannedDataInterfaces TArray<TSubclassOf<UNiagaraDataInterface>>
local UNiagaraValidationRule_BannedDataInterfaces = {}

