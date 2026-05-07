---@class FMaterialCachedParameterEntry
---@field public ParameterInfoSet TSet<FMaterialParameterInfo> @This is used to map FMaterialParameterInfos to indices, which are then used to index various TArrays containing values for each type of parameter (ExpressionGuids and Overrides, along with ScalarValues, VectorValues, etc)
local FMaterialCachedParameterEntry = {}
