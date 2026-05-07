---@class FGeometryCollectionCollisionTypeData
---@field public CollisionType ECollisionTypeEnum @*  CollisionType defines how to initialize the rigid collision structures.
---@field public ImplicitType EImplicitTypeEnum @*  CollisionType defines how to initialize the rigid collision structures.
---@field public LevelSet FGeometryCollectionLevelSetData @*  LevelSet Resolution data for rasterization.
---@field public CollisionParticles FGeometryCollectionCollisionParticleData @*  Collision Particle data for surface samples during Particle-LevelSet collisions.
---@field public CollisionObjectReductionPercentage number @*  Uniform scale on the collision body. (def: 0)
---@field public CollisionMarginFraction number @A collision margin is a fraction of size used by some boxes and convex shapes to improve collision detection results. The core geometry of shapes that support a margin are reduced in size by the margin, and the margin is added back on during collision detection. The net result is a shape of the same size but with rounded corners.
local FGeometryCollectionCollisionTypeData = {}
