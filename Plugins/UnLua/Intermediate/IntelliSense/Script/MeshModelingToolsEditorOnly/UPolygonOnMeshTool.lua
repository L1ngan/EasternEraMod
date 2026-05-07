---Simple Mesh Plane Cutting Tool
---@class UPolygonOnMeshTool : USingleSelectionMeshEditingTool
---@field protected BasicProperties UPolygonOnMeshToolProperties
---@field protected ActionProperties UPolygonOnMeshToolActionPropertySet
---@field protected Preview UMeshOpPreviewWithBackgroundCompute
---@field protected DrawnLineSet ULineSetComponent
---@field protected PlaneMechanic UConstructionPlaneMechanic
---@field protected DrawPolygonMechanic UCollectSurfacePathMechanic
local UPolygonOnMeshTool = {}

