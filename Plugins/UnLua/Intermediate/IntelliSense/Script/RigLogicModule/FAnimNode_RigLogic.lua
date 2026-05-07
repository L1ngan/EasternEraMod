---@class FAnimNode_RigLogic : FAnimNode_Base
---@field public AnimSequence FPoseLink
---@field public CacheAnimCurveNames boolean @* Since the order of anim curves may change even on a frame by frame basis, it is not safe to cache and * rely on cached indices by default, but if the blueprints feeding anim curves into RigLogic are set up * in a controlled manner, such that no such runtime changes are expected to the order or number of anim * curves, caching may improve the performance of the node, especially in low-LOD evaluations.
---@field private LODThreshold integer @* Max LOD level that RigLogic Node is evaluated. * For example if you have the threshold set to 2, it will evaluate until including LOD 2 (based on 0 index). In case the LOD level gets set to 3, it will stop evaluating the Rig Logic. * Setting it to -1 will always evaluate it.
local FAnimNode_RigLogic = {}
