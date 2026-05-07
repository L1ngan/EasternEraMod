---@class FSourceEffectEQBand
---@field public Frequency number @The cutoff frequency of the band
---@field public Bandwidth number @The bandwidth (in octaves) of the band
---@field public GainDb number @The gain in decibels to apply to the eq band
---@field public bEnabled boolean @Whether or not the band is enabled. Allows changing bands on the fly.
local FSourceEffectEQBand = {}
