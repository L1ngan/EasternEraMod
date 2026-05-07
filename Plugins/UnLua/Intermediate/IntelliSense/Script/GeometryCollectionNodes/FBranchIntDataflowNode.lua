---Branch between two int inputs based on boolean condition
---@class FBranchIntDataflowNode : FDataflowNode
---@field public A integer @Int input
---@field public B integer @Int input
---@field public bCondition boolean @If true, Output = A, otherwise Output = B
---@field public ReturnValue integer @Output
local FBranchIntDataflowNode = {}
