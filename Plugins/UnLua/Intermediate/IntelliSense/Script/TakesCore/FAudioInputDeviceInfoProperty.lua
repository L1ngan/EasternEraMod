---Encapsulates audio device properties which are utilized by UI facing classes such as FAudioInputDeviceProperty.
---@class FAudioInputDeviceInfoProperty
---@field public DeviceName string @User friendly name of the audio device
---@field public DeviceId string @The unique id used to identify the device
---@field public InputChannels integer @The number input channels this device supports
---@field public PreferredSampleRate integer @The preferred sample rate for this audio device
---@field public bIsDefaultDevice boolean @Boolean indicating if this device is the currently the system selected input device
local FAudioInputDeviceInfoProperty = {}
