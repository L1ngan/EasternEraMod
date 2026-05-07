---Deform a mesh using a regular hexahedral lattice
---@class ULatticeDeformerTool : UMultiTargetWithSelectionTool
---@field protected ControlPointsMechanic ULatticeControlPointsMechanic
---@field protected Settings ULatticeDeformerToolProperties
---@field protected Preview UMeshOpPreviewWithBackgroundCompute
---@field protected SculptLayerProperties UMeshSculptLayerProperties
---@field protected bLatticeDeformed boolean
local ULatticeDeformerTool = {}

