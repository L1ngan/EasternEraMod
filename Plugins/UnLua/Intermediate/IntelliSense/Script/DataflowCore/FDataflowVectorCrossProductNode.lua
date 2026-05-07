---Compute the cross product of two vectors :  CrossProduct = B^A
---This node only operates in 3 dimensions, inputs will be converted to a 3D vector internally and result will be a vector with a zero W component
---@class FDataflowVectorCrossProductNode : FDataflowNode
---@field private A FDataflowVectorTypes @A Vector operand
---@field private B FDataflowVectorTypes @B Vector operand
---@field private CrossProduct FDataflowVectorTypes @Resulting cross product of A and B : CrossProduct=B^A
local FDataflowVectorCrossProductNode = {}
