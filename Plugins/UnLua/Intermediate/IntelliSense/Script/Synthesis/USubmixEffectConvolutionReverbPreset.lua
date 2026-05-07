---@class USubmixEffectConvolutionReverbPreset : USoundEffectSubmixPreset
---@field public ImpulseResponse UAudioImpulseResponse @The impulse response used for convolution.
---@field public Settings FSubmixEffectConvolutionReverbSettings @ConvolutionReverbPreset Preset Settings.
---@field public BlockSize ESubmixEffectConvolutionReverbBlockSize @Set the internal block size. This can effect latency and performance. Higher values will result in lower CPU costs while lower values will result higher CPU costs. Latency may be affected depending on the interplay between audio engines buffer sizes and this effects block size. Generally, higher values result in higher latency, and lower values result in lower latency.
---@field public bEnableHardwareAcceleration boolean @Opt into hardware acceleration of the convolution reverb (if available)
local USubmixEffectConvolutionReverbPreset = {}

---Set the convolution reverb settings
---@param InSettings FSubmixEffectConvolutionReverbSettings
function USubmixEffectConvolutionReverbPreset:SetSettings(InSettings) end

---Set the convolution reverb impulse response
---@param InImpulseResponse UAudioImpulseResponse
function USubmixEffectConvolutionReverbPreset:SetImpulseResponse(InImpulseResponse) end

