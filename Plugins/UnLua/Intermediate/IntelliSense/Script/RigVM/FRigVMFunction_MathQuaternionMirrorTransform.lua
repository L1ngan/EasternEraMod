---Mirror a rotation about a central transform.
---@class FRigVMFunction_MathQuaternionMirrorTransform : FRigVMFunction_MathQuaternionBase
---@field public Value FQuat
---@field public MirrorAxis integer @the axis to mirror against
---@field public AxisToFlip integer @the axis to flip for rotations
---@field public CentralTransform FTransform @The transform about which to mirror
---@field public Result FQuat
local FRigVMFunction_MathQuaternionMirrorTransform = {}
