---Constrains an item's rotation to multiple items' rotations
---@class FRigUnit_RotationConstraint : FRigUnit_HighlevelBaseMutable
---@field public Child FRigElementKey
---@field public bMaintainOffset boolean
---@field public Filter FFilterOptionPerAxis
---@field public Parents TArray<FConstraintParent>
---@field public AdvancedSettings FRigUnit_RotationConstraint_AdvancedSettings
---@field public Weight number
local FRigUnit_RotationConstraint = {}
