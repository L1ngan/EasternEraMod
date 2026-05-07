---Capsule shape used for collision. Z axis is capsule axis. Has a start and end radius that can differ.
---@class FKTaperedCapsuleElem : FKShapeElem
---@field public Center FVector @Position of the capsule's origin
---@field public Rotation FRotator @Rotation of the capsule
---@field public Radius0 number @Radius of the capsule start point
---@field public Radius1 number @Radius of the capsule end point
---@field public Length number @Length of line-segment. Add Radius0 and Radius 1 to find total length.
---@field public bOneSidedCollision boolean @(Cloth-only) Treat as one-sided collider, where all collisions are pushed to the +x side.
local FKTaperedCapsuleElem = {}
