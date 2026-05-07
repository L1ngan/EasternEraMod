---A recording source that records microphone audio
---@class UTakeRecorderMicrophoneAudioSource : UTakeRecorderMicrophoneAudioSourceSettings
---@field public AudioGain number @Gain in decibels to apply to recorded audio
---@field public bReplaceRecordedAudio boolean @Replace existing recorded audio with any newly recorded audio
---@field public AudioChannel FAudioInputDeviceChannelProperty @The audio device to use for this microphone source
local UTakeRecorderMicrophoneAudioSource = {}

