---Simple controller to copy a bone's transform to another one.
---@class FAnimNode_CopyBone : FAnimNode_SkeletalControlBase
---@field public SourceBone FBoneReference @Source Bone Name to get transform from
---@field public TargetBone FBoneReference @Name of bone to control. This is the main bone chain to modify from. *
---@field public bCopyTranslation boolean @If Translation should be copied
---@field public bCopyRotation boolean @If Rotation should be copied
---@field public bCopyScale boolean @If Scale should be copied
---@field public ControlSpace integer @Space to convert transforms into prior to copying components
local FAnimNode_CopyBone = {}
