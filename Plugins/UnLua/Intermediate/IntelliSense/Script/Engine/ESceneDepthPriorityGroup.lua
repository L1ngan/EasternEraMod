---A priority for sorting scene elements by depth.
---Elements with higher priority occlude elements with lower priority, disregarding distance.
---@class ESceneDepthPriorityGroup
---@field public SDPG_World integer
---@field public SDPG_Foreground integer
---@field public SDPG_MAX integer
local ESceneDepthPriorityGroup = {}
