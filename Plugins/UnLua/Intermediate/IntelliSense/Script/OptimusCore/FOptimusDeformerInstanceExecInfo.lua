---Structure with cached state for a single compute graph.
---@class FOptimusDeformerInstanceExecInfo
---@field public GraphName string @The name of the graph
---@field public GraphType EOptimusNodeGraphType @The graph type.
---@field public ComputeGraph UComputeGraph @The ComputeGraph asset.
---@field public ComputeGraphInstance FComputeGraphInstance @The cached state for the ComputeGraph.
local FOptimusDeformerInstanceExecInfo = {}
