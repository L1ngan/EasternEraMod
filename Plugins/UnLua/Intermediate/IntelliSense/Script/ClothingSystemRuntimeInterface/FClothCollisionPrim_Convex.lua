---Data for a single convex element
---A convex is a collection of planes, in which the clothing will attempt to stay outside of the
---shape created by the planes combined.
---@class FClothCollisionPrim_Convex
---@field public Faces TArray<FClothCollisionPrim_ConvexFace>
---@field public SurfacePoints TArray<FVector>
---@field public BoneIndex integer @Surface points, used by Chaos and also for visualization
local FClothCollisionPrim_Convex = {}
