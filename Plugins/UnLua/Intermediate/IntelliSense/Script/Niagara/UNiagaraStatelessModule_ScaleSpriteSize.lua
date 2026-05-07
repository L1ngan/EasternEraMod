---Multiply Particle.SpriteSize by the module calculated scale value
---This can be a constant, random or curve indexed by Particle.NormalizedAge
---@class UNiagaraStatelessModule_ScaleSpriteSize : UNiagaraStatelessModule
---@field public ScaleDistribution FNiagaraDistributionVector2
---@field public ScaleCurveRange FNiagaraParameterBindingWithValue
local UNiagaraStatelessModule_ScaleSpriteSize = {}

---@return boolean
function UNiagaraStatelessModule_ScaleSpriteSize:UseScaleCurveRange() end

