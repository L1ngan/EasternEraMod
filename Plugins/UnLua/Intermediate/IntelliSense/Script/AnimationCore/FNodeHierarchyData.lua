---Hierarchy of nodes
---@class FNodeHierarchyData
---@field public Nodes TArray<FNodeObject> @Node hierarchy data
---@field public Transforms TArray<FTransform> @Node transform data
---@field public NodeNameToIndexMapping TMap<string, integer> @Transient look up mapping from name to index to array
local FNodeHierarchyData = {}
