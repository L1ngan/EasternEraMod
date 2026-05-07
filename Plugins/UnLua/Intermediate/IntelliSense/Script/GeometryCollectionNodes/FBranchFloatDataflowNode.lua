---Branch between two float inputs based on boolean condition
---@class FBranchFloatDataflowNode : FDataflowNode
---@field public A number @Float input
---@field public B number @Float input
---@field public bCondition boolean @If true, Output = A, otherwise Output = B
---@field public ReturnValue number @Output
local FBranchFloatDataflowNode = {}
