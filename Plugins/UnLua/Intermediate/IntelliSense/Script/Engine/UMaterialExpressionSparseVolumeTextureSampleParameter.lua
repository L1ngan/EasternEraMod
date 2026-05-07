---@class UMaterialExpressionSparseVolumeTextureSampleParameter : UMaterialExpressionSparseVolumeTextureSample
---@field public ParameterName string @Name to be referenced when we want to find and set this parameter
---@field public ExpressionGUID FGuid @GUID that should be unique within the material, this is used for parameter renaming.
---@field public Group string @The name of the parameter Group to display in MaterialInstance Editor. Default is None group
---@field public SortPriority integer @Controls where the this parameter is displayed in a material instance parameter list. The lower the number the higher up in the parameter list.
local UMaterialExpressionSparseVolumeTextureSampleParameter = {}

