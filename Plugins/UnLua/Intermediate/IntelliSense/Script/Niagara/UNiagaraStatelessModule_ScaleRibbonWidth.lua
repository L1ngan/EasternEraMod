---Multiply Particle.RibbonWidth by the module calculated scale value
---This can be a constant, random or curve indexed by Particle.NormalizedAge
---@class UNiagaraStatelessModule_ScaleRibbonWidth : UNiagaraStatelessModule
---@field public ScaleDistribution FNiagaraDistributionFloat
---@field public ScaleCurveRange FNiagaraParameterBindingWithValue
local UNiagaraStatelessModule_ScaleRibbonWidth = {}

---@return boolean
function UNiagaraStatelessModule_ScaleRibbonWidth:UseScaleCurveRange() end

