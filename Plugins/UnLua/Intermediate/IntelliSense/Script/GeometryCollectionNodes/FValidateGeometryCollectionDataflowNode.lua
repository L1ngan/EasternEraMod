---Editor Fracture Mode / Utilities / Validate tool
---Ensures that geometrycollection is valid and clean.
---@class FValidateGeometryCollectionDataflowNode : FDataflowNode
---@field public Collection FManagedArrayCollection @Collection to use
---@field public bRemoveUnreferencedGeometry boolean @Find and remove any unused geometry data
---@field public bRemoveClustersOfOne boolean @Whether to collapse any clusters with only a single child
---@field public bRemoveDanglingClusters boolean @Remove dangling clusters -- Note this can invalidate caches
local FValidateGeometryCollectionDataflowNode = {}
