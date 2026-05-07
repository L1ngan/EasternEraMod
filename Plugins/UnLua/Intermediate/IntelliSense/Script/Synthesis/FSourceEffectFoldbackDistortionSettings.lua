---@class FSourceEffectFoldbackDistortionSettings
---@field public InputGainDb number @The amount of gain to add to input to allow forcing the triggering of the threshold
---@field public ThresholdDb number @If the audio amplitude is higher than this, it will fold back
---@field public OutputGainDb number @The amount of gain to apply to the output
local FSourceEffectFoldbackDistortionSettings = {}
