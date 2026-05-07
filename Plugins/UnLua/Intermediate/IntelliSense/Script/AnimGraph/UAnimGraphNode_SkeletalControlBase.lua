---This is the base class for the 'source version' of all skeletal control animation graph nodes
---(nodes that manipulate the pose rather than playing animations to create a pose or blending between poses)
---Concrete subclasses should contain a member struct derived from FAnimNode_SkeletalControlBase
---@class UAnimGraphNode_SkeletalControlBase : UAnimGraphNode_Base
local UAnimGraphNode_SkeletalControlBase = {}

