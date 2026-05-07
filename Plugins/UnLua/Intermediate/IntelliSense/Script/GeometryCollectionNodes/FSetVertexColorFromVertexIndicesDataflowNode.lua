---Set the vertex color of the collection based on the selection set.
---@class FSetVertexColorFromVertexIndicesDataflowNode : FDataflowNode
---@field public Collection FManagedArrayCollection @Collection Passthrough
---@field public VertexIndicesIn TArray<integer> @Vertex indices set
---@field public SelectedColor FLinearColor @Selected vertex color
local FSetVertexColorFromVertexIndicesDataflowNode = {}
