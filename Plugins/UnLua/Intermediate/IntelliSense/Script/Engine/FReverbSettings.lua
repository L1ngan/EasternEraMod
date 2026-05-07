---Struct encapsulating settings for reverb effects.
---@class FReverbSettings
---@field public bApplyReverb boolean @Whether to apply the reverb settings below.
---@field public ReverbEffect UReverbEffect @The reverb asset to employ.
---@field public ReverbPluginEffect USoundEffectSubmixPreset @This is used to apply plugin-specific settings when a Reverb Plugin is being used.
---@field public Volume number @Volume level of the reverb effect.
---@field public FadeTime number @Time to fade from the current reverb settings into this setting, in seconds.
local FReverbSettings = {}
