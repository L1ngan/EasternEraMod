---@class FHairSimulationConstraints
---@field public BendDamping number @Damping for the bend constraint between 0 and 1
---@field public BendStiffness number @Stiffness for the bend constraint in GPa
---@field public StretchDamping number @Damping for the stretch constraint between 0 and 1
---@field public StretchStiffness number @Stiffness for the stretch constraint in GPa
---@field public StaticFriction number @Static friction used for collision against the physics asset
---@field public KineticFriction number @Kinetic friction used for collision against the physics asset
---@field public StrandsViscosity number @Viscosity parameter between 0 and 1 that will be used for self collision
---@field public CollisionRadius number @Radius that will be used for the collision detection against the physics asset
local FHairSimulationConstraints = {}
