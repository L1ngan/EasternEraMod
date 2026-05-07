---@class FMovieSceneControlRigInstanceData : FMovieSceneSequenceInstanceData
---@field public bAdditive boolean @Blend this track in additively (using the reference pose as a base)
---@field public bApplyBoneFilter boolean @Only apply bones that are in the filter
---@field public BoneFilter FInputBlendPose @Per-bone filter to apply to our animation
---@field public Weight FMovieSceneFloatChannel @The weight curve for this animation controller section
---@field public Operand FMovieSceneEvaluationOperand @The operand the control rig instance should operate on
local FMovieSceneControlRigInstanceData = {}
