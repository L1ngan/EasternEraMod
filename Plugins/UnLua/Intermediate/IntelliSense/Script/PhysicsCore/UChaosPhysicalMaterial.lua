---Physical materials are used to define the response of a physical object when
---interacting dynamically with the world.
---@class UChaosPhysicalMaterial : UObject
---@field public Friction number @Friction value of a surface in motion, controls how easily things can slide on this surface (0 is frictionless, higher values increase the amount of friction)
---@field public StaticFriction number @Friction value of surface at rest, controls how easily things can slide on this surface (0 is frictionless, higher values increase the amount of friction)
---@field public Restitution number @Restitution or 'bounciness' of this surface, between 0 (no bounce) and 1 (outgoing velocity is same as incoming).
---@field public LinearEtherDrag number @Uniform linear ether drag, the resistance a body experiences to its translation.
---@field public AngularEtherDrag number @Uniform angular ether drag, the resistance a body experiences to its rotation.
---@field public SleepingLinearVelocityThreshold number @How much to scale the damage threshold by on any destructible we are applied to
---@field public SleepingAngularVelocityThreshold number @How much to scale the damage threshold by on any destructible we are applied to
local UChaosPhysicalMaterial = {}

