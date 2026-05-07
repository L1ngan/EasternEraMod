---This class exposes the audio input device list via the project settings details. It does this in
--- conjunction with FAudioInputDevicePropertyCustomization. It also manages the IAudioCaptureEditor
--- object which handles the low level audio device recording.
---@class UTakeRecorderMicrophoneAudioManager : UTakeRecorderAudioInputSettings
---@field public AudioInputDevice FAudioInputDeviceProperty @The audio device to use for this microphone source
local UTakeRecorderMicrophoneAudioManager = {}

