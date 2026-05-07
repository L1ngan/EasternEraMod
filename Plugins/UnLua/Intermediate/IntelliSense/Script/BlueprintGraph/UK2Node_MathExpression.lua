---This node type acts like a collapsed node, a single node that represents
---a larger sub-network of nodes (contained within a sub-graph). This node will
---take the math expression it was named with, and attempt to convert it into a
---series of math nodes. If it is unsuccessful, then it generates a series of
---actionable errors.
---@class UK2Node_MathExpression : UK2Node_Composite
---@field public Expression string @The math expression to evaluate
---@field public bMadeAfterRotChange boolean
local UK2Node_MathExpression = {}

