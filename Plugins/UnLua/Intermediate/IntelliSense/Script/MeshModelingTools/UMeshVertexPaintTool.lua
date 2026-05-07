---Mesh Vertex Color Painting TOol
---@class UMeshVertexPaintTool : UMeshSculptToolBase
---@field public PolygroupLayerProperties UPolygroupLayersProperties
---@field public BasicProperties UVertexPaintBasicProperties
---@field public FilterProperties UVertexPaintBrushFilterProperties @Filters on paint brush
---@field private PaintBrushOpProperties UVertexColorPaintBrushOpProps @This will be of type UVertexPaintBrushOpProps, we keep a ref so we can change active color on pick
---@field private EraseBrushOpProperties UVertexColorPaintBrushOpProps @This will be of type UVertexPaintBrushOpProps, we keep a ref so we can change active color on pick
---@field public QuickActions UMeshVertexPaintToolQuickActions
---@field public UtilityActions UMeshVertexPaintToolUtilityActions
---@field public PolyLassoMechanic UPolyLassoMarqueeMechanic
---@field protected PreviewMeshActor AInternalToolFrameworkActor
---@field protected DynamicMeshComponent UDynamicMeshComponent
---@field protected MeshElementsDisplay UMeshElementsVisualizer
local UMeshVertexPaintTool = {}

