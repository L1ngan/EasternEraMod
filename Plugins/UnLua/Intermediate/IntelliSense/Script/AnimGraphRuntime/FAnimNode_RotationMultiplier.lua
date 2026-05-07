---Simple controller that multiplies scalar value to the translation/rotation/scale of a single bone.
---@class FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase
---@field public TargetBone FBoneReference @Name of bone to control. This is the main bone chain to modify from.
---@field public SourceBone FBoneReference @Source to get transform from
---@field public Multiplier number @To make these to be easily pin-hookable, I'm not making it struct, but each variable 0.f is invalid, and default
---@field public RotationAxisToRefer integer
---@field public bIsAdditive boolean
local FAnimNode_RotationMultiplier = {}
