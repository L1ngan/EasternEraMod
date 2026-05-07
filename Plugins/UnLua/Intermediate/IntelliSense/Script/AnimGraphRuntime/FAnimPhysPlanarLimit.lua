---@class FAnimPhysPlanarLimit
---@field public DrivingBone FBoneReference @When using a driving bone, the plane transform will be relative to the bone transform
---@field public PlaneTransform FTransform @Transform of the plane, this is either in component-space if no DrivinBone is specified or in bone-space if a driving bone is present.
local FAnimPhysPlanarLimit = {}
