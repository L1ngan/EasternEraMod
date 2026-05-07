---Can be hooked up to a UMeshOpPreviewWithBackgroundCompute to perform UV solving operations.
---Inherits from UObject so that it can hold a strong pointer to the settings UObject, which
---needs to be a UObject to be displayed in the details panel.
---@class URecomputeUVsOpFactory : UObject
---@field public Settings URecomputeUVsToolProperties
local URecomputeUVsOpFactory = {}

