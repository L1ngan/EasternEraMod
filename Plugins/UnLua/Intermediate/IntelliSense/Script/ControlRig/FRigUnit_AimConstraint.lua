---@class FRigUnit_AimConstraint : FRigUnitMutable
---@field public Joint string
---@field public AimMode EAimMode @# How to perform an aim
---@field public UpMode EAimMode @# How to perform an upvector stabilization
---@field public AimVector FVector @# Vector in the space of Named joint which will be aligned to the aim target
---@field public UpVector FVector @# Vector in the space of Named joint which will be aligned to the up target for stabilization
---@field public AimTargets TArray<FAimTarget>
---@field public UpTargets TArray<FAimTarget>
---@field public WorkData FRigUnit_AimConstraint_WorkData @note that Targets.Num () != ConstraintData.Num()
local FRigUnit_AimConstraint = {}
