---Structure holding the settings using to debug draw Particles shape based on their shape type on the Chaos Visual Debugger
---@class FChaosDebugDrawColorsByShapeType
---@field public SimpleTypeColor FColor @Color used for Sphere, Plane, Cube, Capsule, Cylinder, tapered shapes
---@field public ConvexColor FColor @Color used for convex shapes
---@field public HeightFieldColor FColor @Color used for heightfield
---@field public TriangleMeshColor FColor @Color used for triangle meshes
---@field public LevelSetColor FColor @Color used for triangle LevelSets
local FChaosDebugDrawColorsByShapeType = {}
