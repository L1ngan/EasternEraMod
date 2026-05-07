---Selects pieces based on their volume
---@class FCollectionTransformSelectionByVolumeDataflowNode : FDataflowNode
---@field public Collection FManagedArrayCollection @GeometryCollection for the selection
---@field public VolumeMin number @Minimum volume for the selection
---@field public VolumeMax number @Maximum volume for the selection
---@field public RangeSetting ERangeSettingEnum @Values for the selection has to be inside or outside [Min, Max] range
---@field public bInclusive boolean @If true then range includes Min and Max values
---@field public TransformSelection FDataflowTransformSelection @Array of the selected bone indices
local FCollectionTransformSelectionByVolumeDataflowNode = {}
