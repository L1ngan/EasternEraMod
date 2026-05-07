---Multiply Particle.Scale by the module calculated scale value
---This can be a constant, random or curve indexed by Particle.NormalizedAge
---@class UNiagaraStatelessModule_ScaleMeshSize : UNiagaraStatelessModule
---@field public ScaleDistribution FNiagaraDistributionVector3
---@field public ScaleCurveRange FNiagaraParameterBindingWithValue
local UNiagaraStatelessModule_ScaleMeshSize = {}

---@return boolean
function UNiagaraStatelessModule_ScaleMeshSize:UseScaleCurveRange() end

