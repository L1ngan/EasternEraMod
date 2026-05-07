---UStruct Mono Wave Table Synth Preset
---@class UMonoWaveTableSynthPreset : UObject
---@field public PresetName string @Name the preset
---@field public bLockKeyframesToGridBool boolean @Lock wavetables to evenly spaced keyframes that can be edited vertically only (will re-sample)
---@field public LockKeyframesToGrid integer @How many evenly-spaced keyframes to use when LockKeyframesToGrid is true
---@field public WaveTableResolution integer @How many samples will be taken of the curve from time = [0.0, 1.0]
---@field public WaveTable TArray<FRuntimeFloatCurve> @Wave Table Editor
---@field public bNormalizeWaveTables boolean @Normalize the WaveTable data? False will allow clipping, True will normalize the tables when sent to the synth for rendering
local UMonoWaveTableSynthPreset = {}

