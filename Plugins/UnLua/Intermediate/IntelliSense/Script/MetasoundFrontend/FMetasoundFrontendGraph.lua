---@class FMetasoundFrontendGraph
---@field public Nodes TArray<FMetasoundFrontendNode> @Node contained in graph This property is EditAnywhere with a false EditCondition so child properties (ex. node configuration) have exposed property handles for details customization code, but they should not be editable elsewhere in the editor (ex. property matrix)
---@field public Edges TArray<FMetasoundFrontendEdge> @Connections between points on nodes.
---@field public Variables TArray<FMetasoundFrontendVariable> @Graph local variables.
---@field public Style FMetasoundFrontendGraphStyle @Style of graph display.
---@field public PageID FGuid
local FMetasoundFrontendGraph = {}
