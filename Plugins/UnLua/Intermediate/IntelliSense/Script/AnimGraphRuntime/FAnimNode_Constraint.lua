---Constraint node to parent or world transform for rotation/translation
---@class FAnimNode_Constraint : FAnimNode_SkeletalControlBase
---@field public BoneToModify FBoneReference @Name of bone to control. This is the main bone chain to modify from. *
---@field public ConstraintSetup TArray<FConstraint> @List of constraints
---@field public ConstraintWeights TArray<number> @Weight data - post edit syncs up to ConstraintSetups
local FAnimNode_Constraint = {}
