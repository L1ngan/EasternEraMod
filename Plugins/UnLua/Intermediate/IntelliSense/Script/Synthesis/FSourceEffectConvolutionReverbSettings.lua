---@class FSourceEffectConvolutionReverbSettings
---@field public NormalizationVolumeDb number @Used to account for energy added by convolution with "loud" Impulse Responses.        * This value is not directly editable in the editor because it is copied from the        * associated UAudioImpulseResponse.
---@field public WetVolumeDb number @Controls how much of the wet signal is mixed into the output, in Decibels
---@field public DryVolumeDb number @Controls how much of the dry signal is mixed into the output, in Decibels
---@field public bBypass boolean @If true, input audio is directly routed to output audio with applying any effect.
local FSourceEffectConvolutionReverbSettings = {}
