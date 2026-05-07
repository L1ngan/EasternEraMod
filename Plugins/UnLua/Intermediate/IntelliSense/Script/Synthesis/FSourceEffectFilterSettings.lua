---@class FSourceEffectFilterSettings
---@field public FilterCircuit ESourceEffectFilterCircuit @The type of filter circuit to use.
---@field public FilterType ESourceEffectFilterType @The type of filter to use.
---@field public CutoffFrequency number @The filter cutoff frequency
---@field public FilterQ number @The filter resonance.
---@field public AudioBusModulation TArray<FSourceEffectFilterAudioBusModulationSettings> @Audio bus settings to use to modulate the filter frequency cutoff (auto-wah) with arbitrary audio from an audio bus
local FSourceEffectFilterSettings = {}
