---Simple Mesh Plane Cutting Tool
---@class UPlaneCutTool : UMultiSelectionMeshEditingTool
---@field protected BasicProperties UPlaneCutToolProperties
---@field protected Previews TArray<UMeshOpPreviewWithBackgroundCompute>
---@field protected MeshesToCut TArray<UDynamicMeshReplacementChangeTarget>
---@field protected PlaneMechanic UConstructionPlaneMechanic
local UPlaneCutTool = {}

---Flip the cutting plane (Hotkey: R)
function UPlaneCutTool:FlipPlane() end

---Cut with the current plane without exiting the tool (Hotkey: T)
function UPlaneCutTool:Cut() end

