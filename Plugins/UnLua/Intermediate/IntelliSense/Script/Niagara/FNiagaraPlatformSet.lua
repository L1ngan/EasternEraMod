---@class FNiagaraPlatformSet
---@field public DeviceProfileStates TArray<FNiagaraDeviceProfileStateEntry> @States of specific device profiles we've set.
---@field public CVarConditions TArray<FNiagaraPlatformSetCVarCondition> @Set of CVars values we require for this platform set to be enabled. If any of the linked CVars don't have the required values then this platform set will not be enabled.
---@field public QualityLevelMask integer @Mask defining which effects qualities this set matches.
local FNiagaraPlatformSet = {}
