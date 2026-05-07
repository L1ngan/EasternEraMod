---Selects pieces based on their size
---@class FCollectionTransformSelectionBySizeDataflowNode : FDataflowNode
---@field public Collection FManagedArrayCollection @GeometryCollection for the selection
---@field public SizeMin number @Minimum size for the selection
---@field public SizeMax number @Maximum size for the selection
---@field public RangeSetting ERangeSettingEnum @Values for the selection has to be inside or outside [Min, Max] range
---@field public bInclusive boolean @If true then range includes Min and Max values
---@field public bUseRelativeSize boolean @Whether to use the 'Relative Size' -- i.e., the Size / Largest Bone Size. Otherwise, Size is the cube root of Volume.
---@field public TransformSelection FDataflowTransformSelection @Array of the selected bone indices
local FCollectionTransformSelectionBySizeDataflowNode = {}
