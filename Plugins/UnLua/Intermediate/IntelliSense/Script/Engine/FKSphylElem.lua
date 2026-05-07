---Capsule shape used for collision. Z axis is capsule axis.
---@class FKSphylElem : FKShapeElem
---@field public Center FVector @Position of the capsule's origin
---@field public Rotation FRotator @Rotation of the capsule
---@field public Radius number @Radius of the capsule
---@field public Length number @This is of line-segment ie. add Radius to both ends to find total length.
local FKSphylElem = {}
