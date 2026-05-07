---Provides linear resistance to a trigger while it is being pressed between a start and end value
---NOTE: This property has platform specific implementations and may behave differently per platform.
---See the docs for more details on each platform.
---@class UInputDeviceTriggerResistanceProperty : UInputDeviceTriggerEffect
---@field protected TriggerData FDeviceTriggerTriggerResistanceData
---@field protected DeviceOverrideData TMap<string, FDeviceTriggerTriggerResistanceData> @A map of device specific color data. If no overrides are specified, the Default hardware data will be used
local UInputDeviceTriggerResistanceProperty = {}

