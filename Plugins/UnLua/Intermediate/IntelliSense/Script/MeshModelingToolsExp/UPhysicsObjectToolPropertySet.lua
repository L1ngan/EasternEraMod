---@class UPhysicsObjectToolPropertySet : UInteractiveToolPropertySet
---@field public ObjectName string @Source Object Name
---@field public CollisionType ECollisionGeometryMode @Collision Flags controlling how simple and complex collision shapes are used
---@field public Spheres TArray<FPhysicsSphereData>
---@field public Boxes TArray<FPhysicsBoxData>
---@field public Capsules TArray<FPhysicsCapsuleData>
---@field public Convexes TArray<FPhysicsConvexData>
---@field public LevelSets TArray<FPhysicsLevelSetData>
local UPhysicsObjectToolPropertySet = {}

