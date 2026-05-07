---The flags field of FAnimNodeData
---Primarily this is used to prevent the extra work asscicated with recovering folded properties for anim node functions
---@class EAnimNodeDataFlags
---@field public None integer
---@field public HasInitialUpdateFunction integer
---@field public HasBecomeRelevantFunction integer
---@field public HasUpdateFunction integer
---@field public AllFunctions integer
---@field public EAnimNodeDataFlags_MAX integer
local EAnimNodeDataFlags = {}
