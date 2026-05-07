---Builds the guides LODs
---@class FBuildGuidesLODsDataflowNode : FDataflowNode
---@field public Collection FManagedArrayCollection @Managed array collection to be used to store data
---@field public CurveParentsKey FCollectionAttributeKey @Curve parent indices key to be used in other nodes if necessary
---@field public CurveLodsKey FCollectionAttributeKey @Curve lods indices key to be used in other nodes if necessary
local FBuildGuidesLODsDataflowNode = {}
