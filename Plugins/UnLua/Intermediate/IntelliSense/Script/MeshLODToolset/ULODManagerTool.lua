---Mesh Attribute Editor Tool
---@class ULODManagerTool : UMultiSelectionMeshEditingTool
---@field protected LODInfoProperties ULODManagerLODProperties
---@field protected LODPreviewProperties ULODManagerPreviewLODProperties
---@field protected HiResSourceModelActions ULODManagerHiResSourceModelActions
---@field protected MaterialActions ULODManagerMaterialActions
---@field protected LODPreview UPreviewMesh
---@field protected LODPreviewLines UPreviewGeometry
local ULODManagerTool = {}

function ULODManagerTool:RemoveUnreferencedMaterials() end

function ULODManagerTool:MoveHiResToLOD0() end

function ULODManagerTool:DeleteHiResSourceModel() end

