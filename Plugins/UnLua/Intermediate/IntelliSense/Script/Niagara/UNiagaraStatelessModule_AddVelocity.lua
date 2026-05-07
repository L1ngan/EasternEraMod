---Add to the velocity applied to all particles
---@class UNiagaraStatelessModule_AddVelocity : UNiagaraStatelessModule
---@field public VelocityType ENSM_VelocityType
---@field public LinearVelocityDistribution FNiagaraDistributionRangeVector3
---@field public LinearVelocityScale FNiagaraDistributionRangeFloat
---@field public ConeVelocityDistribution FNiagaraDistributionRangeFloat
---@field public ConeRotation FRotator
---@field public ConeAngle number
---@field public InnerCone number
---@field public PointVelocityDistribution FNiagaraDistributionRangeFloat
---@field public PointOrigin FVector3f
---@field public bSpeedFalloffFromConeAxisEnabled boolean
---@field public SpeedFalloffFromConeAxis number
---@field public CoordinateSpace ENiagaraCoordinateSpace
local UNiagaraStatelessModule_AddVelocity = {}

