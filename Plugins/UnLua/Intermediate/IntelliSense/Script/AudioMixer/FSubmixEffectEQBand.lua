---A multiband EQ submix effect.
---@class FSubmixEffectEQBand
---@field public Frequency number @Cutoff frequency (in hz) of the EQ band
---@field public Bandwidth number @The bandwidth, in octaves, of the EQ band
---@field public GainDb number @The gain in decibels of the EQ band
---@field public bEnabled boolean @Whether or not the EQ band is enabled
local FSubmixEffectEQBand = {}
