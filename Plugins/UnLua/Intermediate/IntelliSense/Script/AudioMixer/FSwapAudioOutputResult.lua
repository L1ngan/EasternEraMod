---Out structure for use with AudioMixerBlueprintLibrary::SwapAudioOutputDevice
---@class FSwapAudioOutputResult
---@field public CurrentDeviceId string @ID of the currently set device.  This is the device at the time of the call, NOT the resulting deviceId
---@field public RequestedDeviceId string @ID of the requested device.
---@field public Result ESwapAudioOutputDeviceResultState @Result of the call
local FSwapAudioOutputResult = {}
