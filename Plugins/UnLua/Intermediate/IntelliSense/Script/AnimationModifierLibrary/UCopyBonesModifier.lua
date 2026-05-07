---Animation Modifier to copy the transform of 'SourceBone(s)' to 'TargetBone(s)'
---@class UCopyBonesModifier : UAnimationModifier
---@field public BonePairs TArray<FBoneReferencePair> @Source and Target bone pairs
---@field public BonePoseSpace EAnimPoseSpaces @Space to convert SourceBone transforms into before copying them to TargetBone
local UCopyBonesModifier = {}

