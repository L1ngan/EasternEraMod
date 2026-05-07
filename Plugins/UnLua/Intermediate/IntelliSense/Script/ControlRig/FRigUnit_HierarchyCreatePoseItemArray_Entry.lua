---@class FRigUnit_HierarchyCreatePoseItemArray_Entry
---@field public Item FRigElementKey
---@field public LocalTransform FTransform
---@field public GlobalTransform FTransform
---@field public UseEulerAngles boolean @in case of a control this can be used to drive the preferred euler angles
---@field public EulerAngles FVector @in case of a control this can be used to drive the preferred euler angles
---@field public CurveValue number @in case of a curve this can be used to drive the curve value
local FRigUnit_HierarchyCreatePoseItemArray_Entry = {}
