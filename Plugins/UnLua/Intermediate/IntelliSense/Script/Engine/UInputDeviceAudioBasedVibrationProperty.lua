---Plays a sound to an input device's speaker. On platforms that support it, this sound will be played
---in the form of a vibration where the left and right audio channels represent the left and right side
---of the controller.
---@class UInputDeviceAudioBasedVibrationProperty : UInputDeviceProperty
---@field public Data FAudioBasedVibrationData
---@field public DeviceOverrideData TMap<string, FAudioBasedVibrationData> @A map of device specific color data. If no overrides are specified, the Default hardware data will be used
local UInputDeviceAudioBasedVibrationProperty = {}

