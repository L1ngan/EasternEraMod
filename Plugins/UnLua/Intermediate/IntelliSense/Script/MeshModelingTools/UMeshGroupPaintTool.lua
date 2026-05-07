---Mesh Element Paint Tool Class
---@class UMeshGroupPaintTool : UMeshSculptToolBase
---@field public PolygroupLayerProperties UPolygroupLayersProperties
---@field public FilterProperties UGroupPaintBrushFilterProperties @Filters on paint brush
---@field private PaintBrushOpProperties UGroupPaintBrushOpProps @This will be of type UGroupPaintBrushOpProps, we keep a ref so we can change active group ID on pick
---@field private EraseBrushOpProperties UGroupEraseBrushOpProps
---@field public FreezeActions UMeshGroupPaintToolFreezeActions
---@field public PolyLassoMechanic UPolyLassoMarqueeMechanic
---@field protected PreviewMeshActor AInternalToolFrameworkActor
---@field protected DynamicMeshComponent UDynamicMeshComponent
---@field protected MeshElementsDisplay UMeshElementsVisualizer
local UMeshGroupPaintTool = {}

