---Creates a gradient of twist rotation along a collection of items.
---@class FRigUnit_TwistBonesPerItem : FRigUnit_HighlevelBaseMutable
---@field public Items FRigElementKeyCollection @The items to twist
---@field public TwistAxis FVector @The axis to twist the bones around
---@field public PoleAxis FVector @The axis to use for the pole vector for each bone
---@field public TwistEaseType ERigVMAnimEasingType @The easing to use between two twists.
---@field public Weight number @The weight of the solver - how much the rotation should be applied
---@field public bPropagateToChildren boolean @If set to true all of the global transforms of the children of this bone will be recalculated based on their local transforms. Note: This is computationally more expensive than turning it off.
---@field public WorkData FRigUnit_TwistBones_WorkData
local FRigUnit_TwistBonesPerItem = {}
