---@class FHairCollisionConstraint
---@field public SolveCollision boolean @Enable the solve of the collision constraint during the xpbd loop
---@field public ProjectCollision boolean @Enable ther projection of the collision constraint after the xpbd loop
---@field public StaticFriction number @Static friction used for collision against the physics asset
---@field public KineticFriction number @Kinetic friction used for collision against the physics asset
---@field public StrandsViscosity number @Viscosity parameter between 0 and 1 that will be used for self collision
---@field public GridDimension FIntVector @Dimension of the grid used to compute the viscosity force
---@field public CollisionRadius number @Radius that will be used for the collision detection against the physics asset
---@field public RadiusScale FRuntimeFloatCurve @This curve determines how much the collision radius will be scaled along each strand.   The X axis range is [0,1], 0 mapping the root and 1 the tip
local FHairCollisionConstraint = {}
