---A predefined force-feedback effect to be played on a controller
---@class UForceFeedbackEffect : UObject
---@field public ChannelDetails TArray<FForceFeedbackChannelDetails>
---@field public PerDeviceOverrides TMap<string, FForceFeedbackEffectOverridenChannelDetails> @A map of platform name -> ForceFeedback channel details
---@field public DeviceProperties TArray<UInputDeviceProperty> @A map of input device properties that we want to set while this effect is playing
---@field public Duration number @Duration of force feedback pattern in seconds.
local UForceFeedbackEffect = {}

