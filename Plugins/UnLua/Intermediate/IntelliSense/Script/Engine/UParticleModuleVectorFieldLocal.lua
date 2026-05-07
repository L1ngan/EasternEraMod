---@class UParticleModuleVectorFieldLocal : UParticleModuleVectorFieldBase
---@field public VectorField UVectorField @Vector field asset to use.
---@field public RelativeTranslation FVector @Translation of the vector field relative to the emitter.
---@field public RelativeRotation FRotator @Rotation of the vector field relative to the emitter.
---@field public RelativeScale3D FVector @Scale of the vector field relative to the emitter.
---@field public Intensity number @Intensity of the local vector field.
---@field public Tightness number @Tightness tweak value: 0: Force 1: Velocity.
---@field public bIgnoreComponentTransform boolean @Ignore component transform.
---@field public bTileX boolean @Tile vector field in x axis?
---@field public bTileY boolean @Tile vector field in y axis?
---@field public bTileZ boolean @Tile vector field in z axis?
---@field public bUseFixDT boolean @Use fix delta time in the simulation?
local UParticleModuleVectorFieldLocal = {}

