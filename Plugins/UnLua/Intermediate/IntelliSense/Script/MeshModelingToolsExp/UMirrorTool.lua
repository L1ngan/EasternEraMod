---Tool for mirroring one or more meshes across a plane.
---@class UMirrorTool : UMultiSelectionMeshEditingTool
---@field protected Settings UMirrorToolProperties
---@field protected OutputTypeProperties UCreateMeshObjectTypeProperties
---@field protected HandleSourcesProperties UOnAcceptHandleSourcesProperties
---@field protected ToolActions UMirrorToolActionPropertySet
---@field protected MeshesToMirror TArray<UDynamicMeshReplacementChangeTarget>
---@field protected Previews TArray<UMeshOpPreviewWithBackgroundCompute>
---@field protected PlaneMechanic UConstructionPlaneMechanic
local UMirrorTool = {}

