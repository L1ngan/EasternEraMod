---Sets trigger vibration
---NOTE: This property has platform specific implementations and may behave differently per platform.
---See the docs for more details on each platform.
---@class UInputDeviceTriggerVibrationProperty : UInputDeviceTriggerEffect
---@field public TriggerData FDeviceTriggerTriggerVibrationData
---@field public DeviceOverrideData TMap<string, FDeviceTriggerTriggerVibrationData> @A map of device specific color data. If no overrides are specified, the Default hardware data will be used
local UInputDeviceTriggerVibrationProperty = {}

