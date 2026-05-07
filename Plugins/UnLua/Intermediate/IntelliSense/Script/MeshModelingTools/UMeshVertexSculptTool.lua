---Mesh Vertex Sculpt Tool Class
---@class UMeshVertexSculptTool : UMeshSculptToolBase
---@field public SculptProperties UVertexBrushSculptProperties @Properties that control sculpting
---@field public AlphaProperties UVertexBrushAlphaProperties
---@field public BrushAlpha UTexture2D
---@field public SymmetryProperties UMeshSymmetryProperties
---@field private SculptLayerProperties UMeshSculptLayerProperties @TODO: These sculpt layer properties should be moved off this tool, to a separate UI
---@field protected PreviewMeshActor AInternalToolFrameworkActor
---@field protected DynamicMeshComponent UDynamicMeshComponent
local UMeshVertexSculptTool = {}

