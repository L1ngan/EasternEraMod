---Styling for all edges associated with a given output (characterized by NodeID & Name)
---@class FMetasoundFrontendEdgeStyle
---@field public NodeID FGuid @Node ID for associated edge(s) that should use the given style data.
---@field public OutputName string @Name of node's output to associate style information for its associated edge(s).
---@field public LiteralColorPairs TArray<FMetasoundFrontendEdgeStyleLiteralColorPair> @Array of colors used to animate given output's associated edge(s). Interpolation between values dependent on value used.
local FMetasoundFrontendEdgeStyle = {}
