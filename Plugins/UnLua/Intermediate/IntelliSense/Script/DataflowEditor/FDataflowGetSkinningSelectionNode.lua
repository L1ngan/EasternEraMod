---Get skin weights selection attributes.
---@class FDataflowGetSkinningSelectionNode : FDataflowNode
---@field public Collection FManagedArrayCollection
---@field public VertexGroup FScalarVertexPropertyGroup @Target group in which the attributes are stored
---@field public SelectionMapKey FCollectionAttributeKey @Selection map key to be used in other nodes if necessary
---@field public CorrectionType ESkinWeightsCorrectionType @Selection map key to be used in other nodes if necessary
local FDataflowGetSkinningSelectionNode = {}
