---Draws a profile curve and revolves it around an axis.
---@class UDrawAndRevolveTool : UInteractiveTool
---@field protected ControlPointsMechanic UCurveControlPointsMechanic
---@field protected PlaneMechanic UConstructionPlaneMechanic
---@field protected OutputTypeProperties UCreateMeshObjectTypeProperties @Property set for type of output object (StaticMesh, Volume, etc)
---@field protected Settings URevolveToolProperties
---@field protected MaterialProperties UNewMeshMaterialProperties
---@field protected Preview UMeshOpPreviewWithBackgroundCompute
local UDrawAndRevolveTool = {}

