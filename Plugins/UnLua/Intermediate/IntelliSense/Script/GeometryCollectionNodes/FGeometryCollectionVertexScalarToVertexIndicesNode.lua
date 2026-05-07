---Convert an vertex float array to a list of indices
---@class FGeometryCollectionVertexScalarToVertexIndicesNode : FDataflowNode
---@field public Collection FManagedArrayCollection
---@field public AttributeKey FCollectionAttributeKey @The name of the vertex attribute and group to generate indices from.
---@field public SelectionThreshold number @The value threshold for what is included in the vertex list.
---@field public VertexIndices TArray<integer> @Output list of indices
local FGeometryCollectionVertexScalarToVertexIndicesNode = {}
