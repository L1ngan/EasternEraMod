---Struct to determine dynamic submix send data for use with audio volumes.
---@class FAudioVolumeSubmixSendSettings
---@field public ListenerLocationState EAudioVolumeLocationState @The state the listener needs to be in, relative to the audio volume, for this submix send list to be used for a given sound
---@field public SubmixSends TArray<FSoundSubmixSendInfo> @Submix send array for sounds that are in the ListenerLocationState at the same time as the listener
local FAudioVolumeSubmixSendSettings = {}
