---This validation rule can ban the use of certain renderers on all or a subset of platforms.
---@class UNiagaraValidationRule_BannedRenderers : UNiagaraValidationRule
---@field public Platforms FNiagaraPlatformSet @Platforms this validation rule will apply to.
---@field public Severity ENiagaraValidationSeverity
---@field public BannedRenderers TArray<TSubclassOf<UNiagaraRendererProperties>>
local UNiagaraValidationRule_BannedRenderers = {}

