---Blend list node; has many children
---@class FAnimNode_BlendListBase : FAnimNode_Base
---@field protected BlendPose TArray<FPoseLink>
---@field private BlendTime TArray<number>
---@field private TransitionType EBlendListTransitionType
---@field private BlendType EAlphaBlendOption
---@field protected ChildUpateMode EBlendListChildUpdateMode
---@field private CustomBlendCurve UCurveFloat
---@field private BlendProfile UBlendProfile
local FAnimNode_BlendListBase = {}
