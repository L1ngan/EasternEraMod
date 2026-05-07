---FSourceEffectMidSideSpreaderSettings
---This is the source effect's setting struct.
---@class FSourceEffectMidSideSpreaderSettings
---@field public SpreadAmount number @Amount of Mid/Side Spread. 0.0 is no spread, 1.0 is full wide.
---@field public InputMode EStereoChannelMode @Indicate the channel mode of the input signal
---@field public OutputMode EStereoChannelMode @Indicate the channel mode of the output signal
---@field public bEqualPower boolean @Indicate whether an equal power relationship between the mid and side channels should be maintained
local FSourceEffectMidSideSpreaderSettings = {}
