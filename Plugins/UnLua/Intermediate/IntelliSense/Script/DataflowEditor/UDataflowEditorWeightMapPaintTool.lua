---Mesh Element Paint Tool Class
---@class UDataflowEditorWeightMapPaintTool : UMeshSculptToolBase
---@field public FilterProperties UDataflowEditorWeightMapPaintBrushFilterProperties @Filters on paint brush
---@field private PaintBrushOpProperties UDataflowWeightMapPaintBrushOpProps
---@field private SmoothBrushOpProperties UDataflowWeightMapSmoothBrushOpProps
---@field private EraseBrushOpProperties UDataflowWeightMapEraseBrushOpProps
---@field public ActionsProps UDataflowEditorMeshWeightMapPaintToolActions
---@field public UpdateWeightMapProperties UDataflowEditorUpdateWeightMapProperties
---@field public PolyLassoMechanic UPolyLassoMarqueeMechanic
---@field protected PolygonSelectionMechanic UPolygonSelectionMechanic @Gradient Support
---@field protected PreviewMeshActor AInternalToolFrameworkActor
---@field protected DynamicMeshComponent UDynamicMeshComponent
---@field protected MeshElementsDisplay UMeshElementsVisualizer
---@field protected DataflowEditorContextObject UDataflowContextObject
local UDataflowEditorWeightMapPaintTool = {}

