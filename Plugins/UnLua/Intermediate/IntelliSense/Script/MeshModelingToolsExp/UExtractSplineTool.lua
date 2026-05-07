---* A tool to create splines from mesh cross sections or open mesh boundary edges.
---@class UExtractSplineTool : USingleSelectionMeshEditingTool
---@field private Settings UExtractSplineToolProperties
---@field private PlaneMechanic UConstructionPlaneMechanic
---@field private SelectionMechanic UPolygonSelectionMechanic
---@field private Preview UMeshOpPreviewWithBackgroundCompute
---@field private Factory UGenerateCrossSectionOpFactory
---@field private CutlineGeometry UPreviewGeometry
local UExtractSplineTool = {}

