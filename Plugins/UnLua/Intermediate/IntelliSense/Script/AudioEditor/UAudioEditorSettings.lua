---@class UAudioEditorSettings : UDeveloperSettings
---@field protected bUseAudioAttenuation boolean @Whether or not should Audio Attenuation be used by default, for Non-Game Worlds
---@field public bPinSoundCueInAssetMenu boolean @Whether to pin the Sound Cue asset type when creating new assets. Requires editor restart to take effect.
---@field public bPinSoundCueTemplateInAssetMenu boolean @Whether to pin the Sound Cue Template asset type when creating new assets. Requires editor restart to take effect.
---@field public bPinSoundAttenuationInAssetMenu boolean @Whether to pin the Sound Attenuation asset type when creating new assets. Requires editor restart to take effect.
---@field public bPinSoundConcurrencyInAssetMenu boolean @Whether to pin the Sound Concurrency asset type when creating new assets. Requires editor restart to take effect.
---@field public AudioMixerModuleName string @The device id of the currently selected audio output device. Requires editor restart to take effect
---@field public bUseSystemDevice boolean @Use current audio playback device selected in the operating system.
---@field public AudioOutputDeviceId string @The device id of the currently selected audio output device.
---@field public AudioMixerPlatforms TArray<FAudioPlatform> @Array of available audio platforms.
local UAudioEditorSettings = {}

