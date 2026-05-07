---Encapsulates the array of audio input devices which is populated by UTakeRecorderMicrophoneAudioManager and
---utilized by the audio input device list in FAudioInputDevicePropertyCustomization.
---@class FAudioInputDeviceProperty
---@field public bUseSystemDefaultAudioDevice boolean @Boolean indicating if the system selects audio device should be used or to use the selected device from the details panel
---@field public DeviceInfoArray TArray<FAudioInputDeviceInfoProperty> @Holds device information for each of the audio devices available on this system.
---@field public DeviceId string @The unique id of the currently selected audio device
---@field public AudioInputBufferSize integer @The desired buffer size used for audio callbacks during record
local FAudioInputDeviceProperty = {}
