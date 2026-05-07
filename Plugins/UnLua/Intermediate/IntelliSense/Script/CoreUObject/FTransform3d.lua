---Transform composed of Quat/Translation/Scale.
---@class FTransform3d
---@field public Rotation FQuat4d @Rotation of this transformation, as a quaternion.
---@field public Translation FVector3d @Translation of this transformation, as a vector.
---@field public Scale3D FVector3d @3D scale (always applied in local space) as a vector.
local FTransform3d = {}
