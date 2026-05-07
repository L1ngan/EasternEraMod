---@class FAnimPhysSphericalLimit
---@field public DrivingBone FBoneReference @Bone to attach the sphere to
---@field public SphereLocalOffset FVector @Local offset for the sphere, if no driving bone is set this is in node space, otherwise bone space
---@field public LimitRadius number @Radius of the sphere
---@field public LimitType ESphericalLimitType @Whether to lock bodies inside or outside of the sphere
local FAnimPhysSphericalLimit = {}
