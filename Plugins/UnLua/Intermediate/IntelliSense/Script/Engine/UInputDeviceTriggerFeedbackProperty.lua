---Sets simple trigger feedback
---NOTE: This property has platform specific implementations and may behave differently per platform.
---See the docs for more details on each platform.
---@class UInputDeviceTriggerFeedbackProperty : UInputDeviceTriggerEffect
---@field public TriggerData FDeviceTriggerFeedbackData @What position on the trigger that the feedback should be applied to over time (1-9)
---@field public DeviceOverrideData TMap<string, FDeviceTriggerFeedbackData> @A map of device specific color data. If no overrides are specified, the Default hardware data will be used
local UInputDeviceTriggerFeedbackProperty = {}

