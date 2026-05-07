---This validation rule is for ribbon renderers to ensure they are not used in situations that can cause compatability or performance issues.
---i.e. Don't use a ribbon renderer with a GPU emitter / enable GPU ribbon init on lower end devices.
---@class UNiagaraValidationRule_RibbonRenderer : UNiagaraValidationRule
---@field public Severity ENiagaraValidationSeverity
---@field public bFailIfUsedByGPUSimulation boolean @When enable validation will fail if used by a GPU emitter.
---@field public bFailIfUsedByGPUInit boolean @When enable validation will fail if used by a CPU emitter and GPU init is enabled on the renderer.
---@field public Platforms FNiagaraPlatformSet
local UNiagaraValidationRule_RibbonRenderer = {}

