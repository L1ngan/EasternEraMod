---Sets the dynamic state on the selected bones in a Collection
---@class FSetDynamicStateDataflowNode : FDataflowNode
---@field private DynamicState EDataflowGeometryCollectionDynamicState @Dynamic state to set on selected bones
---@field private Collection FManagedArrayCollection @GeometryCollection to set anchor state on
---@field private TransformSelection FDataflowTransformSelection @Bone selection for setting the state on
local FSetDynamicStateDataflowNode = {}
