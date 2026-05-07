---The frequency of the advected noise pattern.
---
---Constant (2 Field Samples):
---Provides a frequency input that should be set once and NOT animated.
---
---Varying (4 Field Samples):
---Provides a blend between a minimum and maximum frequency.2 octaves of noise will be picked between those frequencies and linearly blended between.
---Varying can be animated but care should be taken to keep the blend value of particles in close proximity similar to ensure a smooth blend between the frequencies.
---@class ENiagaraWindTurbulenceFrequencyMode
---@field public NewEnumerator0 integer
---@field public NewEnumerator1 integer
---@field public ENiagaraWindTurbulenceFrequencyMode_MAX integer
local ENiagaraWindTurbulenceFrequencyMode = {}
