---@class FHapticFeedbackDetails_Curve
---@field public Frequency FRuntimeFloatCurve @The frequency to vibrate the haptic device at.  Frequency ranges vary by device!
---@field public Amplitude FRuntimeFloatCurve @The amplitude to vibrate the haptic device at.  Amplitudes are normalized over the range [0.0, 1.0], with 1.0 being the max setting of the device
local FHapticFeedbackDetails_Curve = {}
