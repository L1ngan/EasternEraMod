---@class FAnimNode_UseCachedPose : FAnimNode_Base
---@field public LinkToCachingNode FPoseLink @Note: This link is intentionally not public; it's wired up during compilation
---@field public CachePoseName string @Intentionally not exposed, set by AnimBlueprintCompiler
local FAnimNode_UseCachedPose = {}
