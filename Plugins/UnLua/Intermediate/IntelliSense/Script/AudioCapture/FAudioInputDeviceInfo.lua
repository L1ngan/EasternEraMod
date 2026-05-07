---Platform audio input device info, in a Blueprint-readable format
---@class FAudioInputDeviceInfo
---@field public DeviceName string @The name of the audio device
---@field public DeviceId string @ID of the device.
---@field public InputChannels integer @The number of channels supported by the audio device
---@field public PreferredSampleRate integer @The preferred sample rate of the audio device
---@field public bSupportsHardwareAEC boolean @Whether or not the device supports Acoustic Echo Canceling
local FAudioInputDeviceInfo = {}
