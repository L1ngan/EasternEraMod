---Hardware targeting settings, stored in default config, per-project
---@class UHardwareTargetingSettings : UObject
---@field public TargetedHardwareClass EHardwareClass @Enum specifying which class of hardware this game is targeting
---@field public AppliedTargetedHardwareClass EHardwareClass @Enum that is set to TargetedHardwareClass when the settings have been successfully applied
---@field public DefaultGraphicsPerformance EGraphicsPreset @Enum specifying a graphics preset to use for this game
---@field public AppliedDefaultGraphicsPerformance EGraphicsPreset @Enum that is set to DefaultGraphicsPerformance when the settings have been successfully applied
local UHardwareTargetingSettings = {}

