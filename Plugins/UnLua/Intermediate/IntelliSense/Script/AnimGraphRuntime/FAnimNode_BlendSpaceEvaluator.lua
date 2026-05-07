---Evaluates a BlendSpace at a specific using a specific time input rather than advancing time
---internally. Typically the playback position of the animation for this node will represent
---something other than time, like jump height. Note that events output from the sequences playing
---and being blended together should not be used. In addition, synchronization of animations
---will potentially be discontinuous if the blend weights are updated, as the leader/follower changes.
---@class FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer
---@field public NormalizedTime number @Normalized time between [0,1]. The actual length of a blendspace is dynamic based on the coordinate, so it is exposed as a normalized value. Note that treating this as a "time" value that increases (and wraps) will not result in the same output as you would get from using a BlendSpace player. The output events may not be as expected, and synchronization will sometimes be discontinuous if the leader/follower animations change as a result of changing the blend weights (even if that is done smoothly).
---@field public bTeleportToNormalizedTime boolean @If true, teleport to normalized time, does NOT advance time (does not trigger notifies, does not extract Root Motion, etc.). If false, will advance time (will trigger notifies, extract root motion if applicable, etc).
local FAnimNode_BlendSpaceEvaluator = {}
