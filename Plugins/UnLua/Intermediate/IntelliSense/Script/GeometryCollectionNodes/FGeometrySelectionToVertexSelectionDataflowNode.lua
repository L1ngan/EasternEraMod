---Converts GeometrySelection to VertexSelection
---@class FGeometrySelectionToVertexSelectionDataflowNode : FDataflowNode
---@field public Collection FManagedArrayCollection @GeometryCollection
---@field public GeometryIndices string @Space separated list of geometry indices to specify the selection when GeometrySelection is not connected
---@field public GeometrySelection FDataflowGeometrySelection @Input geometry selection
---@field public VertexSelection FDataflowVertexSelection @Vertex selection output
local FGeometrySelectionToVertexSelectionDataflowNode = {}
