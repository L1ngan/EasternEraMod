---Properties of the morphology tool
---@class UVoxelMorphologyMeshesToolProperties : UInteractiveToolPropertySet
---@field public Operation EMorphologyOperation @Which offset (or morphology) operation to apply
---@field public Distance number @Distance to offset the mesh
---@field public bVoxWrap boolean @Apply a "VoxWrap" operation to input mesh(es) before computing the morphology.  Fixes results for inputs with holes and/or self-intersections.
---@field public bRemoveInternalsAfterVoxWrap boolean @Remove internal surfaces from the VoxWrap output, before computing the morphology.
---@field public ThickenShells number @Thicken open-boundary surfaces (extrude them inwards) before VoxWrapping them. Units are in world space. If 0, no extrusion is applied.
local UVoxelMorphologyMeshesToolProperties = {}

