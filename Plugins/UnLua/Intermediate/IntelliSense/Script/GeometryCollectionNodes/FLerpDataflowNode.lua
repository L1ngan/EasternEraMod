---Linearly interpolates between A and B based on Alpha. (100% of A when Alpha = 0.0 and 100% of B when Alpha = 1.0)
---@class FLerpDataflowNode : FDataflowNode
---@field public A number
---@field public B number
---@field public Alpha number
---@field public ReturnValue number
local FLerpDataflowNode = {}
