---Mirror a vector about a central transform.
---@class FRigVMFunction_MathVectorMirrorTransform : FRigVMFunction_MathVectorBase
---@field public Value FVector
---@field public MirrorAxis integer @the axis to mirror against
---@field public AxisToFlip integer @the axis to flip for rotations
---@field public CentralTransform FTransform @The transform about which to mirror
---@field public Result FVector
local FRigVMFunction_MathVectorMirrorTransform = {}
