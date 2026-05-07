---Evaluates a point in an anim sequence, using a specific time input rather than advancing time internally.
---Typically the playback position of the animation for this node will represent something other than time, like jump height.
---This node will not trigger any notifies present in the associated sequence.
---@class FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase
---@field public PoseAsset UPoseAsset @The animation sequence asset to evaluate
local FAnimNode_PoseHandler = {}
