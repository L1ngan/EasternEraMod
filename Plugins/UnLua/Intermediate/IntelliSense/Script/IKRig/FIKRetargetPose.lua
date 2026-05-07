---@class FIKRetargetPose
---@field private RootTranslationOffset FVector @a translational delta in GLOBAL space, applied only to the pelvis bone
---@field private BoneRotationOffsets TMap<string, FQuat> @these are LOCAL-space rotation deltas to be applied to a bone to modify it's retarget pose
local FIKRetargetPose = {}
