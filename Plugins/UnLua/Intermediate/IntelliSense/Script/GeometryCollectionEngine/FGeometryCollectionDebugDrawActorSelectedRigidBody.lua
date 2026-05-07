---FGeometryCollectionDebugDrawActorSelectedRigidBody
---  Structure used to select a rigid body id with a picking tool through a detail customization.
---@class FGeometryCollectionDebugDrawActorSelectedRigidBody
---@field public Id integer @Id of the selected rigid body whose to visualize debug informations. Use -1 to visualize all Geometry Collections.
---@field public Solver AChaosSolverActor @Chaos RBD Solver. Will use the world's default solver actor if null.
---@field public GeometryCollection AGeometryCollectionActor @Currently selected geometry collection.
local FGeometryCollectionDebugDrawActorSelectedRigidBody = {}
