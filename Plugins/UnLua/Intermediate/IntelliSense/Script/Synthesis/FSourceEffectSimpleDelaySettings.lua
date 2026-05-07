---@class FSourceEffectSimpleDelaySettings
---@field public SpeedOfSound number @Speed of sound in meters per second when using distance-based delay
---@field public DelayAmount number @Delay amount in seconds
---@field public DryAmount number @Gain stage on dry (non-delayed signal)
---@field public WetAmount number @Gain stage on wet (delayed) signal
---@field public Feedback number @Amount to feedback into the delay line (because why not)
---@field public bDelayBasedOnDistance boolean @Whether or not to delay the audio based on the distance to the listener or use manual delay
---@field public bUseDistanceOverride boolean @Whether or not to allow the attenuation distance override value vs the distance to listener to be used for distance-based delay.
local FSourceEffectSimpleDelaySettings = {}
