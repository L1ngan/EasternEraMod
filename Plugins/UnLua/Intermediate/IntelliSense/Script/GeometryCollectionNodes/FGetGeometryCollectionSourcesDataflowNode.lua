---Get the list of the original mesh information used to create a specific geometryc collection asset
---each entry contains a mesh, a transform and a list of override materials
---@class FGetGeometryCollectionSourcesDataflowNode : FDataflowNode
---@field public Asset UGeometryCollection @Asset to get geometry sources from
---@field public Sources TArray<FGeometryCollectionSource> @array of geometry sources
local FGetGeometryCollectionSourcesDataflowNode = {}
