---Allows us to replace a specific device profile usage condition in all NiagaraPlatformSets.
---Helpful when dealing with changes to device profile structure.
---@class FNiagaraPlatformSetRedirect
---@field public ProfileNames TArray<string> @The names of any device profile entry that will apply this redirect.
---@field public Mode ENiagaraDeviceProfileRedirectMode
---@field public RedirectProfileName string @When in Device Profile mode, the name of the device profile to redirect to.
---@field public CVarConditionEnabled FNiagaraPlatformSetCVarCondition @When in CVar mode, the CVar condition to replace this device profile entry with when the profile entry is in the Enabled state.
---@field public CVarConditionDisabled FNiagaraPlatformSetCVarCondition @When in CVar mode, the CVar condition to replace this device profile entry with when the profile entry is in the Disabled state.
local FNiagaraPlatformSetRedirect = {}
