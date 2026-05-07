---Per-Platform input options
---@class UInputPlatformSettings : UPlatformSettings
---@field public MaxPlatformUserCount integer @The max number of FPlatformUserId's which can be allocated on this platform. This is checked in FGenericPlatformInputDeviceMapper::AllocateNewUserId
---@field public DeviceMappingPolicy EInputDeviceMappingPolicy @The input device mapping policy controls how Human Interface Devices (HID's) are "mapped" or "assigned" to local players in your game. Depending on this policy, the creation of FPlatformUserId's and FInputDeviceId's can change. This policy is only in affect on platforms which do NOT have a managed user login or some kind of dedicated input mapping OS functionality (consoles have this).
---@field public MaxTriggerFeedbackPosition integer @The maximum position that a trigger can be set to
---@field public MaxTriggerFeedbackStrength integer @The maximum strength that trigger feedback can be set to
---@field public MaxTriggerVibrationTriggerPosition integer @The max position that a vibration trigger effect can be set to.
---@field public MaxTriggerVibrationFrequency integer @The max frequency that a trigger vibration can occur
---@field public MaxTriggerVibrationAmplitude integer @The maximum amplitude that can be set on trigger vibrations
---@field protected HardwareDevices TArray<FHardwareDeviceIdentifier> @A list of identifiable hardware devices available on this platform
local UInputPlatformSettings = {}

---Returns an array of Hardware device names from every registered platform ini.
---For use in the editor so that you can get a list of all known input devices and
---make device-specific options. For example, you can map any data type to a specific input
---device
---UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(GetOptions="Engine.InputPlatformSettings.GetAllHardwareDeviceNames"))
---TMap<FString, UFooData> DeviceSpecificMap;
---and the editor will make a nice drop down for you with all the current options that are in the settings.
---@return TArray_string_
function UInputPlatformSettings.GetAllHardwareDeviceNames() end

