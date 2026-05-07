---@class UDeviceProfile : UTextureLODSettings
---@field public DeviceType string @The type of this profile, I.e. IOS, Windows, PS4 etc
---@field public BaseProfileName string @The name of the parent profile of this object
---@field public bIsVisibleForAssets boolean @Some asset types can reference Device Profiles, is this profile visible to those assets.
---@field public Parent UDeviceProfile @The parent object of this profile, it is the object matching this DeviceType with the BaseProfileName
---@field public CVars TArray<string> @The collection of CVars which is set from this profile
---@field public MatchingRules TArray<FDPMatchingRulestruct> @An array of conditions to test against and fragment names to select.
local UDeviceProfile = {}

