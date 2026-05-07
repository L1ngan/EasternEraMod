---Base tool to create primitives
---@class UAddPrimitiveTool : USingleClickTool
---@field protected OutputTypeProperties UCreateMeshObjectTypeProperties @Property set for type of output object (StaticMesh, Volume, etc)
---@field protected ShapeSettings UProceduralShapeToolProperties
---@field protected MaterialProperties UNewMeshMaterialProperties
---@field protected PreviewMesh UPreviewMesh
---@field protected Gizmo UCombinedTransformGizmo
---@field protected DragAlignmentMechanic UDragAlignmentMechanic
---@field protected AssetName string
local UAddPrimitiveTool = {}

