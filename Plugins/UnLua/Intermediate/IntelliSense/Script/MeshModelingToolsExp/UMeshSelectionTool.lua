---@class UMeshSelectionTool : UDynamicMeshBrushTool
---@field public SelectionProps UMeshSelectionToolProperties
---@field public SelectionActions UMeshSelectionEditActions
---@field public EditActions UMeshSelectionToolActionPropertySet
---@field public MeshStatisticsProperties UMeshStatisticsProperties
---@field public MeshElementsDisplay UMeshElementsVisualizer
---@field public UVChannelProperties UMeshUVChannelProperties
---@field public PolygroupLayerProperties UPolygroupLayersProperties
---@field protected Selection UMeshSelectionSet
---@field protected SpawnedActors TArray<AActor>
local UMeshSelectionTool = {}

