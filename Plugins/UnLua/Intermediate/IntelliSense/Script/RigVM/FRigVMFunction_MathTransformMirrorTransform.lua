---Mirror a transform about a central transform.
---@class FRigVMFunction_MathTransformMirrorTransform : FRigVMFunction_MathTransformBase
---@field public Value FTransform
---@field public MirrorAxis integer @the axis to mirror against
---@field public AxisToFlip integer @the axis to flip for rotations
---@field public CentralTransform FTransform @The transform about which to mirror
---@field public Result FTransform
local FRigVMFunction_MathTransformMirrorTransform = {}
