---Force an evaluation dependency between two values
---@class FDataflowForceDependencyNode : FDataflowNode
---@field public Value FDataflowAnyType @Evaluating Value will force an evaluation of DependentValue
---@field public DependentValue FDataflowAnyType @Evaluating Value will force an evaluation of DependentValue
local FDataflowForceDependencyNode = {}
