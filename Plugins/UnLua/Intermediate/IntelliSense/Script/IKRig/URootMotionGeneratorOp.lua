---NOTE: This type has been replaced with FIKRetargetCurveRemapOp.
---@class URootMotionGeneratorOp : URetargetOpBase
---@field public SourceRootBone string
---@field public TargetRootBone string
---@field public TargetPelvisBone string
---@field public RootMotionSource ERootMotionSource
---@field public RootHeightSource ERootMotionHeightSource
---@field public bPropagateToNonRetargetedChildren boolean
---@field public bMaintainOffsetFromPelvis boolean
---@field public bRotateWithPelvis boolean
---@field public GlobalOffset FTransform
local URootMotionGeneratorOp = {}

