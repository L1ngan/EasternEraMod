---Compute the distance between two vectors : Distance = |B-A|
---@class FDataflowVectorDistanceNode : FDataflowNode
---@field private A FDataflowVectorTypes @A Vector operand
---@field private B FDataflowVectorTypes @B Vector operand
---@field private Distance FDataflowNumericTypes @Distance between A and B : Distance=|B-A|
local FDataflowVectorDistanceNode = {}
