---@class UResonanceAudioSettings : UObject
---@field public OutputSubmix FSoftObjectPath @Reference to submix where reverb plugin audio is routed.
---@field public QualityMode ERaQualityMode @Global Quality mode to use for directional sound sources.
---@field public GlobalReverbPreset FSoftObjectPath @Default settings for global reverb: This is overridden when a player enters Audio Volumes.
---@field public GlobalSourcePreset FSoftObjectPath @Default settings for global source settings
local UResonanceAudioSettings = {}

