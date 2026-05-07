---Data Interface allowing sampling of recent audio spectrum.
---@class UNiagaraDataInterfaceAudioSpectrum : UNiagaraDataInterfaceAudioSubmix
---@field public Resolution integer @The number of spectrum samples to pass to the GPU
---@field public MinimumFrequency number @The minimum frequency represented in the spectrum.
---@field public MaximumFrequency number @The maximum frequency represented in the spectrum.
---@field public NoiseFloorDb number @The decibel level considered as silence. This is used to scale the output of the spectrum.
local UNiagaraDataInterfaceAudioSpectrum = {}

