---Evaluates a point in an anim sequence, using a specific time input rather than advancing time internally.
---Typically the playback position of the animation for this node will represent something other than time, like jump height.
---This node will not trigger any notifies present in the associated sequence.
---@class FAnimNode_PoseBlendNode : FAnimNode_PoseHandler
---@field public SourcePose FPoseLink
---@field public BlendOption EAlphaBlendOption @Type of blending used (Linear, Cubic, etc.)
---@field public CustomCurve UCurveFloat @If you're using Custom BlendOption, you can specify curve
local FAnimNode_PoseBlendNode = {}
