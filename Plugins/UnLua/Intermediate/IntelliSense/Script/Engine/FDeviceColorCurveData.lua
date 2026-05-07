---Data required for setting the Input Device Color
---@class FDeviceColorCurveData
---@field public bEnable boolean @True if the light should be enabled at all
---@field public bResetAfterCompletion boolean @If true, the light color will be reset to "off" after the curve values are finished evaluating.
---@field public DeviceColorCurve UCurveLinearColor @The color the device light should be
local FDeviceColorCurveData = {}
