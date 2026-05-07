---Applies a modifier to mesh scale based on the velocity of the particle
---@class UNiagaraStatelessModule_ScaleMeshSizeBySpeed : UNiagaraStatelessModule
---@field public VelocityThreshold FNiagaraDistributionRangeFloat
---@field public MinScaleFactor FNiagaraDistributionRangeVector3
---@field public MaxScaleFactor FNiagaraDistributionRangeVector3
---@field public bSampleScaleFactorByCurve boolean
---@field public SampleFactorCurve FNiagaraDistributionFloat
local UNiagaraStatelessModule_ScaleMeshSizeBySpeed = {}

