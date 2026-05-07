---@class FAnimNode_BlendBoneByChannel : FAnimNode_Base
---@field public A FPoseLink
---@field public B FPoseLink
---@field public BoneDefinitions TArray<FBlendBoneByChannelEntry>
---@field public Alpha number
---@field public AlphaScaleBias FInputScaleBias
---@field public TransformsSpace integer @Space to convert transforms into prior to copying channels
local FAnimNode_BlendBoneByChannel = {}
