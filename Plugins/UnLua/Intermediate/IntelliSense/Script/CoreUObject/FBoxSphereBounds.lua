---A bounding box and bounding sphere with the same origin.
---@class FBoxSphereBounds
---@field public Origin FVector @Holds the origin of the bounding box and sphere.
---@field public BoxExtent FVector @Holds the extent of the bounding box, which is half the size of the box in 3D space
---@field public SphereRadius number @Holds the radius of the bounding sphere.
local FBoxSphereBounds = {}
