---Base class for any asset playing anim node
---@class FAnimNode_AssetPlayerBase : FAnimNode_AssetPlayerRelevancyBase
---@field protected BlendWeight number @Last encountered blendweight for this node
---@field protected InternalTimeAccumulator number @Accumulated time used to reference the asset in this node
local FAnimNode_AssetPlayerBase = {}
