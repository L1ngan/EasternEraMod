---@class FSourceEffectRingModulationSettings
---@field public ModulatorType ERingModulatorTypeSourceEffect @Ring modulation modulator oscillator type
---@field public Frequency number @Ring modulation frequency
---@field public Depth number @Ring modulation depth
---@field public DryLevel number @Gain for the dry signal (no ring mod)
---@field public WetLevel number @Gain for the wet signal (with ring mod)
---@field public AudioBusModulator UAudioBus @Audio bus to use to modulate the effect
local FSourceEffectRingModulationSettings = {}
