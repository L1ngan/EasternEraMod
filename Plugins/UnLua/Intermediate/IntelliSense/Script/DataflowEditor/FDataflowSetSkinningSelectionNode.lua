---Set skin weights selection attributes.
---@class FDataflowSetSkinningSelectionNode : FDataflowNode
---@field public Collection FManagedArrayCollection
---@field public SelectionMapName string @Map name to be used to select vertices to correct
---@field public VertexGroup FScalarVertexPropertyGroup @Target group in which the attributes are stored
---@field public SelectionMapKey FCollectionAttributeKey @Selection map key to be used in other nodes if necessary
---@field public CorrectionType ESkinWeightsCorrectionType @Selection map key to be used in other nodes if necessary
local FDataflowSetSkinningSelectionNode = {}
