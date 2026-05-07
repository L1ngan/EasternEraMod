---@class UWaveTableBank : UObject
---@field public SampleMode EWaveTableSamplingMode @Sampling mode used for the bank.
---@field public Resolution EWaveTableResolution @Number of samples cached for each entry in the given bank.
---@field public SampleRate integer @Number of samples cached for each entry in the given bank.
---@field public bBipolar boolean @Determines if output from curve/wavetable are to be clamped between [-1.0f, 1.0f] (i.e. for waveform generation, oscillation, etc.) or [0.0f, 1.0f] (i.e. for enveloping) when sampling curve/wavetable
---@field public WaveTableSizeMB number @Sum total size of all WaveTable data within the given bank
---@field public Entries TArray<FWaveTableBankEntry>
local UWaveTableBank = {}

