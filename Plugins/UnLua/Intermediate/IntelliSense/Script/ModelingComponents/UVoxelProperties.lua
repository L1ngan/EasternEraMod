---@class UVoxelProperties : UInteractiveToolPropertySet
---@field public VoxelCount integer @The size of the geometry bounding box major axis measured in voxels
---@field public bAutoSimplify boolean @Automatically simplify the result of voxel-based meshes.
---@field public bRemoveInternalSurfaces boolean @Remove internal, occluded geometry
---@field public SimplifyMaxErrorFactor number @The max error (as a multiple of the voxel size) to accept when simplifying the output
---@field public CubeRootMinComponentVolume number @Automatically remove components smaller than this (to clean up any isolated floating bits)
local UVoxelProperties = {}

