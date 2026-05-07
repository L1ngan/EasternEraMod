---Distributes rotations provided across a array of items.
---Each rotation is expressed by a quaternion and a ratio, where the ratio is between 0.0 and 1.0
---Note: This node adds rotation in local space of each item!
---@class FRigUnit_DistributeRotationForItemArray : FRigUnit_HighlevelBaseMutable
---@field public Items TArray<FRigElementKey> @The items to use to distribute the rotation
---@field public Rotations TArray<FRigUnit_DistributeRotation_Rotation> @The list of rotations to be applied
---@field public RotationEaseType ERigVMAnimEasingType @The easing to use between to rotations.
---@field public Weight number @The weight of the solver - how much the rotation should be applied
---@field public WorkData FRigUnit_DistributeRotation_WorkData
local FRigUnit_DistributeRotationForItemArray = {}
