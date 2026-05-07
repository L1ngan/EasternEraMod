---Converts a mesh to a volume.
---Note: If ConversionUtils/DynamicMeshToVolume is rewritten to be safe for runtime, this
---tool can be moved out of the editor-only section and put with VolumeToMeshTool.
---@class UMeshToVolumeTool : USingleSelectionMeshEditingTool
---@field protected Settings UMeshToVolumeToolProperties
---@field protected HandleSourcesProperties UOnAcceptHandleSourcesPropertiesSingle
---@field protected PreviewMesh UPreviewMesh
---@field protected VolumeEdgesSet ULineSetComponent
local UMeshToVolumeTool = {}

