---Properties of the blend operation
---@class UVoxelBlendMeshesToolProperties : UInteractiveToolPropertySet
---@field public BlendPower number @Blend power controls the shape of the blend between shapes
---@field public BlendFalloff number @Blend falloff controls the size of the blend region
---@field public Operation EVoxelBlendOperation @How to combine the shapes
---@field public bVoxWrap boolean @Apply a "VoxWrap" operation to input mesh(es) before computing the blend.  Fixes results for inputs with holes and/or self-intersections.
---@field public bRemoveInternalsAfterVoxWrap boolean @Remove internal surfaces from the VoxWrap output, before computing the blend.
---@field public ThickenShells number @Thicken open-boundary surfaces (extrude them inwards) before VoxWrapping them. Units are in world space. If 0 then no extrusion is applied.
local UVoxelBlendMeshesToolProperties = {}

