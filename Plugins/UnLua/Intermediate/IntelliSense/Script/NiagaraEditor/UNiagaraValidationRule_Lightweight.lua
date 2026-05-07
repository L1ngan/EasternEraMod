---Validation rule to check for lightweight usage.
---@class UNiagaraValidationRule_Lightweight : UNiagaraValidationRule
---@field public Platforms FNiagaraPlatformSet @Platforms this validation rule will apply to.
---@field public UsedWithEmitter Unknown @When set if we have an emitter present it will be flagged at this severity
---@field public UsingExperimentalModule Unknown @When set if an experimental module is found it will be flagged at this severity
local UNiagaraValidationRule_Lightweight = {}

