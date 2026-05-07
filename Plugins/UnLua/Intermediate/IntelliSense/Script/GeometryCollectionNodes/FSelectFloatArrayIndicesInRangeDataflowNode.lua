---Selects indices of a float array by range
---@class FSelectFloatArrayIndicesInRangeDataflowNode : FDataflowNode
---@field public Values TArray<number> @GeometryCollection for the selection
---@field public Min number @Minimum value for the selection
---@field public Max number @Maximum value for the selection
---@field public RangeSetting ERangeSettingEnum @Values for the selection has to be inside or outside [Min, Max] range
---@field public bInclusive boolean @If true then range includes Min and Max values
---@field public Indices TArray<integer> @Indices of float Values matching the specified range
local FSelectFloatArrayIndicesInRangeDataflowNode = {}
