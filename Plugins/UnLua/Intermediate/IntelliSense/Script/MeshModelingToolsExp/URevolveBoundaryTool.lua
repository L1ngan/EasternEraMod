---Tool that revolves the boundary of a mesh around an axis to create a new mesh. Mainly useful for
---revolving planar meshes.
---@class URevolveBoundaryTool : UMeshBoundaryToolBase
---@field protected OutputTypeProperties UCreateMeshObjectTypeProperties @Property set for type of output object (StaticMesh, Volume, etc)
---@field protected Settings URevolveBoundaryToolProperties
---@field protected MaterialProperties UNewMeshMaterialProperties
---@field protected PlaneMechanic UConstructionPlaneMechanic
---@field protected Preview UMeshOpPreviewWithBackgroundCompute
local URevolveBoundaryTool = {}

