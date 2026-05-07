---@class FNiagaraInputExposureOptions
---@field public bExposed boolean @If true then this is exposed as an input to it's caller - turning this off makes sense when the input is defined in a function script and should not be visible to the caller.
---@field public bRequired boolean @If true then this input is required to be set by the caller. For optional values (e.g. values behind an edit condition) this can be set to false, so the translator uses the default value instead.
---@field public bCanAutoBind boolean @If this input can auto-bind to system parameters and emitter attributes. Will never auto bind to custom parameters.
---@field public bHidden boolean @If true then this input will be shown in the advanced pin section of the caller node. Only works in function scripts, does nothing in dynamic inputs or module scripts.
local FNiagaraInputExposureOptions = {}
