---* Tool
---* Inherit from IClickBehaviorTarget so we can click on boundary loops.
---@class UHoleFillTool : USingleSelectionMeshEditingTool
---@field protected SmoothHoleFillProperties USmoothHoleFillProperties
---@field protected Properties UHoleFillToolProperties
---@field protected Actions UHoleFillToolActions
---@field protected Statistics UHoleFillStatisticsProperties
---@field protected Preview UMeshOpPreviewWithBackgroundCompute
---@field protected SelectionMechanic UBoundarySelectionMechanic
local UHoleFillTool = {}

