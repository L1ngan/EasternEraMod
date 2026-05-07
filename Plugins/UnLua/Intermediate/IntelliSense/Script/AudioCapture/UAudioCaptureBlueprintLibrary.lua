---@class UAudioCaptureBlueprintLibrary : UBlueprintFunctionLibrary
local UAudioCaptureBlueprintLibrary = {}

---Gets information about all audio output devices available in the system
---@param WorldContextObject UObject
---@param OnObtainDevicesEvent Delegate
function UAudioCaptureBlueprintLibrary.GetAvailableAudioInputDevices(WorldContextObject, OnObtainDevicesEvent) end

---Returns the device info in a human readable format
---@param info FAudioInputDeviceInfo
---@return string
function UAudioCaptureBlueprintLibrary.Conv_AudioInputDeviceInfoToString(info) end

