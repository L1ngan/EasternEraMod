---A DamageType is intended to define and describe a particular form of damage and to provide an avenue
---for customizing responses to damage from various sources.
---For example, a game could make a DamageType_Fire set it up to ignite the damaged actor.
---DamageTypes are never instanced and should be treated as immutable data holders with static code
---functionality.  They should never be stateful.
---@class UDamageType : UObject
---@field public bCausedByWorld boolean @True if this damagetype is caused by the world (falling off level, into lava, etc).
---@field public bScaleMomentumByMass boolean @True to scale imparted momentum by the receiving pawn's mass for pawns using character movement
---@field public bRadialDamageVelChange boolean @When applying radial impulses, whether to treat as impulse or velocity change.
---@field public DamageImpulse number @The magnitude of impulse to apply to the Actors damaged by this type.
---@field public DestructibleImpulse number @How large the impulse should be applied to destructible meshes
---@field public DestructibleDamageSpreadScale number @How much the damage spreads on a destructible mesh
---@field public DamageFalloff number @Damage fall-off for radius damage (exponent).  Default 1.0=linear, 2.0=square of distance, etc.
local UDamageType = {}

