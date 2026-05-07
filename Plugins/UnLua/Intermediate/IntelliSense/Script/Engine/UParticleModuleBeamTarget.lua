---@class UParticleModuleBeamTarget : UParticleModuleBeamBase
---@field public TargetMethod integer @The method flag.
---@field public TargetName string @The target point sources of each beam, when using the end point method.
---@field public Target FRawDistributionVector @Default target-point information to use if the beam method is endpoint.
---@field public bTargetAbsolute boolean @Whether to treat the as an absolute position in world space.
---@field public bLockTarget boolean @Whether to lock the Target to the life of the particle.
---@field public TargetTangentMethod integer @The method to use for the Target tangent.
---@field public TargetTangent FRawDistributionVector @The tangent for the Target point for each beam.
---@field public bLockTargetTangent boolean @Whether to lock the Target to the life of the particle.
---@field public TargetStrength FRawDistributionFloat @The strength of the tangent from the Target point for each beam.
---@field public bLockTargetStength boolean @Whether to lock the Target to the life of the particle.
---@field public LockRadius number @Default target-point information to use if the beam method is endpoint.
local UParticleModuleBeamTarget = {}

