---@class UEdGraph : UObject
---@field public Schema TSubclassOf<UEdGraphSchema> @The schema that this graph obeys
---@field public Nodes TArray<UEdGraphNode> @Set of all nodes in this graph
---@field public bEditable boolean @If true, graph can be edited by the user
---@field public bAllowDeletion boolean @If true, graph can be deleted from the whatever container it is in. For FunctionGraphs this flag is reset to false on load (unless the function is the construction script or AnimGraph)
---@field public bAllowRenaming boolean @If true, graph can be renamed; Note: Graph can also be renamed if bAllowDeletion is true currently
---@field public SubGraphs TArray<UEdGraph> @Child graphs that are a part of this graph; the separation is purely visual
---@field public GraphGuid FGuid @Guid for this graph
---@field public InterfaceGuid FGuid @Guid of interface graph this graph comes from (used for conforming)
local UEdGraph = {}

