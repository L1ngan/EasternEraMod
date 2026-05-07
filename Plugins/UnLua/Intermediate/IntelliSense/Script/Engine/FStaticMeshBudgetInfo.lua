---@class FStaticMeshBudgetInfo
---@field public LodGroupName string @The name of the LOD group we will use for this budget.
---@field public MinimumExtent number @The minimum volume extent to assign this budget info. We will compare the mesh bounding box extent to this value.
local FStaticMeshBudgetInfo = {}
