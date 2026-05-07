---@class UVertexPaintBrushFilterProperties : UInteractiveToolPropertySet
---@field public BrushAreaMode EMeshVertexPaintBrushAreaType @Area Mode specifies the shape of the brush and which triangles will be included relative to the cursor
---@field public AngleThreshold number @The Region affected by the current operation will be bounded by edge angles larger than this threshold
---@field public bUVSeams boolean @The Region affected by the current operation will be bounded by UV borders/seams
---@field public bNormalSeams boolean @The Region affected by the current operation will be bounded by Hard Normal edges/seams
---@field public VisibilityFilter EMeshVertexPaintVisibilityType @Control which triangles can be affected by the current operation based on visibility. Applied after all other filters.
---@field public bIsolateGeometrySelection boolean @If the tool was started with a mesh element selection, this setting hides everything  except that selection, to make painting it easier. Requires that a mesh element  selection exist on tool start.
---@field public bToolHasSelection boolean
---@field public MinTriVertCount integer @Number of vertices in a triangle the Lasso must hit to be counted as "inside" //UPROPERTY(EditAnywhere, Category = Filters, AdvancedDisplay, meta = (UIMin = 1, UIMax = 3, EditCondition = "CurrentSubToolType == EMeshVertexPaintInteractionType::PolyLasso"))
---@field public MaterialMode EMeshVertexPaintMaterialMode @Specify which Materials should be used to render the Mesh
---@field public bShowHitColor boolean @Display the Color under the cursor
---@field public CurrentSubToolType EMeshVertexPaintInteractionType @values below are for edit conditions and track the current BasicProperties setting
local UVertexPaintBrushFilterProperties = {}

