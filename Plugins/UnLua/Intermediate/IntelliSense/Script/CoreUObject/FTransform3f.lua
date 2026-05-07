---Transform composed of Quat/Translation/Scale.
---@class FTransform3f
---@field public Rotation FQuat4f @Rotation of this transformation, as a quaternion.
---@field public Translation FVector3f @Translation of this transformation, as a vector.
---@field public Scale3D FVector3f @3D scale (always applied in local space) as a vector.
local FTransform3f = {}
