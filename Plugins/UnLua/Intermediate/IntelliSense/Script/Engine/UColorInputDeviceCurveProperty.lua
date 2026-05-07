---A property that can be used to change the color of an input device's light over time with a curve
---NOTE: This property has platform specific implementations and may behave differently per platform.
---See the docs for more details on each platform.
---@class UColorInputDeviceCurveProperty : UInputDeviceProperty
---@field protected ColorData FDeviceColorCurveData @Default color data that will be used by default. Device Specific overrides will be used when the current input device matches
---@field protected DeviceOverrideData TMap<string, FDeviceColorCurveData> @A map of device specific color data. If no overrides are specified, the Default hardware data will be used
local UColorInputDeviceCurveProperty = {}

