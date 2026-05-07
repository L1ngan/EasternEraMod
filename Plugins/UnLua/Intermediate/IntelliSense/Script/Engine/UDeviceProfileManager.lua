---Implements a helper class that manages all profiles in the Device
---@class UDeviceProfileManager : UObject
---@field public Profiles TArray<UDeviceProfile> @Holds the collection of managed profiles.
---@field private BackupProfiles TArray<UDeviceProfile> @Cached copy of profiles at load
local UDeviceProfileManager = {}

