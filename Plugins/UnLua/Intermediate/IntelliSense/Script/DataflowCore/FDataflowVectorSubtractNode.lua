---Subtract two vectors component wise: V = (A - B)
---@class FDataflowVectorSubtractNode : FDataflowNode
---@field private A FDataflowVectorTypes @A Vector operand
---@field private B FDataflowVectorTypes @B Vector operand
---@field private V FDataflowVectorTypes @Add result V=A-B
local FDataflowVectorSubtractNode = {}
