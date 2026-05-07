---UUVEditorRecomputeUVsTool Recomputes UVs based on existing segmentations of the mesh
---@class UUVEditorTexelDensityTool : UInteractiveTool
---@field private Targets TArray<UUVEditorToolMeshInput>
---@field private Settings UUVEditorTexelDensitySettings
---@field private ActionSettings UUVEditorTexelDensityActionSettings
---@field private UVToolSelectionAPI UUVToolSelectionAPI
---@field private LivePreviewAPI UUVToolLivePreviewAPI
---@field private UVTool2DViewportAPI UUVTool2DViewportAPI
---@field private EmitChangeAPI UUVToolEmitChangeAPI
---@field private Factories TArray<UUVTexelDensityOperatorFactory>
---@field private LivePreviewBehaviorSet UInputBehaviorSet
---@field private LivePreviewBehaviorSource ULocalInputBehaviorSource
---@field private UnwrapGeometry UPreviewGeometry
---@field private LivePreviewGeometry UPreviewGeometry
---@field private TriangleSetMaterial UMaterialInstanceDynamic
local UUVEditorTexelDensityTool = {}

