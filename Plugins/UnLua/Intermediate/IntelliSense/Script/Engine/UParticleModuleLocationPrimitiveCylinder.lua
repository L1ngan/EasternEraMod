---@class UParticleModuleLocationPrimitiveCylinder : UParticleModuleLocationPrimitiveBase
---@field public RadialVelocity boolean @If true, get the particle velocity form the radial distance inside the primitive.
---@field public StartRadius FRawDistributionFloat @The radius of the cylinder.
---@field public StartHeight FRawDistributionFloat @The height of the cylinder, centered about the location.
---@field public HeightAxis integer @Determine the particle system axis that should represent the height of the cylinder. Can be one of the following:   PMLPC_HEIGHTAXIS_X - Orient the height along the particle system X-axis.   PMLPC_HEIGHTAXIS_Y - Orient the height along the particle system Y-axis.   PMLPC_HEIGHTAXIS_Z - Orient the height along the particle system Z-axis.
local UParticleModuleLocationPrimitiveCylinder = {}

