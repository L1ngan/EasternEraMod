---@class UVolumeToMeshTool : UInteractiveTool
---@field protected Settings UVolumeToMeshToolProperties
---@field protected OutputTypeProperties UCreateMeshObjectTypeProperties
---@field protected PreviewMesh UPreviewMesh
---@field protected TargetVolume TLazyObjectPtr<AVolume>
---@field protected VolumeEdgesSet ULineSetComponent
local UVolumeToMeshTool = {}

