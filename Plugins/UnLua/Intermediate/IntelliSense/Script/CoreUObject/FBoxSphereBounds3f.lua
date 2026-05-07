---A bounding box and bounding sphere with the same origin.
---@class FBoxSphereBounds3f
---@field public Origin FVector3f @Holds the origin of the bounding box and sphere.
---@field public BoxExtent FVector3f @Holds the extent of the bounding box, which is half the size of the box in 3D space
---@field public SphereRadius number @Holds the radius of the bounding sphere.
local FBoxSphereBounds3f = {}
