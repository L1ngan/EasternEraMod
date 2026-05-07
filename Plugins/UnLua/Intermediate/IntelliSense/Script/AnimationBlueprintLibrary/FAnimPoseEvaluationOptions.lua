---@class FAnimPoseEvaluationOptions
---@field public EvaluationType EAnimDataEvalType @Type of evaluation which should be used
---@field public bShouldRetarget boolean @Whether or not to retarget animation during evaluation
---@field public bExtractRootMotion boolean @Whether or not to extract root motion values
---@field public bIncorporateRootMotionIntoPose boolean @Whether or not to force root motion being incorporated into retrieved pose
---@field public OptionalSkeletalMesh USkeletalMesh @Optional skeletal mesh with proportions to use when evaluating a pose
---@field public bRetrieveAdditiveAsFullPose boolean @Whether or additive animations should be applied to their base-pose
---@field public bEvaluateCurves boolean @Whether or not to evaluate Animation Curves
local FAnimPoseEvaluationOptions = {}
