---This tool allows the user to draw and extrude 2D polygons
---@class UDrawPolygonTool : UInteractiveTool
---@field protected OutputTypeProperties UCreateMeshObjectTypeProperties @Property set for type of output object (StaticMesh, Volume, etc)
---@field protected PolygonProperties UDrawPolygonToolStandardProperties @Properties that control polygon generation exposed to user via details view
---@field protected SnapProperties UDrawPolygonToolSnapProperties
---@field protected MaterialProperties UNewMeshMaterialProperties
---@field protected PreviewMesh UPreviewMesh
---@field protected HeightMechanic UPlaneDistanceFromHitMechanic
---@field protected DragAlignmentMechanic UDragAlignmentMechanic
---@field protected PlaneMechanic UConstructionPlaneMechanic
local UDrawPolygonTool = {}

