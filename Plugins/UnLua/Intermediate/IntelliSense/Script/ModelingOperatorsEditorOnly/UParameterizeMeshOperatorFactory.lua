---Can be hooked up to a UMeshOpPreviewWithBackgroundCompute to perform UV parameterization operations.
---Inherits from UObject so that it can hold a strong pointer to the settings UObject, which
---needs to be a UObject to be displayed in the details panel.
---@class UParameterizeMeshOperatorFactory : UObject
---@field public Settings UParameterizeMeshToolProperties
---@field public UVAtlasProperties UParameterizeMeshToolUVAtlasProperties
---@field public XAtlasProperties UParameterizeMeshToolXAtlasProperties
---@field public PatchBuilderProperties UParameterizeMeshToolPatchBuilderProperties
local UParameterizeMeshOperatorFactory = {}

