---
---@class FAnimNode_RotateRootBone : FAnimNode_Base
---@field public BasePose FPoseLink
---@field public Pitch number
---@field public Yaw number
---@field public PitchScaleBiasClamp FInputScaleBiasClamp
---@field public YawScaleBiasClamp FInputScaleBiasClamp
---@field public MeshToComponent FRotator
---@field public bRotateRootMotionAttribute boolean @If enabled, rotating the root bone using this node will also rotate the direction of the root motion custom attribute
local FAnimNode_RotateRootBone = {}
