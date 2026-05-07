---UAudioImpulseResponse
---UAsset used to represent Imported Impulse Responses
---@class UAudioImpulseResponse : UObject
---@field public ImpulseResponse TArray<number> @The interleaved audio samples used in convolution.
---@field public NumChannels integer @The number of channels in impulse response.
---@field public SampleRate integer @The original sample rate of the impulse response.
---@field public NormalizationVolumeDb number @Used to account for energy added by convolution with "loud" Impulse Responses.
---@field public bTrueStereo boolean @If true, impulse response channels are interpreted as true stereo which allows channel crosstalk. If false, impulse response channels are interpreted as independent channel impulses.
---@field public bIsEvenChannelCount boolean @Used to evaluate whether TrueStereo should be editable
local UAudioImpulseResponse = {}

