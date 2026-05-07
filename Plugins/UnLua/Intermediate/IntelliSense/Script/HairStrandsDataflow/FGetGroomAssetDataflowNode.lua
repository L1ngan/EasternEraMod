---Get the groom asset guides
---@class FGetGroomAssetDataflowNode : FDataflowNode
---@field public GroomAsset UGroomAsset @Input asset to read the guides from
---@field public CurvesType EGroomCollectionType @Type of curves to use to fill the groom collection (guides/strands)
---@field public Collection FManagedArrayCollection @Managed array collection used to store the guides
local FGetGroomAssetDataflowNode = {}
