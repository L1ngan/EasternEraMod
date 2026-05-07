---Computes the output transform by constraining the input transform to multiple parents
---@class FRigUnit_ParentConstraintMath : FRigUnit_HighlevelBase
---@field public Input FTransform @Input is used to calculate offsets from parents' initial transform
---@field public Parents TArray<FConstraintParent>
---@field public AdvancedSettings FRigUnit_ParentConstraintMath_AdvancedSettings
---@field public Output FTransform
---@field public ParentCaches TArray<FCachedRigElement>
local FRigUnit_ParentConstraintMath = {}
