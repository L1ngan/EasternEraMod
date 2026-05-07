---Compute the dot product between two vectors : DotProduct = A.B
---@class FDataflowVectorDotProductNode : FDataflowNode
---@field private A FDataflowVectorTypes @A Vector operand
---@field private B FDataflowVectorTypes @B Vector operand
---@field private DotProduct FDataflowNumericTypes @Resulting dot product : DotProduct=A.B
local FDataflowVectorDotProductNode = {}
