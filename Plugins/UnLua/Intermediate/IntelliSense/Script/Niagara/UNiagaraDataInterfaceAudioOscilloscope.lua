---Data Interface allowing sampling of recent audio data.
---@class UNiagaraDataInterfaceAudioOscilloscope : UNiagaraDataInterface
---@field public Submix USoundSubmix
---@field public Resolution integer @The number of samples of audio to pass to the GPU. Audio will be resampled to fit this resolution. Increasing this number will increase the resolution of the waveform, but will also increase usage of the GPU memory bus, potentially causing issues across the application.
---@field public ScopeInMilliseconds number @The number of milliseconds of audio to show.
local UNiagaraDataInterfaceAudioOscilloscope = {}

