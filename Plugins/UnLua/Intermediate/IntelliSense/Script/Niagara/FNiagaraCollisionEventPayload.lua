---Type struct for collision event payloads; collision event data set is based on this
---TODO: figure out how we can pipe attributes from the colliding particle in here
---@class FNiagaraCollisionEventPayload
---@field public CollisionPos FVector
---@field public CollisionNormal FVector
---@field public CollisionVelocity FVector
---@field public ParticleIndex integer
---@field public PhysicalMaterialIndex integer
local FNiagaraCollisionEventPayload = {}
