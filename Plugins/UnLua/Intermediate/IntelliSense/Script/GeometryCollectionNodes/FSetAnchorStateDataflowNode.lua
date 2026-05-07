---Sets the anchored state on the selected bones in a Collection
---@class FSetAnchorStateDataflowNode : FDataflowNode
---@field private AnchorState EAnchorStateEnum @What anchor state to set on selected bones
---@field private bSetNotSelectedBonesToOppositeState boolean @If true, sets the non selected bones to opposite anchor state
---@field private Collection FManagedArrayCollection @GeometryCollection to set anchor state on
---@field private TransformSelection FDataflowTransformSelection @Bone selection for setting the state on
local FSetAnchorStateDataflowNode = {}
