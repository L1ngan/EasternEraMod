---The manager for all platform-specific settings
---@class UPlatformSettingsManager : UObject
---@field private SettingsMap TMap<TSubclassOf<UPlatformSettings>, FPlatformSettingsInstances> @Created platform-specific settings
local UPlatformSettingsManager = {}

