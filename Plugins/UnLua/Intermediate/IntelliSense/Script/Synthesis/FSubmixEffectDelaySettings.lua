---FSubmixEffectDelaySettings
---UStruct used to define user-exposed params for use with your effect.
---@class FSubmixEffectDelaySettings
---@field public MaximumDelayLength number @Maximum possible length for a delay, in milliseconds. Changing this at runtime will reset the effect.
---@field public InterpolationTime number @Number of milliseconds over which a tap will reach it's set length and gain. Smaller values are more responsive, while larger values will make pitching less dramatic.
---@field public DelayLength number @Number of milliseconds of delay.  Caps at max delay at runtime.
local FSubmixEffectDelaySettings = {}
