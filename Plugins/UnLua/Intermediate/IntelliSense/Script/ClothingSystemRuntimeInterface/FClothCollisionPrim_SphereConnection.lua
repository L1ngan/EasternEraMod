---Data for a single connected sphere primitive. This should be configured after all spheres have
---been processed as they are really just indexing the existing spheres
---@class FClothCollisionPrim_SphereConnection
---@field public SphereIndices integer
---@field public OneSidedPlaneNormal FVector @Zero vector means this is not a one-sided capsule.
local FClothCollisionPrim_SphereConnection = {}
