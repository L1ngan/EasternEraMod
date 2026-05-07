---@class UDrawPolyPathTool : UInteractiveTool
---@field protected OutputTypeProperties UCreateMeshObjectTypeProperties @Property set for type of output object (StaticMesh, Volume, etc)
---@field protected TransformProps UDrawPolyPathProperties
---@field protected ExtrudeProperties UDrawPolyPathExtrudeProperties
---@field protected MaterialProperties UNewMeshMaterialProperties
---@field protected PlaneMechanic UConstructionPlaneMechanic @drawing plane and gizmo
---@field protected EditPreview UPolyEditPreviewMesh
---@field protected ExtrudeHeightMechanic UPlaneDistanceFromHitMechanic
---@field protected CurveDistMechanic USpatialCurveDistanceMechanic
---@field protected SurfacePathMechanic UCollectSurfacePathMechanic
local UDrawPolyPathTool = {}

