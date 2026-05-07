---Standard properties of the Voxel CSG operation
---@class UVoxelCSGMeshesToolProperties : UInteractiveToolPropertySet
---@field public Operation EVoxelCSGOperation @The type of operation
---@field public VoxelCount integer @The size of the geometry bounding box major axis measured in voxels.
---@field public MeshAdaptivity number @Remeshing adaptivity, prior to optional simplification
---@field public OffsetDistance number @Offset when remeshing, note large offsets with high voxels counts will be slow.  Hidden because this duplicates functionality of the voxel offset tool
---@field public bAutoSimplify boolean @Automatically simplify the result of voxel-based merge.
local UVoxelCSGMeshesToolProperties = {}

